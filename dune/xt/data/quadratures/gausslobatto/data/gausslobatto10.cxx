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
std::vector<std::vector<double>> GaussLobattoData<10>::get()
{
  return {{-1, 0.02222222222222222222222},
          {-0.9195339081664588138289, 0.1333059908510701111262},
          {-0.7387738651055050750031, 0.2248893420631264521195},
          {-0.4779249498104444956612, 0.2920426836796837578756},
          {-0.1652789576663870246262, 0.3275397611838974566565},
          {0.1652789576663870246262, 0.3275397611838974566565},
          {0.4779249498104444956612, 0.292042683679683757876},
          {0.7387738651055050750031, 0.224889342063126452119},
          {0.9195339081664588138289, 0.133305990851070111126},
          {1, 0.02222222222222222222222}};
}


} // namespace Dune::XT::Data
