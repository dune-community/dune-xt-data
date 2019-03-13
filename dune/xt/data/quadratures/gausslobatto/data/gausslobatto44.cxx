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
std::vector<std::vector<double>> GaussLobattoData<44>::get()
{
  return {{-1, 0.001057082452431289640592},
          {-0.996122494786791329908, 0.006508122621476111621},
          {-0.9870211779298331981502, 0.0116854889709172145182},
          {-0.9727725830081103408227, 0.0167991922699217745739},
          {-0.9534521073830775397274, 0.02182493585715326399295},
          {-0.9291606758841534993806, 0.02673680054011641660943},
          {-0.9000249890978200462231, 0.0315092399671950593178},
          {-0.866196967976935704741, 0.036117391552679905857},
          {-0.827852985419625160641, 0.04053723748539299129138},
          {-0.7851929538048792884595, 0.0447457377262541621237},
          {-0.7384392852928584866845, 0.0487209525352925295842},
          {-0.687835733326544180378, 0.052442157727594372667},
          {-0.6336461222985288715238, 0.0558899530758261562274},
          {-0.576152972333864850758, 0.0590463636137775892709},
          {-0.515656026489114936578, 0.0618949334267612692315},
          {-0.4524706881028381793897, 0.0644208114848826285049},
          {-0.386926376471010785296, 0.06661082909097453580473},
          {-0.3193648094333647060932, 0.0684535685482756473809},
          {-0.2501382218313949004539, 0.0699394226941592546805},
          {-0.1796075291299962403377, 0.0710606449917313958193},
          {-0.1081404457789565649126, 0.0718113899193129932444},
          {-0.0361095681256215498146, 0.0721877434478734380376},
          {0.0361095681256215498146, 0.0721877434478734380376},
          {0.108140445778956564913, 0.071811389919312993244},
          {0.1796075291299962403377, 0.0710606449917313958193},
          {0.2501382218313949004539, 0.069939422694159254681},
          {0.319364809433364706093, 0.068453568548275647381},
          {0.386926376471010785296, 0.0666108290909745358047},
          {0.45247068810283817939, 0.0644208114848826285049},
          {0.5156560264891149365781, 0.06189493342676126923146},
          {0.576152972333864850758, 0.0590463636137775892709},
          {0.6336461222985288715238, 0.055889953075826156227},
          {0.687835733326544180378, 0.052442157727594372667},
          {0.7384392852928584866845, 0.048720952535292529584},
          {0.7851929538048792884595, 0.0447457377262541621237},
          {0.827852985419625160641, 0.0405372374853929912914},
          {0.866196967976935704741, 0.036117391552679905857},
          {0.9000249890978200462231, 0.0315092399671950593178},
          {0.9291606758841534993806, 0.026736800540116416609},
          {0.9534521073830775397274, 0.021824935857153263993},
          {0.9727725830081103408227, 0.016799192269921774574},
          {0.9870211779298331981502, 0.011685488970917214518},
          {0.9961224947867913299077, 0.0065081226214761116211},
          {1, 0.001057082452431289640592}};
}


} // namespace Data
} // namespace XT
} // namespace Dune
