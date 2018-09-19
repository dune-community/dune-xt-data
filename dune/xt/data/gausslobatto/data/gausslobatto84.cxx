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
std::vector<std::vector<double>> GaussLobattoData<84>::get()
{
  return {{-1, 2.868617326448651749857E-4},
          {-0.998947260872255005807, 0.001767782471840435398},
          {-0.996472353027904818547, 0.0031811485453031041743},
          {-0.992586669297606460556, 0.004589269355179933306},
          {-0.9872960105927626898732, 0.0059907927021621812635},
          {-0.980607918453013685492, 0.007383811435236258796},
          {-0.9725318743060855900263, 0.0087663706087872830496},
          {-0.963079314524793732752, 0.0101365184112565854323},
          {-0.9522636206285780048446, 0.011492317424473048764},
          {-0.940100102250194065457, 0.0128318494695815179425},
          {-0.9266059761540929824897, 0.01415321897201610915757},
          {-0.9118003421519175732593, 0.0154545558797005381519},
          {-0.8957041561988042962713, 0.016734018405800827738},
          {-0.8783402007970669479032, 0.0179897956785002299845},
          {-0.8597330527842864646463, 0.01922011032481028731326},
          {-0.8399090485666603059051, 0.0204232209968905631438},
          {-0.8188962468539538394317, 0.0215974248424953052054},
          {-0.796724388952343768277, 0.022741059918432623263},
          {-0.773424856673210539005, 0.023852507544778188608},
          {-0.74903062791847087766, 0.0249301945971030064172},
          {-0.7235762300058923338742, 0.025972595733786564677},
          {-0.69709769080079277354, 0.026978235555437807566},
          {-0.6696324877234987576843, 0.0279456906934677895623},
          {-0.641219494704865602093, 0.0288735918249170852843},
          {-0.6118989271650196981406, 0.0297606256107221123505},
          {-0.5817122850932530531652, 0.0306055365546992909199},
          {-0.550702294309669701685, 0.0314071287806300363002},
          {-0.5189128459917456783524, 0.03216426772494050965289},
          {-0.4863889345514125552342, 0.032875881742586393661},
          {-0.4531765939506041996644, 0.03354096362387381414408},
          {-0.4193228325454132118834, 0.0341585720200722923054},
          {-0.3848755665510837722063, 0.0347278327758038504769},
          {-0.3498835522220180667888, 0.0352479401663237674149},
          {-0.3143963168427910797119, 0.0357181580379427031716},
          {-0.27846408862785061441, 0.03613782084997673612031},
          {-0.2421377256291234588099, 0.036506334616751042182},
          {-0.2054686437521523832574, 0.03682317774832427554829},
          {-0.168508743982650125545, 0.0370879017887439638902},
          {-0.1313103389264738561356, 0.037300132050788194794},
          {-0.0939260787669952254418, 0.0374595681462953308802},
          {-0.0564088767446655832534, 0.0375659844113312359775},
          {-0.0188118342642521503742, 0.0376192302255923108367},
          {0.0188118342642521503742, 0.0376192302255923108367},
          {0.0564088767446655832534, 0.0375659844113312359775},
          {0.0939260787669952254418, 0.0374595681462953308802},
          {0.131310338926473856136, 0.0373001320507881947937},
          {0.1685087439826501255448, 0.0370879017887439638902},
          {0.2054686437521523832574, 0.036823177748324275548},
          {0.2421377256291234588099, 0.036506334616751042182},
          {0.2784640886278506144095, 0.0361378208499767361203},
          {0.3143963168427910797119, 0.035718158037942703172},
          {0.3498835522220180667888, 0.035247940166323767415},
          {0.3848755665510837722063, 0.0347278327758038504769},
          {0.4193228325454132118834, 0.0341585720200722923054},
          {0.4531765939506041996644, 0.033540963623873814144},
          {0.486388934551412555234, 0.032875881742586393661},
          {0.5189128459917456783524, 0.0321642677249405096529},
          {0.5507022943096697016848, 0.0314071287806300363},
          {0.5817122850932530531652, 0.03060553655469929092},
          {0.6118989271650196981406, 0.0297606256107221123505},
          {0.6412194947048656020933, 0.02887359182491708528427},
          {0.6696324877234987576843, 0.027945690693467789562},
          {0.69709769080079277354, 0.0269782355554378075657},
          {0.7235762300058923338742, 0.025972595733786564677},
          {0.74903062791847087766, 0.0249301945971030064172},
          {0.7734248566732105390053, 0.0238525075447781886081},
          {0.7967243889523437682772, 0.0227410599184326232634},
          {0.8188962468539538394317, 0.021597424842495305205},
          {0.8399090485666603059051, 0.0204232209968905631438},
          {0.8597330527842864646463, 0.0192201103248102873133},
          {0.8783402007970669479032, 0.0179897956785002299845},
          {0.8957041561988042962713, 0.016734018405800827738},
          {0.9118003421519175732593, 0.0154545558797005381519},
          {0.9266059761540929824897, 0.0141532189720161091576},
          {0.940100102250194065457, 0.012831849469581517943},
          {0.9522636206285780048446, 0.0114923174244730487643},
          {0.9630793145247937327516, 0.0101365184112565854323},
          {0.9725318743060855900263, 0.0087663706087872830496},
          {0.9806079184530136854923, 0.0073838114352362587961},
          {0.9872960105927626898732, 0.0059907927021621812635},
          {0.9925866692976064605564, 0.004589269355179933306},
          {0.996472353027904818547, 0.0031811485453031041743},
          {0.998947260872255005807, 0.0017677824718404353978},
          {1, 2.868617326448651749857E-4}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
