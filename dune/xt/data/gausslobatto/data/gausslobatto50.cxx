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
std::vector<std::vector<double>> GaussLobattoData<50>::get()
{
  return {{-1, 8.163265306122448979592E-4},
          {-0.997005175362643586236, 0.0050273455497416577264},
          {-0.989972220058020802022, 0.0090329866868996020993},
          {-0.9789519106467198092673, 0.013000139812211760657},
          {-0.9639894801099686121339, 0.0169146554838637660232},
          {-0.9451453286808814137682, 0.0207609894970159934393},
          {-0.922495378502752746657, 0.024523701718169494315},
          {-0.8961308490768326327616, 0.0281876554510602491663},
          {-0.8661579081773533109677, 0.0317381026065706387509},
          {-0.832697249796457952787, 0.03516074908934724962954},
          {-0.795883610117728469387, 0.0384418142109977345625},
          {-0.7558652257940530390604, 0.041568086852368492733},
          {-0.7128032374236458598544, 0.04452697893447274223},
          {-0.6668710408790448158956, 0.04730657622923672285351},
          {-0.6182535892015291708338, 0.04989568639334337604645},
          {-0.5671466479156704257289, 0.052283884066433463416},
          {-0.5137560067830487440676, 0.054461552866930615293},
          {-0.4582966511792997592748, 0.0564199241232101410276},
          {-0.4009918964363984808992, 0.058151112187474100161},
          {-0.3420724886388038436291, 0.0596481461918334541467},
          {-0.281775675495909512023, 0.060904998119632791003},
          {-0.2203442510330564760657, 0.0619166070794861790183},
          {-0.1580255779484029029865, 0.06267889968456801074686},
          {-0.0950705915726566477616, 0.0631888064552666332142},
          {-0.0317327894426237129119, 0.0634442741792528868443},
          {0.0317327894426237129119, 0.0634442741792528868443},
          {0.0950705915726566477616, 0.0631888064552666332142},
          {0.158025577948402902987, 0.0626788996845680107469},
          {0.220344251033056476066, 0.061916607079486179018},
          {0.281775675495909512023, 0.0609049981196327910029},
          {0.342072488638803843629, 0.059648146191833454147},
          {0.4009918964363984808992, 0.0581511121874741001609},
          {0.458296651179299759275, 0.0564199241232101410276},
          {0.5137560067830487440676, 0.054461552866930615293},
          {0.5671466479156704257289, 0.0522838840664334634156},
          {0.6182535892015291708338, 0.049895686393343376046},
          {0.6668710408790448158956, 0.047306576229236722854},
          {0.7128032374236458598544, 0.04452697893447274223},
          {0.7558652257940530390604, 0.041568086852368492733},
          {0.795883610117728469387, 0.0384418142109977345625},
          {0.832697249796457952787, 0.0351607490893472496295},
          {0.8661579081773533109677, 0.0317381026065706387509},
          {0.8961308490768326327616, 0.0281876554510602491663},
          {0.922495378502752746657, 0.024523701718169494315},
          {0.9451453286808814137682, 0.0207609894970159934393},
          {0.9639894801099686121339, 0.016914655483863766023},
          {0.9789519106467198092673, 0.013000139812211760657},
          {0.9899722200580208020225, 0.0090329866868996020993},
          {0.9970051753626435862362, 0.005027345549741657726},
          {1, 8.163265306122448979592E-4}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
