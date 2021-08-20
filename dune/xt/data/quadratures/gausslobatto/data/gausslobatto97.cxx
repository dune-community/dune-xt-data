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
std::vector<std::vector<double>> GaussLobattoData<97>::get()
{
  return {{-1, 2.147766323024054982818E-4},
          {-0.9992117675187679372925, 0.001323675529824700569},
          {-0.9973584202115753083808, 0.0023824665407643825398},
          {-0.9944478292383172185338, 0.0034381767087562616097},
          {-0.9904833045655763827779, 0.004490166994743619283},
          {-0.9854690874505481580336, 0.0055373798443054670949},
          {-0.9794105031099910659294, 0.0065787179765380973558},
          {-0.9723139763933839498625, 0.0076130816010790042415},
          {-0.9641870297556596092534, 0.008639375943791127812},
          {-0.955038276712134050045, 0.009656513981519797513},
          {-0.9448774132246330096275, 0.010663418080519123093},
          {-0.933715207638498109806, 0.01165902131449508914957},
          {-0.9215634893679365273879, 0.0126422686670392161591},
          {-0.9084351364079280548151, 0.0136121181818045009231},
          {-0.8943440617122115723236, 0.0145675420822265545279},
          {-0.8793051984632038831786, 0.0155075278686792285545},
          {-0.8633344842547974738284, 0.0164310793957879125778},
          {-0.8464488442074511804343, 0.017337217930540849428},
          {-0.8286661730348553921423, 0.018224983190943246589},
          {-0.8100053160819361473279, 0.0190934343645559419062},
          {-0.7904860493547251817926, 0.0199416511060752716094},
          {-0.7701290585635136140501, 0.020768734513027747161},
          {-0.748955917201652598455, 0.0215738080786204926857},
          {-0.7269890636833281333, 0.0223560186207819056872},
          {-0.704251777564599720681, 0.0231145371864348216429},
          {-0.6807681548729427782946, 0.0238485599300605476752},
          {-0.6565630825714660926978, 0.024557308965633291303},
          {-0.631662212184884059709, 0.0252400331910290025809},
          {-0.6060919326152061877601, 0.0258960090840394845191},
          {-0.579879342175961313997, 0.02652454146915122874772},
          {-0.553052219874599625586, 0.0271249642542784479012},
          {-0.525638995973510597989, 0.027696641136670978255},
          {-0.4976687218608582506373, 0.0282389662772499645634},
          {-0.4691710392631656985371, 0.0287513649426574062637},
          {-0.4401761488322779596629, 0.029233294114339658653},
          {-0.4107147781399945491769, 0.02968424306401977829598},
          {-0.3808181491142908001982, 0.0301037338949491225415},
          {-0.3505179449516383976839, 0.030491322048364807973},
          {-0.3198462765404906463777, 0.0308465967746164549628},
          {-0.2888356484315159109028, 0.0311691815684630503277},
          {-0.2575189243906429053562, 0.0314587345680787037417},
          {-0.2259292925714235538959, 0.031714948917344513051},
          {-0.1941002303436225183436, 0.0319375530910426462593},
          {-0.1620654688153067619161, 0.0321263111826080511049},
          {-0.1298589570860333006308, 0.0322810231541328741957},
          {-0.0975148262690182391903, 0.0324015250483586678384},
          {-0.0650673533204149925476, 0.0324876891624317410826},
          {-0.032550924714033997197, 0.0325394241832375290255},
          {0, 0.0325566752841705678504},
          {0.032550924714033997197, 0.0325394241832375290255},
          {0.0650673533204149925476, 0.032487689162431741083},
          {0.0975148262690182391903, 0.0324015250483586678384},
          {0.1298589570860333006308, 0.0322810231541328741957},
          {0.1620654688153067619161, 0.032126311182608051105},
          {0.194100230343622518344, 0.031937553091042646259},
          {0.225929292571423553896, 0.031714948917344513051},
          {0.257518924390642905356, 0.031458734568078703742},
          {0.288835648431515910903, 0.031169181568463050328},
          {0.3198462765404906463777, 0.030846596774616454963},
          {0.3505179449516383976839, 0.030491322048364807973},
          {0.3808181491142908001982, 0.0301037338949491225415},
          {0.4107147781399945491769, 0.029684243064019778296},
          {0.4401761488322779596629, 0.029233294114339658653},
          {0.4691710392631656985371, 0.0287513649426574062637},
          {0.4976687218608582506373, 0.0282389662772499645634},
          {0.5256389959735105979894, 0.0276966411366709782555},
          {0.553052219874599625586, 0.027124964254278447901},
          {0.5798793421759613139975, 0.026524541469151228748},
          {0.60609193261520618776, 0.025896009084039484519},
          {0.6316622121848840597089, 0.0252400331910290025809},
          {0.656563082571466092698, 0.0245573089656332913034},
          {0.6807681548729427782946, 0.023848559930060547675},
          {0.7042517775645997206813, 0.0231145371864348216429},
          {0.7269890636833281332999, 0.0223560186207819056872},
          {0.7489559172016525984547, 0.021573808078620492686},
          {0.7701290585635136140501, 0.020768734513027747161},
          {0.7904860493547251817926, 0.0199416511060752716094},
          {0.8100053160819361473279, 0.0190934343645559419062},
          {0.8286661730348553921423, 0.018224983190943246589},
          {0.8464488442074511804343, 0.017337217930540849428},
          {0.8633344842547974738284, 0.016431079395787912578},
          {0.8793051984632038831786, 0.015507527868679228555},
          {0.8943440617122115723236, 0.014567542082226554528},
          {0.9084351364079280548151, 0.0136121181818045009231},
          {0.9215634893679365273879, 0.0126422686670392161591},
          {0.933715207638498109806, 0.01165902131449508914957},
          {0.9448774132246330096275, 0.0106634180805191230929},
          {0.955038276712134050045, 0.00965651398151979751286},
          {0.9641870297556596092534, 0.00863937594379112781235},
          {0.9723139763933839498625, 0.00761308160107900424147},
          {0.9794105031099910659294, 0.00657871797653809735584},
          {0.9854690874505481580336, 0.0055373798443054670949},
          {0.9904833045655763827779, 0.0044901669947436192831},
          {0.9944478292383172185338, 0.00343817670875626161},
          {0.9973584202115753083808, 0.00238246654076438253985},
          {0.9992117675187679372925, 0.001323675529824700569},
          {1, 2.147766323024054982818E-4}};
}


} // namespace Dune::XT::Data
