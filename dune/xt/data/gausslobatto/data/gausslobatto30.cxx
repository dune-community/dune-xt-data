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
std::vector<std::vector<double>> GaussLobattoData<30>::get()
{
  return {{-1, 0.002298850574712643678161},
          {-0.9915739428405002933388, 0.0141317993279053876407},
          {-0.9718466031662692416766, 0.0252831667405514022043},
          {-0.9411047809510570823072, 0.036142094199408535315},
          {-0.899699218199276859553, 0.0465906945331429274019},
          {-0.8480994871801981095514, 0.0565111979230803833022},
          {-0.78689035723754708045, 0.0657913363977900549441},
          {-0.716765398637085131634, 0.0743260033247182538341},
          {-0.638519175807558407371, 0.0820185128334069147997},
          {-0.5530382600950528523846, 0.0887817123197652101673},
          {-0.4612911901682406852266, 0.0945389751938608917811},
          {-0.364317500422448997756, 0.09922507100429983065768},
          {-0.2632159437195737912671, 0.1027869053072349894703},
          {-0.159132042625850467825, 0.1051841215964546498562},
          {-0.053245110485486669363, 0.1063895587236679249476},
          {0.05324511048548666936301, 0.1063895587236679249476},
          {0.159132042625850467825, 0.1051841215964546498562},
          {0.2632159437195737912671, 0.1027869053072349894703},
          {0.364317500422448997756, 0.0992250710042998306577},
          {0.461291190168240685227, 0.0945389751938608917811},
          {0.5530382600950528523846, 0.088781712319765210167},
          {0.6385191758075584073711, 0.0820185128334069147997},
          {0.716765398637085131634, 0.0743260033247182538341},
          {0.78689035723754708045, 0.0657913363977900549441},
          {0.8480994871801981095514, 0.056511197923080383302},
          {0.8996992181992768595533, 0.0465906945331429274019},
          {0.9411047809510570823072, 0.0361420941994085353147},
          {0.9718466031662692416766, 0.0252831667405514022043},
          {0.9915739428405002933388, 0.0141317993279053876407},
          {1, 0.002298850574712643678161}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
