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


template <>
std::vector<std::vector<double>> GaussLobattoData<76>::get()
{
  return {{-1, 3.508771929824561403509E-4},
          {-0.9987123842493485182882, 0.0021621077221020532567},
          {-0.9956856972170372578414, 0.003890024981613587403},
          {-0.9909348294778539338872, 0.005610299353547198244},
          {-0.9844683740794967429273, 0.007320736637641664942},
          {-0.9762975907424482514371, 0.009018469400863626742},
          {-0.966436643173545736004, 0.0107005790093541402943},
          {-0.954902609384108359905, 0.0123641595976807217264},
          {-0.9417154599411249854296, 0.0140063334944051862732},
          {-0.926898025727761018528, 0.0156242587778171079253},
          {-0.9104759592602516832315, 0.0172151349912039871885},
          {-0.8924776906261978595871, 0.0187762082788276994456},
          {-0.872934378425957762007, 0.0203047762707377734109},
          {-0.8518798559103615975491, 0.0217981928136256420817},
          {-0.8293505724509946837244, 0.023253872577176730804},
          {-0.8053855304630549167782, 0.024669295542790605807},
          {-0.7800262178987163484123, 0.0260420113732556465637},
          {-0.753316536432206371619, 0.0273696436587296280854},
          {-0.72530272546319405249, 0.0286498940330933183957},
          {-0.6960332820712977952176, 0.029880546154275388196},
          {-0.66555887706099372175, 0.0310594695420445569794},
          {-0.6339322672426832257504, 0.03218462326683933862809},
          {-0.6012082041020301512461, 0.0332540594833721769528},
          {-0.5674433390158353452402, 0.0342659268029632012783},
          {-0.5326961251786379347318, 0.0352184734988094866753},
          {-0.4970267164098920542208, 0.036110050538668265411},
          {-0.4604968630169460924455, 0.036939114439721337863},
          {-0.423169804894134394392, 0.0377042299406896522073},
          {-0.3851101620430669481381, 0.0384040724865795657503},
          {-0.3463838227036608440822, 0.0390374305217642239534},
          {-0.307057829289589401641, 0.0396032075874337098688},
          {-0.2672002623256229783351, 0.040100424219785238463},
          {-0.226880122587792599082, 0.0405282196456689189888},
          {-0.1861672116504174045155, 0.040885853272754767671},
          {-0.1451320110467939491933, 0.041172705971642039908},
          {-0.1038455602527446891326, 0.0413882811476919013899},
          {-0.0623793337042603481406, 0.0415322056007283155974},
          {-0.0208051170621426620362, 0.0416042301711191394896},
          {0.0208051170621426620362, 0.0416042301711191394896},
          {0.0623793337042603481406, 0.0415322056007283155974},
          {0.1038455602527446891326, 0.04138828114769190139},
          {0.1451320110467939491933, 0.041172705971642039908},
          {0.1861672116504174045155, 0.0408858532727547676708},
          {0.2268801225877925990821, 0.0405282196456689189888},
          {0.2672002623256229783351, 0.0401004242197852384634},
          {0.3070578292895894016409, 0.039603207587433709869},
          {0.3463838227036608440822, 0.0390374305217642239534},
          {0.3851101620430669481381, 0.03840407248657956575},
          {0.423169804894134394392, 0.037704229940689652207},
          {0.4604968630169460924455, 0.036939114439721337863},
          {0.4970267164098920542208, 0.036110050538668265411},
          {0.5326961251786379347318, 0.0352184734988094866753},
          {0.5674433390158353452402, 0.0342659268029632012783},
          {0.6012082041020301512461, 0.033254059483372176953},
          {0.6339322672426832257504, 0.0321846232668393386281},
          {0.6655588770609937217503, 0.0310594695420445569794},
          {0.6960332820712977952176, 0.0298805461542753881955},
          {0.7253027254631940524897, 0.028649894033093318396},
          {0.7533165364322063716192, 0.0273696436587296280854},
          {0.7800262178987163484123, 0.0260420113732556465637},
          {0.8053855304630549167782, 0.024669295542790605807},
          {0.8293505724509946837244, 0.023253872577176730804},
          {0.8518798559103615975491, 0.021798192813625642082},
          {0.872934378425957762007, 0.0203047762707377734109},
          {0.8924776906261978595871, 0.0187762082788276994456},
          {0.9104759592602516832315, 0.0172151349912039871885},
          {0.926898025727761018528, 0.0156242587778171079253},
          {0.9417154599411249854296, 0.0140063334944051862732},
          {0.954902609384108359905, 0.012364159597680721726},
          {0.966436643173545736004, 0.0107005790093541402943},
          {0.9762975907424482514371, 0.0090184694008636267418},
          {0.9844683740794967429273, 0.007320736637641664942},
          {0.9909348294778539338872, 0.0056102993535471982437},
          {0.9956856972170372578414, 0.0038900249816135874026},
          {0.9987123842493485182882, 0.002162107722102053257},
          {1, 3.508771929824561403509E-4}};
}


} // namespace Data
} // namespace XT
} // namespace Dune
