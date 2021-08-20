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
std::vector<std::vector<double>> GaussLobattoData<33>::get()
{
  return {{-1, 0.001893939393939393939394},
          {-0.9930563584336583436673, 0.0116484483922677346512},
          {-0.9767861633169063014856, 0.0208646090176033600958},
          {-0.9513934513969957433755, 0.02988104591674647752},
          {-0.9171173034509412408257, 0.0386178147718139675639},
          {-0.8742781007505622206466, 0.046993850461024170548},
          {-0.8232759230040674695591, 0.0549310594426269679517},
          {-0.7645870017935286280067, 0.0623553678524653054411},
          {-0.6987593166181625956997, 0.06919746949401614756},
          {-0.6264074912812682572638, 0.0753934869239738285071},
          {-0.5482070599191116231104, 0.0808855721934550921797},
          {-0.464888161632106755973, 0.0856224485318131325502},
          {-0.3772287242533936350419, 0.089559889747077400661},
          {-0.2860472014876740416053, 0.0926611334422414635299},
          {-0.1921949314674772257413, 0.0948972243945918158244},
          {-0.096548188176107006317, 0.0962472849729854619966},
          {0, 0.09669871010271655896003},
          {0.096548188176107006317, 0.0962472849729854619966},
          {0.192194931467477225741, 0.0948972243945918158244},
          {0.2860472014876740416053, 0.09266113344224146352994},
          {0.377228724253393635042, 0.089559889747077400661},
          {0.464888161632106755973, 0.0856224485318131325502},
          {0.5482070599191116231104, 0.0808855721934550921797},
          {0.6264074912812682572638, 0.075393486923973828507},
          {0.6987593166181625956997, 0.06919746949401614756},
          {0.7645870017935286280067, 0.062355367852465305441},
          {0.8232759230040674695591, 0.0549310594426269679517},
          {0.8742781007505622206466, 0.046993850461024170548},
          {0.9171173034509412408257, 0.0386178147718139675639},
          {0.9513934513969957433755, 0.02988104591674647752},
          {0.9767861633169063014856, 0.0208646090176033600958},
          {0.9930563584336583436673, 0.0116484483922677346512},
          {1, 0.001893939393939393939394}};
}


} // namespace Dune::XT::Data
