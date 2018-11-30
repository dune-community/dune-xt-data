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
std::vector<std::vector<double>> GaussLobattoData<75>::get()
{
  return {{-1, 3.603603603603603603604E-4},
          {-0.9986775914951753665704, 0.002220517299295509506},
          {-0.9955691806160258529042, 0.003995005321211884448},
          {-0.9906902056995024086816, 0.0057614572604248631915},
          {-0.9840497197732123129422, 0.0075175375373011144066},
          {-0.9756595962390606154341, 0.009260220087137748211},
          {-0.9655347715133080962367, 0.0109864274913394441092},
          {-0.9536932542508128101217, 0.0126930969589603897725},
          {-0.9401561013542648280004, 0.0143771964484805996211},
          {-0.924947382932221387809, 0.016035732702302637934},
          {-0.9080941403674934663931, 0.0176657573855815000728},
          {-0.8896263385955021926542, 0.0192643726239309658037},
          {-0.8695768129911386349661, 0.0208287362763057578075},
          {-0.8479812110697927005306, 0.022356067042206738725},
          {-0.8248779291503705953887, 0.0238436494327956554895},
          {-0.8003080441120987966746, 0.0252888386123280931166},
          {-0.774315240375419262613, 0.026689065107826466263},
          {-0.7469457322412602807197, 0.0280418393816146753886},
          {-0.7182481817290954304006, 0.029344756260040815257},
          {-0.6882736120611495547347, 0.030595499211257983669},
          {-0.6570753169473008856464, 0.031791844464854567832},
          {-0.6247087658323955952408, 0.032931664966229576983},
          {-0.5912315052747013555128, 0.0340129341588084660625},
          {-0.556703056631007315098, 0.0350337295874493355236},
          {-0.5211848102303860178915, 0.0359922363166779979049},
          {-0.4847399162248399039123, 0.036886750157702517763},
          {-0.4474331723109408565958, 0.03771568069848756585093},
          {-0.4093309085221200566966, 0.038477554131512797733},
          {-0.3705008692964642249583, 0.0391710158741952425501},
          {-0.3310120930297120971087, 0.039794832977321810414},
          {-0.2909347893276119474907, 0.0403478963172133027754},
          {-0.2503402141758885172513, 0.040829222567724746394},
          {-0.209300543249768096244, 0.04123795594857758752734},
          {-0.1678887435883168879611, 0.0415733697469164601167},
          {-0.1261784438617540871664, 0.0418348676093860952802},
          {-0.0842438034624020285287, 0.0420219846024317024107},
          {-0.04215938065202679166437, 0.042134388038938066269},
          {0, 0.0421718780697379149126},
          {0.0421593806520267916644, 0.042134388038938066269},
          {0.0842438034624020285287, 0.0420219846024317024107},
          {0.126178443861754087166, 0.0418348676093860952802},
          {0.167888743588316887961, 0.0415733697469164601167},
          {0.209300543249768096244, 0.041237955948577587527},
          {0.2503402141758885172513, 0.040829222567724746394},
          {0.2909347893276119474907, 0.0403478963172133027754},
          {0.3310120930297120971087, 0.0397948329773218104138},
          {0.370500869296464224958, 0.0391710158741952425501},
          {0.409330908522120056697, 0.038477554131512797733},
          {0.4474331723109408565958, 0.037715680698487565851},
          {0.4847399162248399039123, 0.036886750157702517763},
          {0.5211848102303860178915, 0.0359922363166779979049},
          {0.5567030566310073150981, 0.035033729587449335524},
          {0.5912315052747013555128, 0.034012934158808466063},
          {0.6247087658323955952408, 0.032931664966229576983},
          {0.657075316947300885646, 0.0317918444648545678323},
          {0.6882736120611495547347, 0.0305954992112579836689},
          {0.7182481817290954304006, 0.029344756260040815257},
          {0.7469457322412602807197, 0.02804183938161467538864},
          {0.7743152403754192626133, 0.026689065107826466263},
          {0.8003080441120987966746, 0.0252888386123280931166},
          {0.8248779291503705953887, 0.023843649432795655489},
          {0.8479812110697927005306, 0.02235606704220673872458},
          {0.8695768129911386349661, 0.0208287362763057578075},
          {0.8896263385955021926542, 0.0192643726239309658037},
          {0.9080941403674934663931, 0.0176657573855815000728},
          {0.924947382932221387809, 0.0160357327023026379345},
          {0.9401561013542648280004, 0.0143771964484805996211},
          {0.9536932542508128101217, 0.0126930969589603897725},
          {0.9655347715133080962367, 0.0109864274913394441092},
          {0.9756595962390606154341, 0.0092602200871377482112},
          {0.9840497197732123129422, 0.00751753753730111440662},
          {0.9906902056995024086816, 0.005761457260424863191},
          {0.9955691806160258529042, 0.003995005321211884448},
          {0.9986775914951753665704, 0.002220517299295509506},
          {1, 3.603603603603603603604E-4}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
