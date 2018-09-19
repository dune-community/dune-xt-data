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
std::vector<std::vector<double>> GaussLobattoData<38>::get()
{
  return {{-1, 0.001422475106685633001423},
          {-0.9947833567954523133286, 0.008753813994360225852},
          {-0.9825479851985305599001, 0.015701121356300385369},
          {-0.9634188501435608790829, 0.02253460687441887472882},
          {-0.9375316261398196676698, 0.029209520950421723821},
          {-0.9050681587972305543599, 0.035679424686142199384},
          {-0.8662562320256718576216, 0.041899019716493155527},
          {-0.821368111961487261723, 0.0478247052881956130335},
          {-0.7707186690596928327166, 0.053414926372061171192},
          {-0.714663179030380719539, 0.0586304756282482698504},
          {-0.653594834278909216917, 0.063434771663867566047},
          {-0.5879419873705341996122, 0.0677941168024427731021},
          {-0.5181651471005365577407, 0.0716779339299699655079},
          {-0.444753748682843433303, 0.0750589811872364388373},
          {-0.3682227208880471426578, 0.0779135431562576320113},
          {-0.2891088742865849709011, 0.0802215972605139860325},
          {-0.2079671359669597998219, 0.081966954237835647749},
          {-0.1253666571577686237829, 0.0831373717125466142273},
          {-0.0418868210653519534, 0.083724640076002124726},
          {0.0418868210653519534, 0.083724640076002124726},
          {0.125366657157768623783, 0.0831373717125466142273},
          {0.2079671359669597998219, 0.0819669542378356477494},
          {0.2891088742865849709011, 0.0802215972605139860325},
          {0.3682227208880471426578, 0.077913543156257632011},
          {0.444753748682843433303, 0.075058981187236438837},
          {0.5181651471005365577407, 0.0716779339299699655079},
          {0.5879419873705341996122, 0.067794116802442773102},
          {0.653594834278909216917, 0.06343477166386756604707},
          {0.714663179030380719539, 0.0586304756282482698504},
          {0.7707186690596928327166, 0.053414926372061171192},
          {0.8213681119614872617227, 0.04782470528819561303353},
          {0.8662562320256718576216, 0.0418990197164931555272},
          {0.9050681587972305543599, 0.03567942468614219938356},
          {0.9375316261398196676698, 0.0292095209504217238214},
          {0.9634188501435608790829, 0.022534606874418874729},
          {0.9825479851985305599001, 0.015701121356300385369},
          {0.9947833567954523133286, 0.008753813994360225852},
          {1, 0.001422475106685633001423}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
