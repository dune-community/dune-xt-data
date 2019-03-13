// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   René Fritze    (2018)
//   Tobias Leibner (2018 - 2019)
//
// This file is part of the dune-gdt project:

#include "../gausslobatto_data.hh"

namespace Dune {
namespace XT {
namespace Data {


template <>
std::vector<std::vector<double>> GaussLobattoData<6>::get()
{
  return {{-1, 0.06666666666666666666667},
          {-0.765055323929464692851, 0.3784749562978469803166},
          {-0.2852315164806450963142, 0.5548583770354863530167},
          {0.2852315164806450963142, 0.5548583770354863530167},
          {0.765055323929464692851, 0.3784749562978469803166},
          {1, 0.06666666666666666666667}};
}


} // namespace Data
} // namespace XT
} // namespace Dune
