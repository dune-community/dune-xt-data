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
std::vector<std::vector<double>> GaussLobattoData<78>::get()
{
  return {{-1, 3.33000333000333000333E-4},
          {-0.9987779736859994105084, 0.0020519952714079720947},
          {-0.99590535672630874611, 0.0036921027388122008122},
          {-0.9913960278771223769884, 0.005325281866318271556},
          {-0.9852577455908675314021, 0.0069495932991541063579},
          {-0.9775006568246824313123, 0.008562457170302024151},
          {-0.9681375240848889792052, 0.010161242958430579439},
          {-0.9571837375196820377686, 0.0117433297227283956954},
          {-0.9446572970506771886596, 0.0133061202739124481137},
          {-0.9305787850131773956361, 0.0148470478840160598636},
          {-0.914971333137803996424, 0.0163635812582883473905},
          {-0.8978605848748656897908, 0.0178532289672689652948},
          {-0.8792746534131899990282, 0.0193135436515817459534},
          {-0.859244075565158448327, 0.020742126092805867833},
          {-0.8378017616345146151713, 0.0221366291794603503844},
          {-0.8149829413670370126151, 0.0234947617756719394627},
          {-0.790825106081166381761, 0.024814292492202426071},
          {-0.7653679470777853955606, 0.02609305335640653490041},
          {-0.7386532904324995559864, 0.0273289433764357624053},
          {-0.710725028278735654149, 0.0285199319945195400495},
          {-0.6816290466952310502548, 0.0296640624240167724611},
          {-0.6514131503167897799366, 0.0307594548649582778333},
          {-0.6201269837924096590326, 0.0318043095929135296835},
          {-0.587821950219973942455, 0.0327969099161755210561},
          {-0.5545511266916145402199, 0.0337356249964468554283},
          {-0.5203691770885677897938, 0.0346189125284186338705},
          {-0.4853322622688420355431, 0.0354453212738560832024},
          {-0.449497947795286514349, 0.0362134934460381137932},
          {-0.412925109355683430261, 0.0369221669406402312512},
          {-0.3756738360302712930017, 0.0375701774094002000129},
          {-0.3378053315656403339166, 0.0381564601731626564508},
          {-0.299381813817213645604, 0.0386800519711617721745},
          {-0.2604664125255348288349, 0.0391400925436694591069},
          {-0.2211230655943191659907, 0.039535826045409931416},
          {-0.1814164140406860043066, 0.0398666022874191739801},
          {-0.14141169579017096617, 0.040131877805309509826},
          {-0.1011746384910141466344, 0.0403312167521845166334},
          {-0.0607713515238314398161, 0.0404642916147375262935},
          {-0.020268217384097873262, 0.0405308837513573646974},
          {0.02026821738409787326203, 0.04053088375135736469744},
          {0.0607713515238314398161, 0.0404642916147375262935},
          {0.1011746384910141466344, 0.0403312167521845166334},
          {0.14141169579017096617, 0.040131877805309509826},
          {0.1814164140406860043066, 0.0398666022874191739801},
          {0.2211230655943191659907, 0.039535826045409931416},
          {0.2604664125255348288349, 0.0391400925436694591069},
          {0.2993818138172136456041, 0.038680051971161772174},
          {0.337805331565640333917, 0.0381564601731626564508},
          {0.375673836030271293002, 0.0375701774094002000129},
          {0.4129251093556834302609, 0.0369221669406402312512},
          {0.449497947795286514349, 0.036213493446038113793},
          {0.4853322622688420355431, 0.035445321273856083202},
          {0.520369177088567789794, 0.0346189125284186338705},
          {0.5545511266916145402199, 0.0337356249964468554283},
          {0.5878219502199739424549, 0.0327969099161755210561},
          {0.6201269837924096590326, 0.0318043095929135296835},
          {0.6514131503167897799366, 0.030759454864958277833},
          {0.6816290466952310502548, 0.029664062424016772461},
          {0.710725028278735654149, 0.0285199319945195400495},
          {0.7386532904324995559864, 0.0273289433764357624053},
          {0.7653679470777853955606, 0.0260930533564065349004},
          {0.7908251060811663817606, 0.02481429249220242607099},
          {0.8149829413670370126151, 0.02349476177567193946268},
          {0.8378017616345146151713, 0.022136629179460350384},
          {0.8592440755651584483267, 0.020742126092805867833},
          {0.8792746534131899990282, 0.0193135436515817459534},
          {0.8978605848748656897908, 0.017853228967268965295},
          {0.9149713331378039964242, 0.0163635812582883473905},
          {0.9305787850131773956361, 0.01484704788401605986363},
          {0.9446572970506771886596, 0.0133061202739124481137},
          {0.9571837375196820377686, 0.0117433297227283956954},
          {0.9681375240848889792052, 0.01016124295843057943897},
          {0.9775006568246824313123, 0.008562457170302024151},
          {0.9852577455908675314021, 0.0069495932991541063579},
          {0.9913960278771223769884, 0.005325281866318271556},
          {0.99590535672630874611, 0.003692102738812200812},
          {0.9987779736859994105084, 0.002051995271407972095},
          {1, 3.33000333000333000333E-4}};
}


} // namespace Data
} // namespace XT
} // namespace Dune