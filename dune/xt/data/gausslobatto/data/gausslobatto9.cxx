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
std::vector<std::vector<double>> GaussLobattoData<9>::get()
{
  return {{-1, 0.02777777777777777777778},
          {-0.8997579954114601573124, 0.1654953615608055250463},
          {-0.6771862795107377534459, 0.274538712500161735281},
          {-0.3631174638261781587108, 0.3464285109730463451151},
          {0, 0.3715192743764172335601},
          {0.3631174638261781587108, 0.3464285109730463451151},
          {0.6771862795107377534459, 0.2745387125001617352807},
          {0.8997579954114601573124, 0.165495361560805525046},
          {1, 0.02777777777777777777778}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
