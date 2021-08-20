// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner (2019)

#include "config.h"

#define GTEST_DONT_DEFINE_TEST 0

#include <dune/common/parallel/mpihelper.hh>

#include <dune/xt/data/test/gtest/gtest.h>

int main(int argc, char** argv)
{
  using namespace Dune;

  testing::InitGoogleTest(&argc, argv);
  Dune::MPIHelper::instance(argc, argv);

  return RUN_ALL_TESTS();
} // ... main(...)
