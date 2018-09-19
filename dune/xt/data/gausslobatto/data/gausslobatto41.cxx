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
std::vector<std::vector<double>> GaussLobattoData<41>::get()
{
  return {{-1, 0.001219512195121951219512},
          {-0.995527127445284361488, 0.0075066587628515885292},
          {-0.9850318591247247762539, 0.0134720710944706066176},
          {-0.9686108695676818300659, 0.019353298566251679906},
          {-0.9463641996474921212005, 0.025117698393601086512},
          {-0.9184258706979038131999, 0.030730929097922458568},
          {-0.8849639721696151227803, 0.0361593034446895125105},
          {-0.8461797721039918422188, 0.0413701961555726407579},
          {-0.8023065339580917814162, 0.04633227634865161448},
          {-0.753608121886951364915, 0.05101570494798651345753},
          {-0.7003774167806829577954, 0.0553923169189143105392},
          {-0.642934556064585422877, 0.0594357916635436557448},
          {-0.581625008915212688026, 0.0631218117275497954152},
          {-0.5168174988471293169775, 0.0664282092328427060437},
          {-0.4489017863148284989596, 0.06933509928709489512501},
          {-0.3782863247310832046596, 0.0718249996197639704663},
          {-0.3053958040294457421248, 0.07388293574738960636909},
          {-0.2306685965595302588491, 0.0754965310459179727906},
          {-0.154554120683840000538, 0.07665608119331747059783},
          {-0.0775101379362542755939, 0.0773546125373055485369},
          {0, 0.0775879240384808316267},
          {0.0775101379362542755939, 0.0773546125373055485369},
          {0.1545541206838400005376, 0.0766560811933174705978},
          {0.2306685965595302588491, 0.0754965310459179727906},
          {0.3053958040294457421248, 0.0738829357473896063691},
          {0.37828632473108320466, 0.0718249996197639704663},
          {0.44890178631482849896, 0.069335099287094895125},
          {0.5168174988471293169775, 0.0664282092328427060437},
          {0.5816250089152126880256, 0.063121811727549795415},
          {0.642934556064585422877, 0.059435791663543655745},
          {0.7003774167806829577954, 0.055392316918914310539},
          {0.7536081218869513649149, 0.051015704947986513458},
          {0.8023065339580917814162, 0.0463322763486516144796},
          {0.8461797721039918422188, 0.0413701961555726407579},
          {0.8849639721696151227803, 0.036159303444689512511},
          {0.9184258706979038131999, 0.030730929097922458568},
          {0.9463641996474921212005, 0.0251176983936010865123},
          {0.9686108695676818300659, 0.0193532985662516799059},
          {0.9850318591247247762539, 0.01347207109447060661757},
          {0.995527127445284361488, 0.00750665876285158852915},
          {1, 0.001219512195121951219512}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune