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
std::vector<std::vector<double>> GaussLobattoData<55>::get()
{
  return {{-1, 6.73400673400673400673E-4},
          {-0.99752930576127305531, 0.004147862328671043123},
          {-0.9917255002912800251632, 0.0074558278035213583119},
          {-0.9826263875430265093569, 0.010737281181964296771},
          {-0.970262901463928416818, 0.0139828269049403618229},
          {-0.9546762374489277016209, 0.0171818634922286587967},
          {-0.9359182085832798318246, 0.0203238033833336894286},
          {-0.9140511404471730845454, 0.023398221250648127813},
          {-0.8891476790996721617931, 0.0263949086016202161026},
          {-0.8612905542433054839117, 0.029303912637618080633},
          {-0.830572306023714114034, 0.032115570845726109235},
          {-0.7970949782900661621782, 0.0348205436505900167177},
          {-0.7609697799224481998531, 0.037409845665582207589},
          {-0.7223167155596147714878, 0.0398748756426309179416},
          {-0.6812641870365532625241, 0.0422074450936400329954},
          {-0.6379485668918294969515, 0.0443998055169912537768},
          {-0.59251374537831393936, 0.0464446741509262297443},
          {-0.545110652490447321488, 0.0483352581738768315616},
          {-0.4958967566002109238385, 0.0500652772740855006285},
          {-0.4450355413696867708386, 0.05162898451493911237478},
          {-0.3926959626792214965342, 0.053021185427449940669},
          {-0.3390518873760317607891, 0.0542372552668741409921},
          {-0.284281515708163298013, 0.05527315437638013369115},
          {-0.2285667893627274420074, 0.0561254416068702308624},
          {-0.1720927870750503733086, 0.05679128574846080797521},
          {-0.1150471098165915274168, 0.0572684749356989515656},
          {-0.0576192576040643277576, 0.057555423995304932891},
          {0, 0.05765117971205228517},
          {0.0576192576040643277576, 0.057555423995304932891},
          {0.1150471098165915274168, 0.05726847493569895156561},
          {0.1720927870750503733086, 0.056791285748460807975},
          {0.2285667893627274420074, 0.056125441606870230862},
          {0.2842815157081632980134, 0.055273154376380133691},
          {0.339051887376031760789, 0.054237255266874140992},
          {0.3926959626792214965342, 0.053021185427449940669},
          {0.4450355413696867708386, 0.0516289845149391123748},
          {0.495896756600210923839, 0.0500652772740855006285},
          {0.545110652490447321488, 0.0483352581738768315616},
          {0.5925137453783139393603, 0.0464446741509262297443},
          {0.637948566891829496952, 0.044399805516991253777},
          {0.6812641870365532625241, 0.042207445093640032995},
          {0.7223167155596147714878, 0.039874875642630917942},
          {0.7609697799224481998531, 0.037409845665582207589},
          {0.7970949782900661621782, 0.034820543650590016718},
          {0.830572306023714114034, 0.032115570845726109235},
          {0.8612905542433054839117, 0.0293039126376180806329},
          {0.8891476790996721617931, 0.0263949086016202161026},
          {0.9140511404471730845454, 0.023398221250648127813},
          {0.9359182085832798318246, 0.0203238033833336894286},
          {0.9546762374489277016209, 0.0171818634922286587967},
          {0.970262901463928416818, 0.0139828269049403618229},
          {0.9826263875430265093569, 0.010737281181964296771},
          {0.9917255002912800251632, 0.0074558278035213583119},
          {0.99752930576127305531, 0.0041478623286710431232},
          {1, 6.73400673400673400673E-4}};
}


} // namespace Data
} // namespace XT
} // namespace Dune
