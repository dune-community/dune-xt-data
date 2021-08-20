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
std::vector<std::vector<double>> GaussLobattoData<16>::get()
{
  return {{-1, 0.008333333333333333333333},
          {-0.9695680462702179329522, 0.05085036100591990540325},
          {-0.8992005330934720929946, 0.0893936973259308009911},
          {-0.7920082918618150639311, 0.12425538213251409835},
          {-0.6523887028824930894679, 0.154026980807164280816},
          {-0.4860594218871376117819, 0.1774919133917041253011},
          {-0.2998304689007632080984, 0.1936900238252035843169},
          {-0.101326273521949447843, 0.2019583081782298714892},
          {0.101326273521949447843, 0.2019583081782298714892},
          {0.2998304689007632080984, 0.1936900238252035843169},
          {0.4860594218871376117819, 0.1774919133917041253011},
          {0.6523887028824930894679, 0.1540269808071642808156},
          {0.7920082918618150639311, 0.12425538213251409835},
          {0.8992005330934720929946, 0.089393697325930800991},
          {0.9695680462702179329522, 0.0508503610059199054032},
          {1, 0.008333333333333333333333}};
}


} // namespace Dune::XT::Data
