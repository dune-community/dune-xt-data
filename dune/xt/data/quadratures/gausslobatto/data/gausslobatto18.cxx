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
std::vector<std::vector<double>> GaussLobattoData<18>::get()
{
  return {{-1, 0.006535947712418300653595},
          {-0.9761055574121985428645, 0.0399706288109140661376},
          {-0.9206491853475338738379, 0.0706371668856336649992},
          {-0.8355935352180902137137, 0.0990162717175028023944},
          {-0.7236793292832426813062, 0.1242105331329671002634},
          {-0.5885048343186617611735, 0.145411961573802267983},
          {-0.4344150369121239753423, 0.161939517237602489264},
          {-0.2663626528782809841677, 0.1732621094894562260106},
          {-0.0897490934846521110226, 0.1790158634397030822938},
          {0.08974909348465211102265, 0.179015863439703082294},
          {0.2663626528782809841677, 0.1732621094894562260106},
          {0.4344150369121239753423, 0.161939517237602489264},
          {0.5885048343186617611735, 0.145411961573802267983},
          {0.7236793292832426813062, 0.124210533132967100263},
          {0.8355935352180902137137, 0.099016271717502802394},
          {0.9206491853475338738379, 0.0706371668856336649992},
          {0.9761055574121985428645, 0.0399706288109140661376},
          {1, 0.006535947712418300653595}};
}


} // namespace Data
} // namespace XT
} // namespace Dune
