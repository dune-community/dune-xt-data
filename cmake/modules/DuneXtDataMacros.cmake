# ~~~
# This file is part of the dune-xt-data project:
#   https://github.com/dune-community/dune-xt-data
# Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
# License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
#      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
#          with "runtime exception" (http://www.dune-project.org/license.html)
# Authors:
#   René Fritze (2018)
# ~~~

include(Hints)

find_package(ClangFormat 8 EXACT)
macro(add_format glob_dir)
  if(${ARGC} GREATER 1)
    message(WARNING "'add_format' API has changed. Please provide a single "
                    "search directory instead of multiple filenames")
  endif()
  if(NOT TARGET format)
    add_custom_target(format)
  endif(NOT TARGET format)
  string(REPLACE "/"
                 "_"
                 fn
                 ${glob_dir})
  message(STATUS "adding format target")
  if(ClangFormat_FOUND)
    file(GLOB_RECURSE _files
                      "${glob_dir}/*.hh"
                      "${glob_dir}/*.cc"
                      "${glob_dir}/*.cxx"
                      "${glob_dir}/*.hxx"
                      "${glob_dir}/*.cpp"
                      "${glob_dir}/*.hpp"
                      "${glob_dir}/*.h"
                      "${glob_dir}/*.c"
                      "${glob_dir}/*.pbh")
    # Formatting gtest.h causes extremely high memory usage and takes a long time
    list(FILTER _files EXCLUDE REGEX ".*gtest.h$")
    add_custom_target("format_${fn}" ${ClangFormat_EXECUTABLE} -i -style=file -fallback-style=none ${_files})
    add_dependencies(format "format_${fn}")
  else()
    message(WARNING "not adding format target because clang-format is missing or "
                    "wrong version: ${ClangFormat_EXECUTABLE} ${ClangFormat_VERSION}")
  endif(ClangFormat_FOUND)
  file(GLOB_RECURSE _pyfiles "${glob_dir}/*.py")
  add_custom_target("pyformat_${fn}"
                    ${CMAKE_CURRENT_BINARY_DIR}/run-in-dune-env
                    yapf
                    -i
                    --style=${CMAKE_CURRENT_SOURCE_DIR}/python/.style.yapf
                    ${_pyfiles})
  add_dependencies(format "pyformat_${fn}")
  file(GLOB_RECURSE _files "${glob_dir}/*.cmake" "${glob_dir}/CMakeLists.txt")
  file(GLOB_RECURSE _exclude_files "${glob_dir}/*builder_definitions.cmake")
  list(REMOVE_ITEM _files "${glob_dir}/config.h.cmake")
  list(REMOVE_ITEM _files "${_exclude_files}")
  add_custom_target("format_${fn}_cmake"
                    ${CMAKE_BINARY_DIR}/run-in-dune-env
                    cmake-format
                    -i
                    -c
                    ${glob_dir}/.cmake_format.py
                    ${_files})
  add_dependencies(format "format_${fn}_cmake")
endmacro(add_format)

find_package(ClangTidy 8)
macro(add_tidy)
  if(ClangTidy_FOUND)
    dune_symlink_to_source_files(FILES .clang-tidy)
    message(STATUS "adding tidy target")
    add_custom_target(tidy)
    add_custom_target(fix_tidy)
    add_tidy_subdir(data)
  else()
    message(WARNING "not adding tidy target because clang-tidy is missing or"
                    "wrong version: ${ClangTidy_EXECUTABLE} ${ClangTidy_VERSION}")
  endif(ClangTidy_FOUND)
endmacro(add_tidy)

macro(add_tidy_subdir _dxt_subdir)
  set(BASE ${PROJECT_SOURCE_DIR}/dune/xt/${_dxt_subdir})
  file(GLOB_RECURSE _files
                    "${BASE}/*.hh"
                    "${BASE}/*.cc"
                    "${BASE}/*.cxx")
  set(BASE ${PROJECT_SOURCE_DIR}/python/dune/xt/${_dxt_subdir})
  file(GLOB_RECURSE _pyfiles
                    "${BASE}/*.hh"
                    "${BASE}/*.cc"
                    "${BASE}/*.cxx")
  list(APPEND _files ${_pyfiles})
  list(REMOVE_DUPLICATES _files)
  list(REMOVE_ITEM _files ${PROJECT_SOURCE_DIR}/dune/xt/data/test/gtest/gtest-all.cxx)
  list(REMOVE_ITEM _files ${PROJECT_SOURCE_DIR}/dune/xt/data/disable_warnings.hh)
  list(REMOVE_ITEM _files ${PROJECT_SOURCE_DIR}/dune/xt/data/reenable_warnings.hh)
  set(TIDY_ARGS
      -config=
      # -format-style=file
      -extra-arg-before='-includeconfig.h'
      -p=${CMAKE_CURRENT_BINARY_DIR}
      -header-filter=\".*/dune/xt/${_dxt_subdir}.*\")
  add_custom_target(tidy_${_dxt_subdir}
    COMMAND ${RunTidy_EXECUTABLE} ${TIDY_ARGS}
                            -export-fixes=${CMAKE_CURRENT_BINARY_DIR}/clang-tidy.fixes ${_files}
                    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
  add_custom_target(fix_tidy_${_dxt_subdir}
    COMMAND ${RunTidy_EXECUTABLE} ${TIDY_ARGS} -fix ${_files}
                    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
  add_dependencies(tidy tidy_${_dxt_subdir})
  add_dependencies(fix_tidy fix_tidy_${_dxt_subdir})
endmacro(add_tidy_subdir)


macro(INCLUDE_SYS_DIR)
  foreach(ARG ${ARGN})
    if(IS_DIRECTORY ${ARG})
      include_directories(${ARG}) # due to https://gcc.gnu.org/bugzilla/show_bug.cgi?id=70129  we have to filter what
                                  # to sys-include includes
      if(${ARG} MATCHES "/usr/include")
        message(AUTHOR_WARNING "-isystem not supported for ${ARG}")
      else()
        add_definitions("-isystem ${ARG}")
      endif()
    else(IS_DIRECTORY ${ARG})
      message(STATUS "Include directory ${ARG} does not exist")
    endif(IS_DIRECTORY ${ARG})
  endforeach(ARG)
endmacro(INCLUDE_SYS_DIR)

macro(make_dependent_modules_sys_included) # disable most warnings from dependent modules
  foreach(_mod ${ALL_DEPENDENCIES})
    if(${_mod}_INCLUDE_DIRS)
      foreach(_idir ${${_mod}_INCLUDE_DIRS})
        include_sys_dir(${_idir})
      endforeach(_idir)
    endif(${_mod}_INCLUDE_DIRS)
  endforeach(_mod DEPENDENCIES)
endmacro(make_dependent_modules_sys_included)

macro(add_dummy_python_test)
  add_custom_target(dummy_python_test
                    "${CMAKE_BINARY_DIR}/run-in-dune-env"
                    "${DUNE_PYTHON_VIRTUALENV_EXECUTABLE}"
                    "${CMAKE_SOURCE_DIR}/python/test/dummy.py"
                    WORKING_DIRECTORY "${CMAKE_BINARY_DIR}/python"
                    DEPENDS bindings
                    VERBATIM USES_TERMINAL)
  if(NOT TARGET test_python)
    add_custom_target(test_python)
  endif(TARGET test_python)
  add_dependencies(test_python dummy_python_test)
endmacro(add_dummy_python_test)

# library checks  #########################################################################
find_package(PkgConfig)

set(DS_REQUIRED_BOOST_LIBS filesystem)
set(BOOST_ROOT_HINTS "$ENV{BOOST_ROOT}" ${root_hints})
# check if any hints are provided by user
if(DEFINED BOOST_ROOT OR DEFINED BOOOST_INCLUDEDIR OR DEFINED BOOST_LIBRARYDIR)
  find_package(Boost 1.48.0 REQUIRED COMPONENTS ${DS_REQUIRED_BOOST_LIBS})
else(DEFINED BOOST_ROOT OR DEFINED BOOOST_INCLUDEDIR OR DEFINED BOOST_LIBRARYDIR)
  # FindBoost can only take a single hint directory from BOOST_ROOT, so we loop over all hints
  foreach(BOOST_ROOT_HINT ${BOOST_ROOT_HINTS})
    set(BOOST_ROOT ${BOOST_ROOT_HINT})
    find_package(Boost 1.48.0 COMPONENTS ${DS_REQUIRED_BOOST_LIBS})
    if(${Boost_FOUND})
      break()
    endif()
  endforeach(BOOST_ROOT_HINT ${BOOST_ROOT_HINTS})
  # check for Boost again with REQUIRED keyword to make boost mandatory
  find_package(Boost 1.48.0 REQUIRED COMPONENTS ${DS_REQUIRED_BOOST_LIBS})
endif(DEFINED BOOST_ROOT OR DEFINED BOOOST_INCLUDEDIR OR DEFINED BOOST_LIBRARYDIR)
if(${Boost_INCLUDE_DIRS})
  dune_register_package_flags(INCLUDE_DIRS ${Boost_INCLUDE_DIRS})
endif(${Boost_INCLUDE_DIRS})
# if imported targets are available, use them
if(TARGET Boost::headers)
  dune_register_package_flags(LIBRARIES Boost::headers)
endif(TARGET Boost::headers)
foreach(_boost_lib ${DS_REQUIRED_BOOST_LIBS})
  set(_BOOST_LIB "")
  string(TOUPPER "${_boost_lib}" _BOOST_LIB)
  if(TARGET Boost::${_boost_lib})
    dune_register_package_flags(LIBRARIES Boost::${_boost_lib})
  else(TARGET Boost::${_boost_lib})
    dune_register_package_flags(LIBRARIES ${Boost_${_BOOST_LIB}_LIBRARY})
  endif(TARGET Boost::${_boost_lib})
endforeach(_boost_lib ${DS_REQUIRED_BOOST_LIBS})
