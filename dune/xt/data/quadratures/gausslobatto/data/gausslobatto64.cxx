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
std::vector<std::vector<double>> GaussLobattoData<64>::get()
{
  return {{-1, 4.96031746031746031746E-4},
          {-0.998179871502163215183, 0.0030560082449124903786},
          {-0.993902726703057292375, 0.005496016203817156897805},
          {-0.987192676602740242648, 0.0079212897900466340357},
          {-0.9780666628313960739566, 0.0103270023668153284607},
          {-0.966547110369099233518, 0.012707399197454735199},
          {-0.952662235788662915462, 0.0150566839879614427327},
          {-0.936446027475634162453, 0.0173691163845421815944},
          {-0.917938173510281630834, 0.019639040723241718382},
          {-0.8971839678458500428362, 0.021860903511518060111},
          {-0.8742342006576274917685, 0.024029268144023826713},
          {-0.8491450345429909850051, 0.026138828614338437745},
          {-0.8219778673075170500759, 0.028184422665848517475},
          {-0.792799181826208137348, 0.030161044499089450676},
          {-0.7616803834081199677887, 0.032063857057727024512},
          {-0.7286976250888369395722, 0.0338882038841253976082},
          {-0.6939316212907048408102, 0.0356296205244894862771},
          {-0.6574674503129765042103, 0.0372838454598011725918},
          {-0.619394346138431547543, 0.0388468305378077366963},
          {-0.5798054800677184237274, 0.0403147508815602371174},
          {-0.5387977327168004389939, 0.04168401425080195219013},
          {-0.4964714569360577535033, 0.0429512698336018186077},
          {-0.4529302322315811819899, 0.04411341644689247091872},
          {-0.4082806112898540445279, 0.0451676101259477020375},
          {-0.3626318592262618236869, 0.04611127108428905944933},
          {-0.3160956861956258063964, 0.0469420900270283164451},
          {-0.2687859740191700039889, 0.047658033802220636787},
          {-0.220818497496953503208, 0.0482573503764145488998},
          {-0.1723106410877929713189, 0.0487385731222331851198},
          {-0.1233811116500279861605, 0.0491005244075013079323},
          {-0.074149647946115918734, 0.049342318477139573936},
          {-0.024736727621958728495, 0.0494633636207766464412},
          {0.024736727621958728495, 0.049463363620776646441},
          {0.0741496479461159187345, 0.0493423184771395739361},
          {0.1233811116500279861605, 0.0491005244075013079323},
          {0.1723106410877929713189, 0.04873857312223318512},
          {0.2208184974969535032076, 0.0482573503764145488998},
          {0.2687859740191700039889, 0.047658033802220636787},
          {0.316095686195625806396, 0.0469420900270283164451},
          {0.362631859226261823687, 0.046111271084289059449},
          {0.408280611289854044528, 0.0451676101259477020375},
          {0.45293023223158118199, 0.0441134164468924709187},
          {0.4964714569360577535033, 0.0429512698336018186077},
          {0.5387977327168004389939, 0.04168401425080195219},
          {0.5798054800677184237274, 0.040314750881560237117},
          {0.6193943461384315475433, 0.0388468305378077366963},
          {0.6574674503129765042103, 0.037283845459801172592},
          {0.6939316212907048408102, 0.0356296205244894862771},
          {0.7286976250888369395722, 0.033888203884125397608},
          {0.7616803834081199677887, 0.032063857057727024512},
          {0.792799181826208137348, 0.0301610444990894506759},
          {0.8219778673075170500759, 0.028184422665848517475},
          {0.8491450345429909850051, 0.026138828614338437745},
          {0.8742342006576274917685, 0.024029268144023826713},
          {0.8971839678458500428362, 0.02186090351151806011057},
          {0.9179381735102816308343, 0.0196390407232417183824},
          {0.9364460274756341624529, 0.0173691163845421815944},
          {0.9526622357886629154624, 0.015056683987961442733},
          {0.9665471103690992335182, 0.01270739919745473519894},
          {0.9780666628313960739566, 0.0103270023668153284607},
          {0.9871926766027402426477, 0.007921289790046634036},
          {0.9939027267030572923748, 0.0054960162038171568978},
          {0.9981798715021632151835, 0.003056008244912490379},
          {1, 4.96031746031746031746E-4}};
}


} // namespace Data
} // namespace XT
} // namespace Dune
