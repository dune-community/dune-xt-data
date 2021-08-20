// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   René Fritze    (2018)
//   Tobias Leibner (2018 - 2019)
//
// This file is part of the dune-gdt project:

#include "../lebedev_data.hh"

namespace Dune::XT::Data {


template <>
void LebedevData<15>::get(std::vector<std::pair<std::array<double, 3>, double>>& quad_rule)
{
  quad_rule = {{{-1, 1.22464679914735e-16, 6.12323399573677e-17}, 0.145066327438495},
               {{1, -2.44929359829471e-16, 6.12323399573677e-17}, 0.145066327438495},
               {{-1.83697019872103e-16, -1, 6.12323399573677e-17}, 0.145066327438495},
               {{6.12323399573677e-17, 1, 6.12323399573677e-17}, 0.145066327438495},
               {{-0, -0, 1}, 0.145066327438495},
               {{-2.24963967399279e-32, -1.22464679914735e-16, -1}, 0.145066327438495},
               {{-0.577350269189626, -0.577350269189626, 0.577350269189626}, 0.150091588157078},
               {{-0.577350269189626, -0.577350269189626, -0.577350269189626}, 0.150091588157078},
               {{-0.577350269189626, 0.577350269189626, 0.577350269189626}, 0.150091588157078},
               {{-0.577350269189626, 0.577350269189626, -0.577350269189626}, 0.150091588157078},
               {{0.577350269189626, -0.577350269189626, 0.577350269189626}, 0.150091588157078},
               {{0.577350269189626, -0.577350269189626, -0.577350269189626}, 0.150091588157078},
               {{0.577350269189626, 0.577350269189626, 0.577350269189626}, 0.150091588157078},
               {{0.577350269189626, 0.577350269189626, -0.577350269189626}, 0.150091588157078},
               {{-0.36960284645415, -0.36960284645415, 0.852518311701268}, 0.139619360790922},
               {{-0.36960284645415, -0.36960284645415, -0.852518311701268}, 0.139619360790922},
               {{-0.36960284645415, 0.36960284645415, 0.852518311701268}, 0.139619360790922},
               {{-0.36960284645415, 0.36960284645415, -0.852518311701268}, 0.139619360790922},
               {{0.36960284645415, -0.36960284645415, 0.852518311701268}, 0.139619360790922},
               {{0.36960284645415, -0.36960284645415, -0.852518311701268}, 0.139619360790922},
               {{0.36960284645415, 0.36960284645415, 0.852518311701268}, 0.139619360790922},
               {{0.36960284645415, 0.36960284645415, -0.852518311701268}, 0.139619360790922},
               {{-0.36960284645415, -0.852518311701268, 0.36960284645415}, 0.139619360790922},
               {{-0.36960284645415, 0.852518311701268, 0.36960284645415}, 0.139619360790922},
               {{-0.36960284645415, -0.852518311701268, -0.36960284645415}, 0.139619360790922},
               {{-0.36960284645415, 0.852518311701268, -0.36960284645415}, 0.139619360790922},
               {{0.36960284645415, -0.852518311701268, 0.36960284645415}, 0.139619360790922},
               {{0.36960284645415, 0.852518311701268, 0.36960284645415}, 0.139619360790922},
               {{0.36960284645415, -0.852518311701268, -0.36960284645415}, 0.139619360790922},
               {{0.36960284645415, 0.852518311701268, -0.36960284645415}, 0.139619360790922},
               {{-0.852518311701268, -0.36960284645415, 0.36960284645415}, 0.139619360790922},
               {{0.852518311701268, -0.36960284645415, 0.36960284645415}, 0.139619360790922},
               {{-0.852518311701268, -0.36960284645415, -0.36960284645415}, 0.139619360790922},
               {{0.852518311701268, -0.36960284645415, -0.36960284645415}, 0.139619360790922},
               {{-0.852518311701268, 0.36960284645415, 0.36960284645415}, 0.139619360790922},
               {{0.852518311701268, 0.36960284645415, 0.36960284645415}, 0.139619360790922},
               {{-0.852518311701268, 0.36960284645415, -0.36960284645415}, 0.139619360790922},
               {{0.852518311701268, 0.36960284645415, -0.36960284645415}, 0.139619360790922},
               {{-0.694354006602667, -0.694354006602666, 0.189063552885395}, 0.149244516869068},
               {{-0.694354006602667, -0.694354006602666, -0.189063552885395}, 0.149244516869068},
               {{-0.694354006602666, 0.694354006602666, 0.189063552885395}, 0.149244516869068},
               {{-0.694354006602666, 0.694354006602666, -0.189063552885395}, 0.149244516869068},
               {{0.694354006602666, -0.694354006602667, 0.189063552885395}, 0.149244516869068},
               {{0.694354006602666, -0.694354006602667, -0.189063552885395}, 0.149244516869068},
               {{0.694354006602666, 0.694354006602666, 0.189063552885395}, 0.149244516869068},
               {{0.694354006602666, 0.694354006602666, -0.189063552885395}, 0.149244516869068},
               {{-0.694354006602666, -0.189063552885395, 0.694354006602666}, 0.149244516869068},
               {{-0.694354006602666, 0.189063552885395, 0.694354006602666}, 0.149244516869068},
               {{-0.694354006602666, -0.189063552885395, -0.694354006602667}, 0.149244516869068},
               {{-0.694354006602666, 0.189063552885395, -0.694354006602667}, 0.149244516869068},
               {{0.694354006602666, -0.189063552885395, 0.694354006602666}, 0.149244516869068},
               {{0.694354006602667, 0.189063552885395, 0.694354006602666}, 0.149244516869068},
               {{0.694354006602666, -0.189063552885395, -0.694354006602667}, 0.149244516869068},
               {{0.694354006602666, 0.189063552885395, -0.694354006602667}, 0.149244516869068},
               {{-0.189063552885395, -0.694354006602666, 0.694354006602666}, 0.149244516869068},
               {{0.189063552885395, -0.694354006602666, 0.694354006602666}, 0.149244516869068},
               {{-0.189063552885395, -0.694354006602666, -0.694354006602667}, 0.149244516869068},
               {{0.189063552885395, -0.694354006602666, -0.694354006602667}, 0.149244516869068},
               {{-0.189063552885395, 0.694354006602666, 0.694354006602666}, 0.149244516869068},
               {{0.189063552885395, 0.694354006602666, 0.694354006602666}, 0.149244516869068},
               {{-0.189063552885395, 0.694354006602666, -0.694354006602667}, 0.149244516869068},
               {{0.189063552885395, 0.694354006602666, -0.694354006602667}, 0.149244516869068},
               {{-0.374243039090341, -0.927330657151172, 6.12323399573677e-17}, 0.148437786692979},
               {{-0.374243039090341, 0.927330657151172, 6.12323399573677e-17}, 0.148437786692979},
               {{0.374243039090341, -0.927330657151173, 6.12323399573677e-17}, 0.148437786692979},
               {{0.374243039090341, 0.927330657151172, 6.12323399573677e-17}, 0.148437786692979},
               {{-0.927330657151173, -0.374243039090341, 6.12323399573677e-17}, 0.148437786692979},
               {{-0.927330657151172, 0.374243039090341, 6.12323399573677e-17}, 0.148437786692979},
               {{0.927330657151172, -0.374243039090341, 6.12323399573677e-17}, 0.148437786692979},
               {{0.927330657151172, 0.374243039090341, 6.12323399573677e-17}, 0.148437786692979},
               {{-0.374243039090341, 4.58315539925164e-17, 0.927330657151172}, 0.148437786692979},
               {{-0.374243039090341, 4.58315539925164e-17, -0.927330657151172}, 0.148437786692979},
               {{0.374243039090341, -9.16631079850328e-17, 0.927330657151172}, 0.148437786692979},
               {{0.374243039090341, -9.16631079850328e-17, -0.927330657151172}, 0.148437786692979},
               {{-0.927330657151172, 1.13565252103139e-16, 0.374243039090341}, 0.148437786692979},
               {{-0.927330657151172, 1.13565252103139e-16, -0.374243039090341}, 0.148437786692979},
               {{0.927330657151172, -2.27130504206279e-16, 0.374243039090341}, 0.148437786692979},
               {{0.927330657151172, -2.27130504206279e-16, -0.374243039090341}, 0.148437786692979},
               {{-6.87473309887746e-17, -0.374243039090341, 0.927330657151172}, 0.148437786692979},
               {{-6.87473309887746e-17, -0.374243039090341, -0.927330657151172}, 0.148437786692979},
               {{2.29157769962582e-17, 0.374243039090341, 0.927330657151172}, 0.148437786692979},
               {{2.29157769962582e-17, 0.374243039090341, -0.927330657151172}, 0.148437786692979},
               {{-1.70347878154709e-16, -0.927330657151172, 0.374243039090341}, 0.148437786692979},
               {{-1.70347878154709e-16, -0.927330657151172, -0.374243039090341}, 0.148437786692979},
               {{5.67826260515697e-17, 0.927330657151172, 0.374243039090341}, 0.148437786692979},
               {{5.67826260515697e-17, 0.927330657151172, -0.374243039090341}, 0.148437786692979}};
}


} // namespace Dune::XT::Data
