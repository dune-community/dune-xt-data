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
std::vector<std::vector<double>> GaussLobattoData<89>::get()
{
  return {{-1, 2.553626149131767109295E-4},
          {-0.9990628398072443727195, 0.001573730137083271207},
          {-0.9968595066919204220834, 0.00283220561426330193},
          {-0.993399800262138491909, 0.004086451420539364396},
          {-0.988688347789927236669, 0.00533545766421778176863},
          {-0.9827311330193857510942, 0.00657771874498841365},
          {-0.9755356755007743416531, 0.0078116843032210550941},
          {-0.9671110464636400585845, 0.0090358040440223975764},
          {-0.9574678630732781083009, 0.0102485372536075706865},
          {-0.9466182767502045176802, 0.011448356613041191542},
          {-0.9345759584712629567848, 0.012633750701162080271},
          {-0.921356081796944730271, 0.0138032261083037973247},
          {-0.906975303868458835027, 0.0149553094033224277902},
          {-0.8914517444772566471592, 0.0160885490283092787761},
          {-0.8748049632646504255007, 0.0172015171459813013497},
          {-0.8570559350938344631313, 0.0182928114482163194663},
          {-0.8382270236316879989788, 0.01936105692807647932615},
          {-0.8183419531768012397773, 0.02040490761520701530608},
          {-0.7974257787708721024534, 0.021423048273454123106},
          {-0.7755048546320366805939, 0.0224141960590893961341},
          {-0.7526068009504212141271, 0.0233771021378323447766},
          {-0.7287604690880554201873, 0.024310553258789211594},
          {-0.703995905227178490373, 0.0252133732834141324561},
          {-0.6783443125128548950421, 0.0260844246676188368548},
          {-0.6518380117376729300432, 0.0269226098951953893766},
          {-0.6245104006181105308861, 0.027726872860765724317},
          {-0.596395911713911435955, 0.028496200200528079064},
          {-0.567529969043514360906, 0.0292296225691317688884},
          {-0.537948943450214131553, 0.029926215861076845192},
          {-0.507690106775303347746, 0.0305851023751033039231},
          {-0.4767915848959433418274, 0.0312054519201051911725},
          {-0.4452923096869415656055, 0.03178648286117786969647},
          {-0.4132319699669669743971, 0.0323274631044816311048},
          {-0.380650961491013565486, 0.0328277110196815817466},
          {-0.3475903360521232268702, 0.0332865962988021440121},
          {-0.31409174975650085835, 0.0337035407504144644147},
          {-0.280197410537195867463, 0.0340780190281563815079},
          {-0.245950024972483264878, 0.0344095592926672625373},
          {-0.211392744475953450732, 0.0346977438061038532855},
          {-0.176569110926111271908, 0.0349422094584881882164},
          {-0.1415230018039910291124, 0.0351426482252244659733},
          {-0.1062985749079139223639, 0.0352988075552084970057},
          {-0.0709402127150471561544, 0.0354104906890407639933},
          {-0.03549246645986890478212, 0.0354775569069421899335},
          {0, 0.0354999217060602710888},
          {0.0354924664598689047821, 0.035477556906942189933},
          {0.0709402127150471561544, 0.0354104906890407639933},
          {0.1062985749079139223639, 0.035298807555208497006},
          {0.141523001803991029112, 0.0351426482252244659733},
          {0.1765691109261112719082, 0.0349422094584881882164},
          {0.211392744475953450732, 0.03469774380610385328546},
          {0.245950024972483264878, 0.0344095592926672625373},
          {0.280197410537195867463, 0.034078019028156381508},
          {0.3140917497565008583497, 0.033703540750414464415},
          {0.3475903360521232268702, 0.033286596298802144012},
          {0.380650961491013565486, 0.032827711019681581747},
          {0.4132319699669669743971, 0.0323274631044816311048},
          {0.445292309686941565606, 0.031786482861177869696},
          {0.476791584895943341827, 0.031205451920105191172},
          {0.5076901067753033477462, 0.0305851023751033039231},
          {0.537948943450214131553, 0.029926215861076845192},
          {0.567529969043514360906, 0.029229622569131768888},
          {0.596395911713911435955, 0.028496200200528079064},
          {0.6245104006181105308861, 0.0277268728607657243174},
          {0.651838011737672930043, 0.0269226098951953893766},
          {0.678344312512854895042, 0.026084424667618836855},
          {0.7039959052271784903727, 0.0252133732834141324561},
          {0.7287604690880554201873, 0.024310553258789211594},
          {0.7526068009504212141271, 0.0233771021378323447766},
          {0.7755048546320366805939, 0.02241419605908939613409},
          {0.7974257787708721024534, 0.0214230482734541231061},
          {0.8183419531768012397773, 0.0204049076152070153061},
          {0.8382270236316879989788, 0.0193610569280764793262},
          {0.8570559350938344631313, 0.0182928114482163194663},
          {0.8748049632646504255007, 0.0172015171459813013497},
          {0.8914517444772566471592, 0.016088549028309278776},
          {0.9069753038684588350273, 0.01495530940332242779016},
          {0.9213560817969447302706, 0.01380322610830379732469},
          {0.9345759584712629567848, 0.012633750701162080271},
          {0.9466182767502045176802, 0.0114483566130411915422},
          {0.9574678630732781083009, 0.0102485372536075706865},
          {0.9671110464636400585845, 0.0090358040440223975764},
          {0.9755356755007743416531, 0.0078116843032210550941},
          {0.9827311330193857510942, 0.00657771874498841365034},
          {0.9886883477899272366692, 0.00533545766421778176863},
          {0.9933998002621384919092, 0.004086451420539364396},
          {0.9968595066919204220834, 0.0028322056142633019296},
          {0.9990628398072443727195, 0.001573730137083271207},
          {1, 2.553626149131767109295E-4}};
}


} // namespace internal
} // namespace Data
} // namespace XT
} // namespace Dune
