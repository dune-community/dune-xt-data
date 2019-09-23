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

find_package(ClangFormat 6 EXACT)
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

# library checks  #########################################################################
set(DS_REQUIRED_BOOST_LIBS filesystem)
find_package(PkgConfig)
find_package(Boost 1.48.0
             COMPONENTS ${DS_REQUIRED_BOOST_LIBS}
                        REQUIRED
                        HINTS
                        ${root_hints})
dune_register_package_flags(INCLUDE_DIRS ${Boost_INCLUDE_DIRS})
foreach(_boost_lib ${DS_REQUIRED_BOOST_LIBS})
  set(_BOOST_LIB "")
  string(TOUPPER "${_boost_lib}" _BOOST_LIB)
  dune_register_package_flags(LIBRARIES ${Boost_${_BOOST_LIB}_LIBRARY})
  if(TARGET Boost::${_boost_lib})
    dune_register_package_flags(LIBRARIES Boost::${_boost_lib})
  endif()
endforeach(_boost_lib ${DS_REQUIRED_BOOST_LIBS})
