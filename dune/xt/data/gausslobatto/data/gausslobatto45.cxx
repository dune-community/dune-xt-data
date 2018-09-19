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
std::vector<std::vector<double>> GaussLobattoData<45>::get()
{
  return {{-1, 0.00101010101010101010101},
          {-0.9962947218690884716196, 0.006219230315748659499},
          {-0.987596819241306571024, 0.011168288996584963868},
          {-0.9739774150069718724496, 0.0160590894958373213721},
          {-0.9555054226081030995663, 0.0208695247163972654632},
          {-0.9322730566055358061466, 0.025575899418151970997},
          {-0.9043961132643065713879, 0.0301548257535359391954},
          {-0.8720134941424482603486, 0.0345835096079898226717},
          {-0.8352865366599911772739, 0.038839894146310447526},
          {-0.7943982170703010521416, 0.0429027771311375077058},
          {-0.7495522413180639123366, 0.0467519188506980623813},
          {-0.7009720311947062702516, 0.0503681437852477418537},
          {-0.6488996117247848591918, 0.0537334364787708270874},
          {-0.5935944056396343352409, 0.0568310314436306420395},
          {-0.5353319410686920064389, 0.05964549675915421358339},
          {-0.4744024789408958175518, 0.0621628109906441164453},
          {-0.4111095669597431996858, 0.064370433064034661009},
          {-0.3457685273686693084818, 0.0662573647565397472841},
          {-0.2787048860472541167884, 0.067814205496082610677},
          {-0.2102527507680684757364, 0.0690331991986022620277},
          {-0.1407531466956934087881, 0.069908272911014880663},
          {-0.070552317421623826527, 0.070435067067928043537},
          {0, 0.070610957211714566022},
          {0.070552317421623826527, 0.07043506706792804353741},
          {0.1407531466956934087881, 0.069908272911014880663},
          {0.2102527507680684757364, 0.0690331991986022620277},
          {0.2787048860472541167884, 0.067814205496082610677},
          {0.345768527368669308482, 0.0662573647565397472841},
          {0.411109566959743199686, 0.0643704330640346610091},
          {0.4744024789408958175518, 0.0621628109906441164453},
          {0.5353319410686920064389, 0.0596454967591542135834},
          {0.5935944056396343352409, 0.05683103144363064204},
          {0.6488996117247848591918, 0.0537334364787708270874},
          {0.7009720311947062702516, 0.050368143785247741854},
          {0.7495522413180639123366, 0.0467519188506980623813},
          {0.7943982170703010521416, 0.0429027771311375077058},
          {0.835286536659991177274, 0.03883989414631044752649},
          {0.8720134941424482603486, 0.034583509607989822672},
          {0.9043961132643065713879, 0.0301548257535359391954},
          {0.9322730566055358061466, 0.025575899418151970997},
          {0.9555054226081030995663, 0.020869524716397265463},
          {0.9739774150069718724496, 0.016059089495837321372},
          {0.9875968192413065710237, 0.0111682889965849638683},
          {0.9962947218690884716196, 0.0062192303157486594985},
          {1, 0.00101010101010101010101}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune