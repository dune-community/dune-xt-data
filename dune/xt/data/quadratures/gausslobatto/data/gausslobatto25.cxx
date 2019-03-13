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
std::vector<std::vector<double>> GaussLobattoData<25>::get()
{
  return {{-1, 0.003333333333333333333333},
          {-0.9877899449314937092718, 0.0204651689329743853085},
          {-0.9592641382525344788599, 0.0365047387942713720324},
          {-0.9149827707346225783232, 0.051936228368491474643},
          {-0.8556764658353165775238, 0.0665137286753127846939},
          {-0.7823196592407167803992, 0.0799987748362929818016},
          {-0.6961170488151343667604, 0.0921701399106204219127},
          {-0.5984841472799932680976, 0.102828030347957830828},
          {-0.491024114818878382619, 0.1117974662683208881562},
          {-0.3755014578592272332287, 0.1189311794068118254094},
          {-0.2538130641688765801799, 0.1241120389379502906952},
          {-0.127957059483106972709, 0.1272549775383314470171},
          {0, 0.128308389298661928337},
          {0.127957059483106972709, 0.1272549775383314470171},
          {0.2538130641688765801799, 0.1241120389379502906952},
          {0.3755014578592272332287, 0.118931179406811825409},
          {0.491024114818878382619, 0.111797466268320888156},
          {0.5984841472799932680976, 0.1028280303479578308275},
          {0.6961170488151343667604, 0.0921701399106204219127},
          {0.782319659240716780399, 0.0799987748362929818016},
          {0.8556764658353165775238, 0.06651372867531278469387},
          {0.9149827707346225783232, 0.051936228368491474643},
          {0.9592641382525344788599, 0.036504738794271372032},
          {0.9877899449314937092718, 0.0204651689329743853085},
          {1, 0.003333333333333333333333}};
}


} // namespace Data
} // namespace XT
} // namespace Dune