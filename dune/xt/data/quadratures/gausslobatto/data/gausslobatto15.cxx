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

namespace Dune::XT::Data {


template <>
std::vector<std::vector<double>> GaussLobattoData<15>::get()
{
  return {{-1, 0.009523809523809523809524},
          {-0.9652459265038385727959, 0.0580298930286012490969},
          {-0.8850820442229762988254, 0.1016600703257180676037},
          {-0.7635196899518152007041, 0.1405116998024281094605},
          {-0.6062532054698457111235, 0.1727896472536009490521},
          {-0.4206380547136724809219, 0.196987235964613356093},
          {-0.2153539553637942382257, 0.2119735859268209201274},
          {0, 0.217048116348815649515},
          {0.2153539553637942382257, 0.2119735859268209201274},
          {0.4206380547136724809219, 0.1969872359646133560925},
          {0.6062532054698457111235, 0.1727896472536009490521},
          {0.7635196899518152007041, 0.1405116998024281094605},
          {0.8850820442229762988254, 0.1016600703257180676037},
          {0.9652459265038385727959, 0.0580298930286012490969},
          {1, 0.009523809523809523809524}};
}


} // namespace Dune::XT::Data
