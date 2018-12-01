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
std::vector<std::vector<double>> GaussLobattoData<4>::get()
{
  return {{-1, 0.1666666666666666666667},
          {-0.447213595499957939282, 0.8333333333333333333333},
          {0.447213595499957939282, 0.833333333333333333333},
          {1, 0.1666666666666666666667}};
}


} // namespace internal
} // namespace Data
} // namespace XT
} // namespace Dune
