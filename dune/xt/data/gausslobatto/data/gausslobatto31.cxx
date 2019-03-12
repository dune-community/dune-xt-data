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
std::vector<std::vector<double>> GaussLobattoData<31>::get()
{
  return {{-1, 0.002150537634408602150538},
          {-0.9921168443464810885893, 0.0132224710254646703026},
          {-0.973654935815736474826, 0.02366643323027031673},
          {-0.9448691702080392298064, 0.0338539404052240576298},
          {-0.9060669514412698131445, 0.0436818181600669128297},
          {-0.857659995297455610367, 0.0530464654934487827743},
          {-0.8001615431924629892723, 0.0618487412904546233907},
          {-0.7341811363090752421341, 0.0699953775941005704502},
          {-0.660418202611525523337, 0.0774000323414756186343},
          {-0.5796546572080019130033, 0.0839842205175297306653},
          {-0.492746619098832405704, 0.0896781510452608222481},
          {-0.4006153382805618063027, 0.0944214683778579574322},
          {-0.3042374312728726209595, 0.09816389301371275712},
          {-0.204634529247524501141, 0.1008657547986505133956},
          {-0.1028624487606822770891, 0.1024984135954703976759},
          {0, 0.1030445629532073331418},
          {0.1028624487606822770891, 0.102498413595470397676},
          {0.2046345292475245011411, 0.1008657547986505133956},
          {0.3042374312728726209595, 0.09816389301371275712},
          {0.4006153382805618063027, 0.09442146837785795743219},
          {0.4927466190988324057038, 0.0896781510452608222481},
          {0.5796546572080019130033, 0.0839842205175297306653},
          {0.660418202611525523337, 0.0774000323414756186343},
          {0.7341811363090752421341, 0.06999537759410057045022},
          {0.8001615431924629892723, 0.0618487412904546233907},
          {0.857659995297455610367, 0.0530464654934487827743},
          {0.906066951441269813145, 0.0436818181600669128297},
          {0.9448691702080392298064, 0.03385394040522405763},
          {0.9736549358157364748261, 0.02366643323027031673},
          {0.9921168443464810885893, 0.013222471025464670303},
          {1, 0.002150537634408602150538}};
}


} // namespace Data
} // namespace XT
} // namespace Dune
