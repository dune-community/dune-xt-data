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
std::vector<std::vector<double>> GaussLobattoData<81>::get()
{
  return {{-1, 3.086419753086419753086E-4},
          {-0.9988673457705008411002, 0.0019019523044415483332},
          {-0.9962046827021849604706, 0.0034223743199782313117},
          {-0.9920245545909313992618, 0.004936785501319891525},
          {-0.9863336511254355103747, 0.006443569163820328853},
          {-0.9791406958626416982685, 0.007940513090266067115},
          {-0.970456658823796134194, 0.0094253556697841035643},
          {-0.9602947704298557048153, 0.0108958411624427008059},
          {-0.9486705082279154685608, 0.0123497322768848029871},
          {-0.9356015753732600564212, 0.0137848158410389768938},
          {-0.92110787441017176835, 0.0151989068718696469078},
          {-0.9052114772691731165912, 0.0165898521558776295624},
          {-0.887936591794978293101, 0.0179555336312971656004},
          {-0.8693095249513577643957, 0.0192938716597587313485},
          {-0.8493586427967581563855, 0.020602828215540756039},
          {-0.8281143273080518117629, 0.0218804100006065795009},
          {-0.8056089301258443462266, 0.0231246714862725635206},
          {-0.781876723295594503099, 0.0243337178794391701832},
          {-0.7569538470815570582378, 0.0255057080101142184204},
          {-0.730878254934112899975, 0.02663885713646792174702},
          {-0.7036896556949140462235, 0.0277314396634878718379},
          {-0.675429453128221811752, 0.02878179177128223406346},
          {-0.646140682870744057391, 0.029788313949136625549},
          {-0.615867946896124935417, 0.0307494734315294726223},
          {-0.5846573455939752564668, 0.03166380653243486913468},
          {-0.5525564075669335488795, 0.0325299208743822111615},
          {-0.5196140172527036570788, 0.0333464975088933860706},
          {-0.4858803404813145591053, 0.0341122929250783351711},
          {-0.4514067480809843139366, 0.034826140943336761528},
          {-0.4162457376489363241295, 0.0354869544912865712664},
          {-0.3804508536063069374995, 0.0360937272592175899874},
          {-0.3440766056588939621262, 0.036645535232551636465},
          {-0.307178385787921574948, 0.0371415380989767155434},
          {-0.269812383897234425048, 0.03758098052811352100505},
          {-0.2320355022453788998633, 0.0379631933217662601151},
          {-0.1939052687928793141738, 0.0382875944330066863071},
          {-0.1554797495966683086179, 0.0385536898525398270744},
          {-0.116817460385081442422, 0.0387610743610018979284},
          {-0.0779772774480735910439, 0.03890943214604498007197},
          {-0.0390183479783573902634, 0.0389985372832688898114},
          {0, 0.0390282540802679621819},
          {0.0390183479783573902634, 0.0389985372832688898114},
          {0.0779772774480735910439, 0.038909432146044980072},
          {0.1168174603850814424216, 0.0387610743610018979284},
          {0.1554797495966683086179, 0.03855368985253982707445},
          {0.1939052687928793141738, 0.0382875944330066863071},
          {0.232035502245378899863, 0.0379631933217662601151},
          {0.269812383897234425048, 0.0375809805281135210051},
          {0.307178385787921574948, 0.0371415380989767155434},
          {0.344076605658893962126, 0.03664553523255163646502},
          {0.3804508536063069375, 0.0360937272592175899874},
          {0.4162457376489363241295, 0.03548695449128657126638},
          {0.451406748080984313937, 0.034826140943336761528},
          {0.4858803404813145591053, 0.0341122929250783351711},
          {0.5196140172527036570788, 0.033346497508893386071},
          {0.5525564075669335488795, 0.032529920874382211162},
          {0.5846573455939752564668, 0.0316638065324348691347},
          {0.6158679468961249354166, 0.030749473431529472622},
          {0.646140682870744057391, 0.029788313949136625549},
          {0.6754294531282218117519, 0.028781791771282234063},
          {0.7036896556949140462235, 0.0277314396634878718379},
          {0.7308782549341128999753, 0.026638857136467921747},
          {0.7569538470815570582378, 0.0255057080101142184204},
          {0.781876723295594503099, 0.0243337178794391701832},
          {0.8056089301258443462266, 0.023124671486272563521},
          {0.8281143273080518117629, 0.021880410000606579501},
          {0.8493586427967581563855, 0.020602828215540756039},
          {0.8693095249513577643957, 0.019293871659758731349},
          {0.8879365917949782931007, 0.0179555336312971656004},
          {0.9052114772691731165912, 0.0165898521558776295624},
          {0.92110787441017176835, 0.015198906871869646908},
          {0.9356015753732600564212, 0.013784815841038976894},
          {0.9486705082279154685608, 0.0123497322768848029871},
          {0.9602947704298557048153, 0.010895841162442700806},
          {0.9704566588237961341936, 0.0094253556697841035643},
          {0.9791406958626416982685, 0.0079405130902660671151},
          {0.9863336511254355103747, 0.006443569163820328853},
          {0.9920245545909313992618, 0.004936785501319891525},
          {0.9962046827021849604706, 0.003422374319978231312},
          {0.9988673457705008411002, 0.0019019523044415483332},
          {1, 3.086419753086419753086E-4}};
}


} // namespace Dune::XT::Data
