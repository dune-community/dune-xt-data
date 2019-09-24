# ~~~
# This file is part of the dune-xt-data project:
#   https://github.com/dune-community/dune-xt-data
# Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
# License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
#      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
#          with "runtime exception" (http://www.dune-project.org/license.html)
# Authors:
#   René Fritze    (2018)
#   Tobias Leibner (2019)
# ~~~

enable_testing()

include_directories(SYSTEM ${CMAKE_CURRENT_SOURCE_DIR}/gtest)
dune_library_add_sources(gtest_dune_xt_data SOURCES gtest/gtest-all.cxx)

dune_add_test(NAME test_paths SOURCES paths.cc LINK_LIBRARIES gtest_dune_xt_data)
dune_add_test(NAME test_quadratures SOURCES quadratures.cc LINK_LIBRARIES gtest_dune_xt_data)
dune_add_test(NAME test_spherical_quadratures SOURCES spherical_quadratures.cc LINK_LIBRARIES gtest_dune_xt_data)
add_custom_target(test_binaries DEPENDS test_paths test_quadratures test_spherical_quadratures)
