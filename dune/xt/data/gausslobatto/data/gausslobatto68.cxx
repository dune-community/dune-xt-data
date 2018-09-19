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
std::vector<std::vector<double>> GaussLobattoData<68>::get()
{
  return {{-1, 4.38981562774363476734E-4},
          {-0.9983891540333851255426, 0.0027047158609942732051},
          {-0.994603362015707223881, 0.00486504098304063853555},
          {-0.9886628976973674390112, 0.0070136926736710041985},
          {-0.9805810878292053596617, 0.0091469982917290806779},
          {-0.9703755172913679911605, 0.011260454765196790397},
          {-0.9580683123388192158118, 0.0133495104186240543936},
          {-0.9436861362776113127121, 0.0154096485538985819849},
          {-0.9272601415010791401866, 0.017436410241159951025},
          {-0.9088259049414946840859, 0.0194254071974293125965},
          {-0.8884233520717977198871, 0.0213723322863068284337},
          {-0.8660966708711370769851, 0.02327296920668659868394},
          {-0.8418942163228538357028, 0.0251232017713179723298},
          {-0.8158684057873226486332, 0.0269190228873762619697},
          {-0.7880756055300913797408, 0.0286565432667223321125},
          {-0.7585760086744677280484, 0.0303319998655728487482},
          {-0.727433504853819869079, 0.031941764043263525181},
          {-0.6947155418513338746969, 0.0334823494260875119888},
          {-0.6604929795297333360869, 0.0349504194609534538519},
          {-0.6248399363688762415912, 0.0363427946434113268278},
          {-0.5878336289444820562598, 0.0376564594048762088655},
          {-0.5495542046961650094807, 0.038888568644402364885},
          {-0.510084568347278013164, 0.040036453891015258521},
          {-0.4695102023527009595653, 0.04109762908334621174},
          {-0.4279189817635698486723, 0.042069795954107501617},
          {-0.385400983909991018384, 0.0429508490077806243141},
          {-0.3420482933139803129623, 0.043738880080758951608},
          {-0.2979548022551796483432, 0.0444321824740826399099},
          {-0.253216007421307023701, 0.0450292546498245100301},
          {-0.2079288030837679729796, 0.0455288034831275727527},
          {-0.1621912712463770264451, 0.0459297470628552269276},
          {-0.116102469221689818227, 0.046231217034791425205},
          {-0.0697622150950153008986, 0.046432560482317929183},
          {-0.0232708715407507060344, 0.0465333413404968638234},
          {0.02327087154075070603437, 0.0465333413404968638234},
          {0.0697622150950153008986, 0.0464325604823179291833},
          {0.1161024692216898182267, 0.046231217034791425205},
          {0.1621912712463770264451, 0.0459297470628552269276},
          {0.2079288030837679729796, 0.045528803483127572753},
          {0.2532160074213070237007, 0.0450292546498245100301},
          {0.2979548022551796483432, 0.0444321824740826399099},
          {0.3420482933139803129623, 0.043738880080758951608},
          {0.3854009839099910183841, 0.0429508490077806243141},
          {0.4279189817635698486723, 0.042069795954107501617},
          {0.4695102023527009595653, 0.0410976290833462117396},
          {0.510084568347278013164, 0.040036453891015258521},
          {0.5495542046961650094807, 0.038888568644402364885},
          {0.5878336289444820562598, 0.037656459404876208866},
          {0.6248399363688762415912, 0.036342794643411326828},
          {0.6604929795297333360869, 0.0349504194609534538519},
          {0.6947155418513338746969, 0.033482349426087511989},
          {0.727433504853819869079, 0.0319417640432635251806},
          {0.7585760086744677280484, 0.0303319998655728487482},
          {0.7880756055300913797408, 0.028656543266722332112},
          {0.8158684057873226486332, 0.02691902288737626196971},
          {0.8418942163228538357028, 0.0251232017713179723298},
          {0.8660966708711370769851, 0.0232729692066865986839},
          {0.8884233520717977198871, 0.0213723322863068284337},
          {0.9088259049414946840859, 0.019425407197429312597},
          {0.9272601415010791401866, 0.0174364102411599510255},
          {0.9436861362776113127121, 0.0154096485538985819849},
          {0.9580683123388192158118, 0.013349510418624054394},
          {0.9703755172913679911605, 0.011260454765196790397},
          {0.9805810878292053596617, 0.0091469982917290806779},
          {0.9886628976973674390112, 0.0070136926736710041985},
          {0.9946033620157072238815, 0.004865040983040638535546},
          {0.9983891540333851255426, 0.002704715860994273205},
          {1, 4.38981562774363476734E-4}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
