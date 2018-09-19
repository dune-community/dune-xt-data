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
std::vector<std::vector<double>> GaussLobattoData<80>::get()
{
  return {{-1, 3.164556962025316455696E-4},
          {-0.9988386765309250783551, 0.0019500843509775593405},
          {-0.996108661079905199384, 0.0035089042010290183998},
          {-0.9918229201812158681871, 0.005061425949589057683},
          {-0.985988477763353179517, 0.0066059324951682337931},
          {-0.9786145023169162373549, 0.00814009672701197166},
          {-0.9697125241807956173589, 0.0096615416736972776},
          {-0.9592964489562795834587, 0.0111678973477432794161},
          {-0.9473825428435665229571, 0.012656813820266284299},
          {-0.9339894093478802031048, 0.0141259672111923742908},
          {-0.9191379609908804997211, 0.01557306403491764694816},
          {-0.9028513869715415339599, 0.0169958450408706542491},
          {-0.8851551171023883463495, 0.0183920888468934998239},
          {-0.8660767821750498191163, 0.0197596154550449662829},
          {-0.845646170855781575384, 0.02109628967828148968},
          {-0.82389518319510250605, 0.0224000244860500255545},
          {-0.8008577808320073306963, 0.02366878426930063218942},
          {-0.776569933974418524925, 0.02490058802244976823402},
          {-0.7510695652407098110212, 0.026093512438604030629},
          {-0.724396490451107237754, 0.0272456949138645373614},
          {-0.696592356462052999082, 0.0283553364563695435539},
          {-0.667700576140971784667, 0.02942070449572629427},
          {-0.6377662605831966572672, 0.030440135588556215115},
          {-0.6068361486770316394257, 0.0314120380159944273155},
          {-0.5749585341270174203427, 0.0323348942691275588334},
          {-0.5421831900494038075735, 0.0332072634185137833674},
          {-0.5085612912576034789788, 0.0340277833641010215792},
          {-0.4741453343589957254786, 0.0347951729620404727817},
          {-0.4389890557878579000649, 0.03550823402508140861297},
          {-0.403147347902419263422, 0.0361658531934283453826},
          {-0.3666761732770508299754, 0.0367670036731425375735},
          {-0.3296324773234203402987, 0.0373107468393756024307},
          {-0.2920740993770488292038, 0.037796233701933498811},
          {-0.2540596823881000998783, 0.0382227062308836054352},
          {-0.2156485813574128483088, 0.0385894985401358706642},
          {-0.1769007706607436975137, 0.038896037927150553},
          {-0.1378767504059248657663, 0.03914184576714956376149},
          {-0.0986374519691498469193, 0.0393265382604354912},
          {-0.0592441428578819324932, 0.03944982703165166113134},
          {-0.01975833104893162978023, 0.0395115195800477061011},
          {0.0197583310489316297802, 0.03951151958004770610112},
          {0.0592441428578819324932, 0.039449827031651661131},
          {0.0986374519691498469193, 0.0393265382604354912003},
          {0.137876750405924865766, 0.0391418457671495637615},
          {0.1769007706607436975137, 0.0388960379271505530002},
          {0.215648581357412848309, 0.038589498540135870664},
          {0.2540596823881000998783, 0.0382227062308836054352},
          {0.292074099377048829204, 0.0377962337019334988114},
          {0.329632477323420340299, 0.0373107468393756024307},
          {0.3666761732770508299754, 0.0367670036731425375735},
          {0.403147347902419263422, 0.036165853193428345383},
          {0.4389890557878579000649, 0.03550823402508140861297},
          {0.4741453343589957254786, 0.0347951729620404727817},
          {0.5085612912576034789788, 0.0340277833641010215792},
          {0.5421831900494038075735, 0.033207263418513783367},
          {0.5749585341270174203427, 0.032334894269127558833},
          {0.6068361486770316394257, 0.0314120380159944273155},
          {0.6377662605831966572672, 0.0304401355885562151145},
          {0.667700576140971784667, 0.0294207044957262942698},
          {0.6965923564620529990821, 0.02835533645636954355387},
          {0.724396490451107237754, 0.0272456949138645373614},
          {0.751069565240709811021, 0.026093512438604030629},
          {0.7765699339744185249253, 0.024900588022449768234},
          {0.8008577808320073306963, 0.0236687842693006321894},
          {0.8238951831951025060502, 0.0224000244860500255545},
          {0.8456461708557815753842, 0.0210962896782814896803},
          {0.8660767821750498191163, 0.0197596154550449662829},
          {0.8851551171023883463495, 0.01839208884689349982393},
          {0.9028513869715415339599, 0.0169958450408706542491},
          {0.9191379609908804997211, 0.0155730640349176469482},
          {0.9339894093478802031048, 0.014125967211192374291},
          {0.9473825428435665229571, 0.012656813820266284299},
          {0.9592964489562795834587, 0.0111678973477432794161},
          {0.9697125241807956173589, 0.0096615416736972776},
          {0.9786145023169162373549, 0.00814009672701197166},
          {0.985988477763353179517, 0.0066059324951682337931},
          {0.9918229201812158681871, 0.005061425949589057683},
          {0.996108661079905199384, 0.0035089042010290184},
          {0.9988386765309250783551, 0.00195008435097755934},
          {1, 3.164556962025316455696E-4}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
