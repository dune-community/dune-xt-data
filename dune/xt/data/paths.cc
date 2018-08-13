// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
// or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
// with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Rene Milk (2018)

#include <config.h>

#include <boost/filesystem.hpp>

namespace Dune {
namespace XT {
namespace Data {

boost::filesystem::path basedir()
{
  return boost::filesystem::path(dxt_data_basedir);
}

std::string spe10_model1_filename()
{
  return (basedir() / "perm_case1.dat").string();
}
std::string spe10_model2_filename()
{
  return (basedir() / "spe_perm.dat").string();
}

} // namespace Data
} // namespace XT
} // namespace Dune
