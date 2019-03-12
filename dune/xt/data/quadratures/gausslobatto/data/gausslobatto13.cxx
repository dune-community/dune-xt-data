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
std::vector<std::vector<double>> GaussLobattoData<13>::get()
{
  return {{-1, 0.01282051282051282051282},
          {-0.9533098466421639118969, 0.0778016867468189277936},
          {-0.8463475646518723168659, 0.1349819266896083491199},
          {-0.6861884690817574260728, 0.1836468652035500920075},
          {-0.4829098210913362017469, 0.2207677935661100860855},
          {-0.2492869301062399925687, 0.2440157903066763564586},
          {0, 0.251930849333446736044},
          {0.2492869301062399925687, 0.2440157903066763564586},
          {0.4829098210913362017469, 0.220767793566110086086},
          {0.6861884690817574260728, 0.1836468652035500920075},
          {0.8463475646518723168659, 0.1349819266896083491199},
          {0.9533098466421639118969, 0.077801686746818927794},
          {1, 0.01282051282051282051282}};
}


} // namespace Data
} // namespace XT
} // namespace Dune
