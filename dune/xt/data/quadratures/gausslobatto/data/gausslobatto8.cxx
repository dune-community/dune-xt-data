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
std::vector<std::vector<double>> GaussLobattoData<8>::get()
{
  return {{-1, 0.03571428571428571428571},
          {-0.8717401485096066153375, 0.210704227143506039383},
          {-0.5917001814331423021445, 0.3411226924835043647642},
          {-0.2092992179024788687687, 0.4124587946587038815671},
          {0.2092992179024788687687, 0.412458794658703881567},
          {0.5917001814331423021445, 0.341122692483504364764},
          {0.8717401485096066153375, 0.210704227143506039383},
          {1, 0.03571428571428571428571}};
}


} // namespace Data
} // namespace XT
} // namespace Dune
