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
namespace internal {


template <>
std::vector<std::vector<double>> GaussLobattoData<73>::get()
{
  return {{-1, 3.805175038051750380518E-4},
          {-0.998603638374731958861, 0.002344666485593482692},
          {-0.9953215313951855045199, 0.004218121295625722337},
          {-0.9901703070802109194065, 0.006082671687518730385},
          {-0.983160035887973790979, 0.0079356673267634568149},
          {-0.974303949477461350379, 0.0097737309755561057448},
          {-0.9636186943792272079475, 0.011593434046129251534},
          {-0.9511243385275137013018, 0.013391366934741235094},
          {-0.9368443420626032173566, 0.015164156697001472444},
          {-0.920805515817681358848, 0.016908476171993488499},
          {-0.9030379718969636348021, 0.0186210510914045791522},
          {-0.8835750675203695767273, 0.020298666538887818715},
          {-0.8624533425714416147192, 0.0219381731130695902517},
          {-0.8397124510832280722292, 0.023536492897237966271},
          {-0.8153950868374035634978, 0.025090625265340136979},
          {-0.7895469032365716194945, 0.026597652529491525343},
          {-0.7622164276096560826834, 0.0280547454252903802},
          {-0.7334549701159739564133, 0.029459168427803310709},
          {-0.703316527421478817757, 0.0308082848897796306458},
          {-0.6718576813293625979075, 0.0320995619932340870958},
          {-0.6391374925560944508384, 0.0333305755055213770889},
          {-0.6052173898527734333031, 0.0344990143312059487214},
          {-0.570161054680232537127, 0.0356026848513147256587},
          {-0.534034301654575591109, 0.0366395150419049963967},
          {-0.4969049549877072823333, 0.03760755836426305768},
          {-0.4588427211548975833716, 0.0385049974194598631265},
          {-0.419919058028481391356, 0.0393301473604214949458},
          {-0.3802070407234133653245, 0.0400814590551208781926},
          {-0.339781224406561108394, 0.0407575219949602424898},
          {-0.298717504327313463406, 0.0413570669428895574978},
          {-0.257092973332292895324, 0.0418789683162930585717},
          {-0.2149857771316811937647, 0.0423222463001727800248},
          {-0.1724749675888867121767, 0.042686068686663582203},
          {-0.1296403543089908424618, 0.04296975243742741494839},
          {-0.0865623548046042429933, 0.0431727649659944571554},
          {-0.0433218435204333692192, 0.043294725137644280075},
          {0, 0.0433354039849502785561},
          {0.0433218435204333692192, 0.043294725137644280075},
          {0.0865623548046042429933, 0.043172764965994457155},
          {0.129640354308990842462, 0.04296975243742741494839},
          {0.1724749675888867121767, 0.042686068686663582203},
          {0.214985777131681193765, 0.0423222463001727800248},
          {0.257092973332292895324, 0.041878968316293058572},
          {0.298717504327313463406, 0.0413570669428895574978},
          {0.339781224406561108394, 0.0407575219949602424898},
          {0.380207040723413365324, 0.040081459055120878193},
          {0.419919058028481391356, 0.0393301473604214949458},
          {0.458842721154897583372, 0.038504997419459863126},
          {0.496904954987707282333, 0.0376075583642630576799},
          {0.534034301654575591109, 0.0366395150419049963967},
          {0.570161054680232537127, 0.0356026848513147256587},
          {0.6052173898527734333031, 0.0344990143312059487214},
          {0.6391374925560944508384, 0.0333305755055213770889},
          {0.6718576813293625979075, 0.0320995619932340870958},
          {0.703316527421478817757, 0.0308082848897796306458},
          {0.7334549701159739564133, 0.02945916842780331070902},
          {0.7622164276096560826834, 0.0280547454252903802},
          {0.7895469032365716194945, 0.0265976525294915253425},
          {0.8153950868374035634978, 0.0250906252653401369791},
          {0.8397124510832280722292, 0.02353649289723796627097},
          {0.8624533425714416147192, 0.0219381731130695902517},
          {0.8835750675203695767273, 0.020298666538887818715},
          {0.9030379718969636348021, 0.0186210510914045791522},
          {0.9208055158176813588476, 0.0169084761719934884992},
          {0.9368443420626032173566, 0.0151641566970014724442},
          {0.9511243385275137013018, 0.013391366934741235094},
          {0.9636186943792272079475, 0.011593434046129251534},
          {0.974303949477461350379, 0.009773730975556105745},
          {0.9831600358879737909786, 0.0079356673267634568149},
          {0.9901703070802109194065, 0.006082671687518730385},
          {0.9953215313951855045199, 0.0042181212956257223367},
          {0.9986036383747319588608, 0.0023446664855934826922},
          {1, 3.805175038051750380518E-4}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
