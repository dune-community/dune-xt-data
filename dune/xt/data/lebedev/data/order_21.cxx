// This file is part of the dune-gdt project:
//   https://github.com/dune-community/dune-gdt
// Copyright 2010-2017, dune-gdt developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner  (2017)

#include "../lebedev_data.hh"

namespace Dune {
namespace GDT {
namespace Hyperbolic {
namespace Problems {
namespace internal {


template <>
void LebedevData<21>::get(std::vector<std::pair<std::array<double, 3>, double>>& quad_rule)
{
  quad_rule = {{{-1, 1.22464679914735e-16, 6.12323399573677e-17}, 0.0696785509053958},
               {{1, -2.44929359829471e-16, 6.12323399573677e-17}, 0.0696785509053958},
               {{-1.83697019872103e-16, -1, 6.12323399573677e-17}, 0.0696785509053958},
               {{6.12323399573677e-17, 1, 6.12323399573677e-17}, 0.0696785509053958},
               {{-0, -0, 1}, 0.0696785509053958},
               {{-2.24963967399279e-32, -1.22464679914735e-16, -1}, 0.0696785509053958},
               {{-1.29893408435324e-16, -0.707106781186547, 0.707106781186548}, 0.0762946177193559},
               {{-1.29893408435324e-16, -0.707106781186548, -0.707106781186547}, 0.0762946177193559},
               {{4.32978028117747e-17, 0.707106781186547, 0.707106781186548}, 0.0762946177193559},
               {{4.32978028117747e-17, 0.707106781186548, -0.707106781186547}, 0.0762946177193559},
               {{-0.707106781186547, 8.65956056235493e-17, 0.707106781186548}, 0.0762946177193559},
               {{-0.707106781186548, 8.65956056235493e-17, -0.707106781186547}, 0.0762946177193559},
               {{0.707106781186547, -1.73191211247099e-16, 0.707106781186548}, 0.0762946177193559},
               {{0.707106781186548, -1.73191211247099e-16, -0.707106781186547}, 0.0762946177193559},
               {{-0.707106781186548, -0.707106781186547, 6.12323399573677e-17}, 0.0762946177193559},
               {{-0.707106781186547, 0.707106781186548, 6.12323399573677e-17}, 0.0762946177193559},
               {{0.707106781186547, -0.707106781186548, 6.12323399573677e-17}, 0.0762946177193559},
               {{0.707106781186548, 0.707106781186547, 6.12323399573677e-17}, 0.0762946177193559},
               {{-0.577350269189626, -0.577350269189626, 0.577350269189626}, 0.0802196230855248},
               {{-0.577350269189626, -0.577350269189626, -0.577350269189626}, 0.0802196230855248},
               {{-0.577350269189626, 0.577350269189626, 0.577350269189626}, 0.0802196230855248},
               {{-0.577350269189626, 0.577350269189626, -0.577350269189626}, 0.0802196230855248},
               {{0.577350269189626, -0.577350269189626, 0.577350269189626}, 0.0802196230855248},
               {{0.577350269189626, -0.577350269189626, -0.577350269189626}, 0.0802196230855248},
               {{0.577350269189626, 0.577350269189626, 0.577350269189626}, 0.0802196230855248},
               {{0.577350269189626, 0.577350269189626, -0.577350269189626}, 0.0802196230855248},
               {{-0.255125262111413, -0.255125262111413, 0.932642590312691}, 0.0651363694655105},
               {{-0.255125262111414, -0.255125262111413, -0.932642590312691}, 0.0651363694655105},
               {{-0.255125262111413, 0.255125262111413, 0.932642590312691}, 0.0651363694655105},
               {{-0.255125262111413, 0.255125262111414, -0.932642590312691}, 0.0651363694655105},
               {{0.255125262111413, -0.255125262111413, 0.932642590312691}, 0.0651363694655105},
               {{0.255125262111413, -0.255125262111414, -0.932642590312691}, 0.0651363694655105},
               {{0.255125262111413, 0.255125262111413, 0.932642590312691}, 0.0651363694655105},
               {{0.255125262111414, 0.255125262111413, -0.932642590312691}, 0.0651363694655105},
               {{-0.255125262111414, -0.93264259031269, 0.255125262111413}, 0.0651363694655105},
               {{-0.255125262111413, 0.932642590312691, 0.255125262111413}, 0.0651363694655105},
               {{-0.255125262111414, -0.93264259031269, -0.255125262111414}, 0.0651363694655105},
               {{-0.255125262111413, 0.932642590312691, -0.255125262111414}, 0.0651363694655105},
               {{0.255125262111413, -0.932642590312691, 0.255125262111413}, 0.0651363694655105},
               {{0.255125262111413, 0.932642590312691, 0.255125262111413}, 0.0651363694655105},
               {{0.255125262111413, -0.932642590312691, -0.255125262111414}, 0.0651363694655105},
               {{0.255125262111413, 0.932642590312691, -0.255125262111414}, 0.0651363694655105},
               {{-0.932642590312691, -0.255125262111414, 0.255125262111413}, 0.0651363694655105},
               {{0.93264259031269, -0.255125262111414, 0.255125262111413}, 0.0651363694655105},
               {{-0.932642590312691, -0.255125262111414, -0.255125262111414}, 0.0651363694655105},
               {{0.93264259031269, -0.255125262111414, -0.255125262111414}, 0.0651363694655105},
               {{-0.93264259031269, 0.255125262111414, 0.255125262111413}, 0.0651363694655105},
               {{0.932642590312691, 0.255125262111413, 0.255125262111413}, 0.0651363694655105},
               {{-0.93264259031269, 0.255125262111414, -0.255125262111414}, 0.0651363694655105},
               {{0.932642590312691, 0.255125262111413, -0.255125262111414}, 0.0651363694655105},
               {{-0.674360146036277, -0.674360146036276, 0.300793595137701}, 0.079393437452534},
               {{-0.674360146036277, -0.674360146036276, -0.300793595137701}, 0.079393437452534},
               {{-0.674360146036276, 0.674360146036277, 0.300793595137701}, 0.079393437452534},
               {{-0.674360146036276, 0.674360146036277, -0.300793595137701}, 0.079393437452534},
               {{0.674360146036276, -0.674360146036277, 0.300793595137701}, 0.079393437452534},
               {{0.674360146036276, -0.674360146036277, -0.300793595137701}, 0.079393437452534},
               {{0.674360146036277, 0.674360146036276, 0.300793595137701}, 0.079393437452534},
               {{0.674360146036277, 0.674360146036276, -0.300793595137701}, 0.079393437452534},
               {{-0.674360146036276, -0.300793595137701, 0.674360146036277}, 0.079393437452534},
               {{-0.674360146036276, 0.300793595137702, 0.674360146036277}, 0.079393437452534},
               {{-0.674360146036277, -0.300793595137701, -0.674360146036276}, 0.079393437452534},
               {{-0.674360146036277, 0.300793595137702, -0.674360146036276}, 0.079393437452534},
               {{0.674360146036276, -0.300793595137702, 0.674360146036277}, 0.079393437452534},
               {{0.674360146036277, 0.300793595137701, 0.674360146036277}, 0.079393437452534},
               {{0.674360146036277, -0.300793595137702, -0.674360146036276}, 0.079393437452534},
               {{0.674360146036277, 0.300793595137701, -0.674360146036276}, 0.079393437452534},
               {{-0.300793595137702, -0.674360146036276, 0.674360146036277}, 0.079393437452534},
               {{0.300793595137701, -0.674360146036277, 0.674360146036277}, 0.079393437452534},
               {{-0.300793595137702, -0.674360146036277, -0.674360146036276}, 0.079393437452534},
               {{0.300793595137701, -0.674360146036277, -0.674360146036276}, 0.079393437452534},
               {{-0.300793595137701, 0.674360146036276, 0.674360146036277}, 0.079393437452534},
               {{0.300793595137701, 0.674360146036277, 0.674360146036277}, 0.079393437452534},
               {{-0.300793595137702, 0.674360146036277, -0.674360146036276}, 0.079393437452534},
               {{0.300793595137701, 0.674360146036277, -0.674360146036276}, 0.079393437452534},
               {{-0.431891069671941, -0.431891069671941, 0.791795559393492}, 0.0779324837307527},
               {{-0.431891069671941, -0.431891069671941, -0.791795559393492}, 0.0779324837307527},
               {{-0.431891069671941, 0.431891069671941, 0.791795559393492}, 0.0779324837307527},
               {{-0.431891069671941, 0.431891069671941, -0.791795559393492}, 0.0779324837307527},
               {{0.431891069671941, -0.431891069671941, 0.791795559393492}, 0.0779324837307527},
               {{0.431891069671941, -0.431891069671941, -0.791795559393492}, 0.0779324837307527},
               {{0.431891069671941, 0.431891069671941, 0.791795559393492}, 0.0779324837307527},
               {{0.431891069671941, 0.431891069671941, -0.791795559393492}, 0.0779324837307527},
               {{-0.431891069671941, -0.791795559393492, 0.431891069671941}, 0.0779324837307527},
               {{-0.431891069671941, 0.791795559393492, 0.431891069671941}, 0.0779324837307527},
               {{-0.431891069671941, -0.791795559393492, -0.431891069671941}, 0.0779324837307527},
               {{-0.431891069671941, 0.791795559393492, -0.431891069671941}, 0.0779324837307527},
               {{0.431891069671941, -0.791795559393492, 0.431891069671941}, 0.0779324837307527},
               {{0.431891069671941, 0.791795559393492, 0.431891069671941}, 0.0779324837307527},
               {{0.431891069671941, -0.791795559393492, -0.431891069671941}, 0.0779324837307527},
               {{0.431891069671941, 0.791795559393492, -0.431891069671941}, 0.0779324837307527},
               {{-0.791795559393492, -0.431891069671941, 0.431891069671941}, 0.0779324837307527},
               {{0.791795559393492, -0.431891069671941, 0.431891069671941}, 0.0779324837307527},
               {{-0.791795559393492, -0.431891069671941, -0.431891069671941}, 0.0779324837307527},
               {{0.791795559393492, -0.431891069671941, -0.431891069671941}, 0.0779324837307527},
               {{-0.791795559393492, 0.431891069671941, 0.431891069671941}, 0.0779324837307527},
               {{0.791795559393492, 0.431891069671941, 0.431891069671941}, 0.0779324837307527},
               {{-0.791795559393492, 0.431891069671941, -0.431891069671941}, 0.0779324837307527},
               {{0.791795559393492, 0.431891069671941, -0.431891069671941}, 0.0779324837307527},
               {{-0.261393136033599, -0.965232421976448, 6.12323399573677e-17}, 0.0688278136856173},
               {{-0.261393136033599, 0.965232421976448, 6.12323399573677e-17}, 0.0688278136856173},
               {{0.261393136033598, -0.965232421976449, 6.12323399573677e-17}, 0.0688278136856173},
               {{0.261393136033599, 0.965232421976448, 6.12323399573677e-17}, 0.0688278136856173},
               {{-0.965232421976448, -0.261393136033598, 6.12323399573677e-17}, 0.0688278136856173},
               {{-0.965232421976448, 0.261393136033599, 6.12323399573677e-17}, 0.0688278136856173},
               {{0.965232421976449, -0.261393136033598, 6.12323399573677e-17}, 0.0688278136856173},
               {{0.965232421976448, 0.261393136033599, 6.12323399573677e-17}, 0.0688278136856173},
               {{-0.261393136033599, 3.20114267362635e-17, 0.965232421976448}, 0.0688278136856173},
               {{-0.261393136033599, 3.20114267362635e-17, -0.965232421976448}, 0.0688278136856173},
               {{0.261393136033599, -6.40228534725271e-17, 0.965232421976448}, 0.0688278136856173},
               {{0.261393136033599, -6.40228534725271e-17, -0.965232421976448}, 0.0688278136856173},
               {{-0.965232421976448, 1.1820687960067e-16, 0.261393136033599}, 0.0688278136856173},
               {{-0.965232421976448, 1.1820687960067e-16, -0.261393136033599}, 0.0688278136856173},
               {{0.965232421976448, -2.36413759201341e-16, 0.261393136033599}, 0.0688278136856173},
               {{0.965232421976448, -2.36413759201341e-16, -0.261393136033599}, 0.0688278136856173},
               {{-4.80171401043953e-17, -0.261393136033599, 0.965232421976448}, 0.0688278136856173},
               {{-4.80171401043953e-17, -0.261393136033599, -0.965232421976448}, 0.0688278136856173},
               {{1.60057133681318e-17, 0.261393136033599, 0.965232421976448}, 0.0688278136856173},
               {{1.60057133681318e-17, 0.261393136033599, -0.965232421976448}, 0.0688278136856173},
               {{-1.77310319401006e-16, -0.965232421976448, 0.261393136033599}, 0.0688278136856173},
               {{-1.77310319401006e-16, -0.965232421976448, -0.261393136033599}, 0.0688278136856173},
               {{5.91034398003352e-17, 0.965232421976448, 0.261393136033599}, 0.0688278136856173},
               {{5.91034398003352e-17, 0.965232421976448, -0.261393136033599}, 0.0688278136856173},
               {{-0.499045316179604, -0.144663074432511, 0.854415804684659}, 0.0750009251580063},
               {{-0.499045316179603, -0.144663074432511, -0.854415804684659}, 0.0750009251580063},
               {{-0.499045316179604, 0.144663074432512, 0.854415804684659}, 0.0750009251580063},
               {{-0.499045316179603, 0.144663074432511, -0.854415804684659}, 0.0750009251580063},
               {{0.499045316179604, -0.144663074432511, 0.854415804684659}, 0.0750009251580063},
               {{0.499045316179603, -0.144663074432511, -0.854415804684659}, 0.0750009251580063},
               {{0.499045316179604, 0.144663074432511, 0.854415804684659}, 0.0750009251580063},
               {{0.499045316179603, 0.144663074432511, -0.854415804684659}, 0.0750009251580063},
               {{-0.499045316179604, -0.854415804684659, 0.144663074432512}, 0.0750009251580063},
               {{-0.499045316179604, -0.854415804684659, -0.144663074432511}, 0.0750009251580063},
               {{-0.499045316179604, 0.854415804684659, 0.144663074432512}, 0.0750009251580063},
               {{-0.499045316179604, 0.854415804684659, -0.144663074432511}, 0.0750009251580063},
               {{0.499045316179604, -0.854415804684659, 0.144663074432512}, 0.0750009251580063},
               {{0.499045316179604, -0.854415804684659, -0.144663074432511}, 0.0750009251580063},
               {{0.499045316179604, 0.854415804684659, 0.144663074432512}, 0.0750009251580063},
               {{0.499045316179604, 0.854415804684659, -0.144663074432511}, 0.0750009251580063},
               {{-0.144663074432512, -0.499045316179604, 0.854415804684659}, 0.0750009251580063},
               {{-0.144663074432512, -0.499045316179603, -0.854415804684659}, 0.0750009251580063},
               {{-0.144663074432512, 0.499045316179604, 0.854415804684659}, 0.0750009251580063},
               {{-0.144663074432511, 0.499045316179603, -0.854415804684659}, 0.0750009251580063},
               {{0.144663074432512, -0.499045316179604, 0.854415804684659}, 0.0750009251580063},
               {{0.144663074432511, -0.499045316179603, -0.854415804684659}, 0.0750009251580063},
               {{0.144663074432512, 0.499045316179604, 0.854415804684659}, 0.0750009251580063},
               {{0.144663074432511, 0.499045316179603, -0.854415804684659}, 0.0750009251580063},
               {{-0.144663074432511, -0.854415804684659, 0.499045316179604}, 0.0750009251580063},
               {{-0.144663074432511, -0.854415804684659, -0.499045316179603}, 0.0750009251580063},
               {{-0.144663074432511, 0.854415804684659, 0.499045316179604}, 0.0750009251580063},
               {{-0.144663074432511, 0.854415804684659, -0.499045316179603}, 0.0750009251580063},
               {{0.144663074432511, -0.854415804684659, 0.499045316179604}, 0.0750009251580063},
               {{0.144663074432511, -0.854415804684659, -0.499045316179603}, 0.0750009251580063},
               {{0.144663074432511, 0.854415804684659, 0.499045316179604}, 0.0750009251580063},
               {{0.144663074432511, 0.854415804684659, -0.499045316179603}, 0.0750009251580063},
               {{-0.854415804684659, -0.499045316179604, 0.144663074432512}, 0.0750009251580063},
               {{-0.854415804684659, -0.499045316179604, -0.144663074432511}, 0.0750009251580063},
               {{-0.854415804684659, 0.499045316179604, 0.144663074432512}, 0.0750009251580063},
               {{-0.854415804684659, 0.499045316179604, -0.144663074432511}, 0.0750009251580063},
               {{0.854415804684659, -0.499045316179603, 0.144663074432512}, 0.0750009251580063},
               {{0.854415804684659, -0.499045316179603, -0.144663074432511}, 0.0750009251580063},
               {{0.854415804684659, 0.499045316179603, 0.144663074432512}, 0.0750009251580063},
               {{0.854415804684659, 0.499045316179603, -0.144663074432511}, 0.0750009251580063},
               {{-0.854415804684659, -0.144663074432511, 0.499045316179604}, 0.0750009251580063},
               {{-0.854415804684659, -0.144663074432511, -0.499045316179603}, 0.0750009251580063},
               {{-0.854415804684659, 0.144663074432511, 0.499045316179604}, 0.0750009251580063},
               {{-0.854415804684659, 0.144663074432511, -0.499045316179603}, 0.0750009251580063},
               {{0.854415804684659, -0.144663074432511, 0.499045316179604}, 0.0750009251580063},
               {{0.854415804684659, -0.144663074432511, -0.499045316179603}, 0.0750009251580063},
               {{0.854415804684659, 0.144663074432511, 0.499045316179604}, 0.0750009251580063},
               {{0.854415804684659, 0.144663074432511, -0.499045316179603}, 0.0750009251580063}};
}


} // namespace internal
} // namespace Problems
} // namespace Hyperbolic
} // namespace GDT
} // namespace Dune
