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
std::vector<std::vector<double>> GaussLobattoData<98>::get()
{
  return {{-1, 2.10393435724805386072E-4},
          {-0.9992278518255230780089, 0.001296668697725162623},
          {-0.9974123067416636530404, 0.0023338867453652231415},
          {-0.9945610360225209394237, 0.0033681372547995773262},
          {-0.9906772205068575487285, 0.004398816501337053644},
          {-0.9857649311175846600811, 0.005424910633713067227},
          {-0.9798292785908650395239, 0.006445366685723361656},
          {-0.972876429051795194307, 0.00745912898741698662},
          {-0.9649136022969923444226, 0.0084651464913087100293},
          {-0.9559490656972370835193, 0.0094623754059019141399},
          {-0.9459921261186963331012, 0.010449780755786946374},
          {-0.9350531204691953638585, 0.01142633762849674186782},
          {-0.9231434050623357333488, 0.0123910323087844794648},
          {-0.910275343875370061286, 0.0133428633624512571027},
          {-0.8964622957387736618139, 0.0142808426911499187967},
          {-0.8817186004819953214763, 0.0152039965659603706703},
          {-0.866059564054996802863, 0.01611136664246982367407},
          {-0.8495014426436241726057, 0.0170020109580497518387},
          {-0.8320614257966605898539, 0.017875004911142652242},
          {-0.8137576185828207096982, 0.0187294422219753963445},
          {-0.7946090227966331825875, 0.0195644358739330412112},
          {-0.7746355172329710016096, 0.0203791190347439484292},
          {-0.7538578370508583326028, 0.0211726459565933132003},
          {-0.7322975522480709817701, 0.0219441928542740118638},
          {-0.7099770452689367328937, 0.0226929587604894185666},
          {-0.6869194877686207624624, 0.0234181663574366066005},
          {-0.663148816558043915493, 0.0241190627838170142402},
          {-0.6386897087544238341476, 0.0247949204164435123863},
          {-0.613567556163248108589, 0.025445037625636897711},
          {-0.5878084389182828422176, 0.02606873950363058617239},
          {-0.5614390984069878116556, 0.026665378565229354968},
          {-0.534486909509449550034, 0.0272343354199961588896},
          {-0.506979852179655162541, 0.027775019415270184754},
          {-0.4789464823986115898211, 0.028286869249349302963},
          {-0.4504159025294665499025, 0.0287693535542008516405},
          {-0.4214177311054077635368, 0.0292219714470961849644},
          {-0.3919820720817056077452, 0.0296442530505965815588},
          {-0.362139483583820403462, 0.0300357599803508949876},
          {-0.331920946184018524821, 0.030396085800198694137},
          {-0.3013578307394308607161, 0.0307248564441065461045},
          {-0.270481865824942344281, 0.0310217306044994990604},
          {-0.239325104794721812154, 0.0312864000865846889197},
          {-0.207919892506586920342, 0.0315185901282992834824},
          {-0.1762988317437488227659, 0.031718059685550652947},
          {-0.1444947493687954456681, 0.0318846016824526783899},
          {-0.1125406622450501376754, 0.0320180432262984418211},
          {-0.0804697429606839511044, 0.0321182457870461445536},
          {-0.04831528539116456324487, 0.032185105341131936472},
          {-0.01611067013579266331304, 0.0322185524794603688364},
          {0.016110670135792663313, 0.032218552479460368836},
          {0.0483152853911645632449, 0.032185105341131936472},
          {0.0804697429606839511044, 0.0321182457870461445536},
          {0.1125406622450501376754, 0.0320180432262984418211},
          {0.144494749368795445668, 0.0318846016824526783899},
          {0.1762988317437488227659, 0.031718059685550652947},
          {0.2079198925065869203423, 0.031518590128299283482},
          {0.2393251047947218121539, 0.0312864000865846889197},
          {0.270481865824942344281, 0.03102173060449949906},
          {0.3013578307394308607161, 0.030724856444106546105},
          {0.3319209461840185248211, 0.030396085800198694137},
          {0.362139483583820403462, 0.030035759980350894988},
          {0.3919820720817056077452, 0.029644253050596581559},
          {0.4214177311054077635368, 0.029221971447096184964},
          {0.4504159025294665499025, 0.0287693535542008516405},
          {0.478946482398611589821, 0.028286869249349302963},
          {0.5069798521796551625415, 0.0277750194152701847537},
          {0.534486909509449550034, 0.0272343354199961588896},
          {0.561439098406987811656, 0.026665378565229354968},
          {0.5878084389182828422176, 0.026068739503630586172},
          {0.6135675561632481085893, 0.025445037625636897711},
          {0.6386897087544238341476, 0.0247949204164435123863},
          {0.663148816558043915493, 0.02411906278381701424022},
          {0.6869194877686207624624, 0.0234181663574366066005},
          {0.7099770452689367328937, 0.022692958760489418567},
          {0.7322975522480709817701, 0.0219441928542740118638},
          {0.7538578370508583326028, 0.02117264595659331320028},
          {0.7746355172329710016096, 0.020379119034743948429},
          {0.7946090227966331825875, 0.0195644358739330412112},
          {0.813757618582820709698, 0.018729442221975396344},
          {0.8320614257966605898539, 0.0178750049111426522422},
          {0.8495014426436241726057, 0.0170020109580497518387},
          {0.8660595640549968028629, 0.016111366642469823674},
          {0.8817186004819953214763, 0.0152039965659603706703},
          {0.8964622957387736618139, 0.0142808426911499187967},
          {0.9102753438753700612864, 0.0133428633624512571027},
          {0.9231434050623357333488, 0.012391032308784479465},
          {0.9350531204691953638585, 0.0114263376284967418678},
          {0.945992126118696333101, 0.010449780755786946374},
          {0.9559490656972370835193, 0.0094623754059019141399},
          {0.9649136022969923444226, 0.0084651464913087100293},
          {0.972876429051795194307, 0.00745912898741698662},
          {0.979829278590865039524, 0.006445366685723361656},
          {0.985764931117584660081, 0.00542491063371306722698},
          {0.990677220506857548729, 0.0043988165013370536438},
          {0.9945610360225209394237, 0.0033681372547995773262},
          {0.99741230674166365304, 0.0023338867453652231415},
          {0.999227851825523078009, 0.001296668697725162623},
          {1, 2.10393435724805386072E-4}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
