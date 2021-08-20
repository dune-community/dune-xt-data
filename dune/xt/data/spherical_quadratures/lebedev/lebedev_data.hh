// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   René Fritze    (2018)
//   Tobias Leibner (2018 - 2019)

#ifndef DUNE_XT_DATA_DUNE_XT_DATA_LEBEDEV_LEBEDEV_DATA_HH
#define DUNE_XT_DATA_DUNE_XT_DATA_LEBEDEV_LEBEDEV_DATA_HH

#include <stddef.h>
#include <array>
#include <utility>
#include <vector>

namespace Dune {
namespace XT {
namespace Data {


template <size_t order>
struct LebedevData
{
  static void get(std::vector<std::pair<std::array<double, 3>, double>>& quad_rule);
};


} // namespace Data
} // namespace XT
} // namespace Dune

#endif // DUNE_XT_DATA_DUNE_XT_DATA_LEBEDEV_LEBEDEV_DATA_HH
