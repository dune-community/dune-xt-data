// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner (2018)
//
// This file is part of the dune-gdt project:

#include "../gausslobatto_data.hh"

namespace Dune {
namespace XT {
namespace Data {
namespace internal {


template <>
std::vector<std::vector<double>> GaussLobattoData<5>::get()
{
  return {{-1, 0.1},
          {-0.6546536707079771437983, 0.544444444444444444444},
          {0, 0.7111111111111111111111},
          {0.654653670707977143798, 0.544444444444444444444},
          {1, 0.1}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
