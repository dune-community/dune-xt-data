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

namespace Dune::XT::Data {


template <>
std::vector<std::vector<double>> GaussLobattoData<19>::get()
{
  return {{-1, 0.005847953216374269005848},
          {-0.978611766222080095153, 0.0357933651861764771154},
          {-0.9289015281525862437179, 0.0633818917626297368517},
          {-0.852460577796646093086, 0.089131757099207084448},
          {-0.7514942025526130141636, 0.1123153414773050440709},
          {-0.6289081372652204977668, 0.1322672804487507769261},
          {-0.4882292856807135027779, 0.1484139425959388850097},
          {-0.3335048478244986102985, 0.1602909240440612419799},
          {-0.1691860234092815713752, 0.1675565845271428672701},
          {0, 0.1700019192848272346447},
          {0.1691860234092815713752, 0.1675565845271428672701},
          {0.333504847824498610299, 0.16029092404406124198},
          {0.488229285680713502778, 0.14841394259593888501},
          {0.6289081372652204977668, 0.132267280448750776926},
          {0.7514942025526130141636, 0.1123153414773050440709},
          {0.852460577796646093086, 0.089131757099207084448},
          {0.9289015281525862437179, 0.063381891762629736852},
          {0.9786117662220800951526, 0.0357933651861764771154},
          {1, 0.005847953216374269005848}};
}


} // namespace Dune::XT::Data
