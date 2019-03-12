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


template <>
std::vector<std::vector<double>> GaussLobattoData<7>::get()
{
  return {{-1, 0.04761904761904761904762},
          {-0.830223896278566929872, 0.276826047361565948011},
          {-0.4688487934707142138038, 0.4317453812098626234179},
          {0, 0.487619047619047619048},
          {0.468848793470714213804, 0.431745381209862623418},
          {0.830223896278566929872, 0.2768260473615659480107},
          {1, 0.04761904761904761904762}};
}


} // namespace Data
} // namespace XT
} // namespace Dune
