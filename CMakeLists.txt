# ~~~
# This file is part of the dune-xt-data project:
#   https://github.com/dune-community/dune-xt-data
# Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
# License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
#      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
#          with "runtime exception" (http://www.dune-project.org/license.html)
# Authors:
#   Felix Schindler (2019)
#   René Fritze     (2018)
#   Tobias Leibner  (2018)
# ~~~

cmake_minimum_required(VERSION 3.1)
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

set(DXT_DATA_BASEDIR "${CMAKE_CURRENT_BINARY_DIR}/data")

# start a dune project with information from dune.module
dune_project()
dune_enable_all_packages(INCLUDE_DIRS ${dune-xt-data_SOURCE_DIR}/dune MODULE_LIBRARIES dxt_data)

add_subdirectory(python)

add_subdirectory("dune/xt/data")
add_subdirectory("cmake/modules")

# finalize the dune project, e.g. generating config.h etc.
finalize_dune_project(GENERATE_CONFIG_H_CMAKE)
