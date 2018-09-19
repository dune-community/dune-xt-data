// This file is part of the dune-gdt project:
//   https://github.com/dune-community/dune-gdt
// Copyright 2010-2017, dune-gdt developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner  (2017)

#include "../gausslobatto_data.hh"

namespace Dune {
namespace XT {
namespace Data {
namespace internal {


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


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
