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
std::vector<std::vector<double>> GaussLobattoData<43>::get()
{
  return {{-1, 0.001107419712070874861573},
          {-0.9959379767577786396192, 0.0068176131980729018636},
          {-0.9864045426359751616543, 0.0122394096641395987032},
          {-0.971482235047683994838, 0.0175914876682679285811},
          {-0.9512537193273734367348, 0.022847092559028573947},
          {-0.9258296828530976782556, 0.0279778162576113576229},
          {-0.8953490419129557243726, 0.0329557013275425180843},
          {-0.8599782931837553969163, 0.03775357988841215000813},
          {-0.8199106291389551778204, 0.0423452548838421585303},
          {-0.7753648902993540781399, 0.0467056513128989335599},
          {-0.7265843726756214226993, 0.0508109557033796034789},
          {-0.6738355000764561157964, 0.0546387470869534358041},
          {-0.6174063695019646230678, 0.058168119828086677424},
          {-0.557605177910553930577, 0.0613797979708221275021},
          {-0.4947585390884655172006, 0.064256240598347203488},
          {-0.429209699874093222511, 0.066781737677068672516},
          {-0.3613166655073055447576, 0.068942495881944086617},
          {-0.2914502443563454789217, 0.070726713943604273671},
          {-0.2199920227086270642644, 0.0721246471102612631002},
          {-0.1473322806904406534161, 0.0731286603746363098014},
          {-0.07386786070041184522, 0.073733270176421773657},
          {0, 0.0739351743531751543579},
          {0.07386786070041184522, 0.0737332701764217736571},
          {0.1473322806904406534161, 0.0731286603746363098014},
          {0.2199920227086270642644, 0.0721246471102612631},
          {0.2914502443563454789217, 0.0707267139436042736705},
          {0.3613166655073055447576, 0.068942495881944086617},
          {0.4292096998740932225112, 0.066781737677068672516},
          {0.4947585390884655172006, 0.0642562405983472034877},
          {0.557605177910553930577, 0.061379797970822127502},
          {0.6174063695019646230678, 0.058168119828086677424},
          {0.6738355000764561157964, 0.0546387470869534358041},
          {0.7265843726756214226993, 0.0508109557033796034789},
          {0.7753648902993540781399, 0.04670565131289893356},
          {0.8199106291389551778204, 0.0423452548838421585303},
          {0.8599782931837553969163, 0.0377535798884121500081},
          {0.8953490419129557243726, 0.032955701327542518084},
          {0.9258296828530976782556, 0.0279778162576113576229},
          {0.9512537193273734367348, 0.022847092559028573947},
          {0.971482235047683994838, 0.01759148766826792858114},
          {0.9864045426359751616543, 0.0122394096641395987032},
          {0.9959379767577786396192, 0.0068176131980729018636},
          {1, 0.001107419712070874861573}};
}


} // namespace internal
} // namespace Data
} // namespace XT
} // namespace Dune
