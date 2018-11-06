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

cmake_minimum_required(VERSION 2.8.12)
project(dune-xt-data CXX)

if(NOT (dune-common_DIR OR dune-common_ROOT OR "${CMAKE_PREFIX_PATH}" MATCHES ".*dune-common.*"))
  string(REPLACE ${CMAKE_PROJECT_NAME}
                 dune-common
                 dune-common_DIR
                 ${PROJECT_BINARY_DIR})
endif()

# find dune-common and set the module path
find_package(dune-common REQUIRED)
list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/modules" ${dune-common_MODULE_PATH})

# include the dune macros
include(DuneMacros)

find_package(dune-xt-common REQUIRED)
find_package(dune-pybindxi REQUIRED)
list(APPEND CMAKE_MODULE_PATH "${dune-xt-common_MODULE_PATH}" "${dune-pybindxi_MODULE_PATH}")
include(DuneUtils)

set(DXT_DATA_BASEDIR "${CMAKE_CURRENT_BINARY_DIR}/data")

# start a dune project with information from dune.module
dune_project()
dune_enable_all_packages(INCLUDE_DIRS ${dune-xt-data_SOURCE_DIR}/dune MODULE_LIBRARIES dxt_data)

include(DuneXTInstallPythonPackage)
# this symlinks all files in python/ to the binary dir and install into the virtualenv from there thereby making the
# compiled extensions directly usable from the venv
dune_python_install_package(PATH python)
dxt_add_make_dependent_bindings(dune-xt-common)
include_dependent_binary_python_dirs()
# do not change order here
include(DuneUtils)
add_subdirectory(python)

add_header_listing()
make_dependent_modules_sys_included()

add_subdirectory("dune/xt/data")
add_subdirectory("cmake/modules")

add_format(${CMAKE_CURRENT_SOURCE_DIR})
add_tidy(${CMAKE_CURRENT_SOURCE_DIR})
add_pylicense()

# finalize the dune project, e.g. generating config.h etc.
finalize_dune_project(GENERATE_CONFIG_H_CMAKE)
