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
std::vector<std::vector<double>> GaussLobattoData<61>::get()
{
  return {{-1, 5.46448087431693989071E-4},
          {-0.9979949366740556141838, 0.003366411226619655863},
          {-0.9932836983690581043914, 0.006053374871734220926},
          {-0.9858940169577022680785, 0.008722604294982956735},
          {-0.975846387751266865222, 0.011368124877434198942},
          {-0.963167998862998009037, 0.01398295069130866773872},
          {-0.9478930579707180663834, 0.01656006451345082397},
          {-0.9300627543852870975188, 0.0190925285323474668602},
          {-0.9097251601954282248818, 0.0215735192501417909281},
          {-0.8869351043123038514915, 0.023996349889820170602},
          {-0.8617540259730692976091, 0.02635448966182035975},
          {-0.8342498096540052862153, 0.02864158181893247346042},
          {-0.8044966023144631661678, 0.0308514609761467631071},
          {-0.772574613633207541067, 0.03297816981349428243867},
          {-0.7385698998427723465684, 0.0350159751755644194024},
          {-0.7025741317737308169014, 0.03695938354745566557032},
          {-0.6646843477478281918646, 0.038803155875359808763},
          {-0.6250026919929151665797, 0.0405423216963780780111},
          {-0.583636139288421332164, 0.04217219254169165742933},
          {-0.5406962065856212735284, 0.0436883745780857778369},
          {-0.4962986523812218818109, 0.0450867804543522708522},
          {-0.450563164655359204525, 0.0463636403209698039077},
          {-0.4036130382156651850912, 0.047515511993546787831},
          {-0.3555748423174749979845, 0.048539290232741587896},
          {-0.3065780794563703760832, 0.0494322151157118430788},
          {-0.2567548362529974968138, 0.0501918794765676840411},
          {-0.2062394273713815593884, 0.0508162353957977865322},
          {-0.1551680334307187565906, 0.051303599721191368616},
          {-0.1036783338868046749845, 0.051652658605384085516},
          {-0.0519091358728098463303, 0.051862471047802855266},
          {0, 0.0519324714314659882776},
          {0.0519091358728098463303, 0.05186247104780285526599},
          {0.1036783338868046749845, 0.051652658605384085516},
          {0.1551680334307187565906, 0.05130359972119136861567},
          {0.2062394273713815593884, 0.0508162353957977865322},
          {0.2567548362529974968138, 0.0501918794765676840411},
          {0.3065780794563703760832, 0.0494322151157118430788},
          {0.3555748423174749979845, 0.048539290232741587896},
          {0.4036130382156651850912, 0.0475155119935467878311},
          {0.4505631646553592045245, 0.046363640320969803908},
          {0.4962986523812218818109, 0.045086780454352270852},
          {0.5406962065856212735284, 0.0436883745780857778369},
          {0.5836361392884213321642, 0.042172192541691657429},
          {0.6250026919929151665797, 0.0405423216963780780111},
          {0.664684347747828191865, 0.038803155875359808763},
          {0.7025741317737308169014, 0.03695938354745566557},
          {0.7385698998427723465684, 0.035015975175564419402},
          {0.7725746136332075410671, 0.03297816981349428243867},
          {0.8044966023144631661678, 0.0308514609761467631071},
          {0.8342498096540052862153, 0.0286415818189324734604},
          {0.8617540259730692976091, 0.02635448966182035975},
          {0.8869351043123038514915, 0.0239963498898201706025},
          {0.909725160195428224882, 0.0215735192501417909281},
          {0.9300627543852870975188, 0.0190925285323474668602},
          {0.9478930579707180663834, 0.01656006451345082397},
          {0.963167998862998009037, 0.0139829506913086677387},
          {0.9758463877512668652224, 0.011368124877434198942},
          {0.9858940169577022680785, 0.008722604294982956735},
          {0.9932836983690581043914, 0.006053374871734220926},
          {0.9979949366740556141838, 0.003366411226619655863},
          {1, 5.46448087431693989071E-4}};
}


} // namespace Data
} // namespace XT
} // namespace Dune
