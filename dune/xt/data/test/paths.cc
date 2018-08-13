// This file is part of the dune-xt-common project:
//   https://github.com/dune-community/dune-xt-common
// Copyright 2009-2018 dune-xt-common developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Felix Schindler (2012, 2014, 2016 - 2017)
//   Rene Milk       (2012 - 2013, 2015 - 2016, 2018)
//   Tobias Leibner  (2014, 2016)

/**
 * This file is intended as a starting point for quick testing.
 */

#include <dune/xt/common/test/main.hxx>

#include <boost/filesystem.hpp>

#include <dune/xt/data/paths.hh>

using namespace boost::filesystem;

void test_file(std::string fn)
{
  path filepath{fn};

  EXPECT_TRUE(exists(filepath));
  EXPECT_TRUE(is_regular_file(filepath));
  EXPECT_GE(file_size(filepath), 1);
  std::string content;
  load_string_file(filepath, content);
}

GTEST_TEST(paths, main)
{
  using namespace Dune::XT::Data;
  test_file(spe10_model1_filename());
  test_file(spe10_model2_filename());
}
