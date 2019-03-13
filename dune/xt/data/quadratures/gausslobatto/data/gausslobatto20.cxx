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
std::vector<std::vector<double>> GaussLobattoData<20>::get()
{
  return {{-1, 0.005263157894736842105263},
          {-0.9807437048939141719255, 0.03223712318848894149161},
          {-0.9359344988126654357162, 0.0571818021275668260048},
          {-0.8668779780899501413099, 0.0806317639961196031448},
          {-0.7753682609520558704143, 0.101991499699450815684},
          {-0.6637764022903112898464, 0.1207092276286747250994},
          {-0.5349928640318862616481, 0.1363004823587241844898},
          {-0.3923531837139092993865, 0.1483615540709168258147},
          {-0.239551705922986495182, 0.1565801026474754871582},
          {-0.0805459372388218379759, 0.160743286387845749008},
          {0.0805459372388218379759, 0.1607432863878457490077},
          {0.239551705922986495182, 0.156580102647475487158},
          {0.3923531837139092993865, 0.148361554070916825815},
          {0.5349928640318862616481, 0.1363004823587241844898},
          {0.6637764022903112898464, 0.120709227628674725099},
          {0.7753682609520558704143, 0.1019914996994508156838},
          {0.8668779780899501413099, 0.080631763996119603145},
          {0.9359344988126654357162, 0.057181802127566826005},
          {0.9807437048939141719255, 0.032237123188488941492},
          {1, 0.005263157894736842105263}};
}


} // namespace Data
} // namespace XT
} // namespace Dune
