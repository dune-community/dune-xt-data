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


template<>
void LebedevData<27>::get(std::vector<std::pair<std::array<double, 3>, double>>& quad_rule)
{
    quad_rule = {{{-1, 1.22464679914735e-16, 6.12323399573677e-17}, -0.0165093097556943},
                 {{1, -2.44929359829471e-16, 6.12323399573677e-17}, -0.0165093097556943},
                 {{-1.83697019872103e-16, -1, 6.12323399573677e-17}, -0.0165093097556943},
                 {{6.12323399573677e-17, 1, 6.12323399573677e-17}, -0.0165093097556943},
                 {{-0, -0, 1}, -0.0165093097556943},
                 {{-2.24963967399279e-32, -1.22464679914735e-16, -1}, -0.0165093097556943},
                 {{-1.29893408435324e-16, -0.707106781186547, 0.707106781186548}, -0.0317015438647405},
                 {{-1.29893408435324e-16, -0.707106781186548, -0.707106781186547}, -0.0317015438647405},
                 {{4.32978028117747e-17, 0.707106781186547, 0.707106781186548}, -0.0317015438647405},
                 {{4.32978028117747e-17, 0.707106781186548, -0.707106781186547}, -0.0317015438647405},
                 {{-0.707106781186547, 8.65956056235493e-17, 0.707106781186548}, -0.0317015438647405},
                 {{-0.707106781186548, 8.65956056235493e-17, -0.707106781186547}, -0.0317015438647405},
                 {{0.707106781186547, -1.73191211247099e-16, 0.707106781186548}, -0.0317015438647405},
                 {{0.707106781186548, -1.73191211247099e-16, -0.707106781186547}, -0.0317015438647405},
                 {{-0.707106781186548, -0.707106781186547, 6.12323399573677e-17}, -0.0317015438647405},
                 {{-0.707106781186547, 0.707106781186548, 6.12323399573677e-17}, -0.0317015438647405},
                 {{0.707106781186547, -0.707106781186548, 6.12323399573677e-17}, -0.0317015438647405},
                 {{0.707106781186548, 0.707106781186547, 6.12323399573677e-17}, -0.0317015438647405},
                 {{-0.577350269189626, -0.577350269189626, 0.577350269189626}, 0.0526135575856231},
                 {{-0.577350269189626, -0.577350269189626, -0.577350269189626}, 0.0526135575856231},
                 {{-0.577350269189626, 0.577350269189626, 0.577350269189626}, 0.0526135575856231},
                 {{-0.577350269189626, 0.577350269189626, -0.577350269189626}, 0.0526135575856231},
                 {{0.577350269189626, -0.577350269189626, 0.577350269189626}, 0.0526135575856231},
                 {{0.577350269189626, -0.577350269189626, -0.577350269189626}, 0.0526135575856231},
                 {{0.577350269189626, 0.577350269189626, 0.577350269189626}, 0.0526135575856231},
                 {{0.577350269189626, 0.577350269189626, -0.577350269189626}, 0.0526135575856231},
                 {{-0.703937339158548, -0.703937339158547, 0.0945750764037128}, 0.066792370686747},
                 {{-0.703937339158548, -0.703937339158547, -0.0945750764037129}, 0.066792370686747},
                 {{-0.703937339158547, 0.703937339158548, 0.0945750764037128}, 0.066792370686747},
                 {{-0.703937339158547, 0.703937339158548, -0.0945750764037129}, 0.066792370686747},
                 {{0.703937339158547, -0.703937339158548, 0.0945750764037128}, 0.066792370686747},
                 {{0.703937339158547, -0.703937339158548, -0.0945750764037129}, 0.066792370686747},
                 {{0.703937339158548, 0.703937339158547, 0.0945750764037128}, 0.066792370686747},
                 {{0.703937339158548, 0.703937339158547, -0.0945750764037129}, 0.066792370686747},
                 {{-0.703937339158548, -0.0945750764037129, 0.703937339158548}, 0.066792370686747},
                 {{-0.703937339158548, 0.0945750764037131, 0.703937339158548}, 0.066792370686747},
                 {{-0.703937339158547, -0.0945750764037129, -0.703937339158548}, 0.066792370686747},
                 {{-0.703937339158547, 0.0945750764037131, -0.703937339158548}, 0.066792370686747},
                 {{0.703937339158548, -0.0945750764037128, 0.703937339158548}, 0.066792370686747},
                 {{0.703937339158548, 0.094575076403713, 0.703937339158548}, 0.066792370686747},
                 {{0.703937339158547, -0.0945750764037128, -0.703937339158548}, 0.066792370686747},
                 {{0.703937339158547, 0.094575076403713, -0.703937339158548}, 0.066792370686747},
                 {{-0.0945750764037128, -0.703937339158548, 0.703937339158548}, 0.066792370686747},
                 {{0.0945750764037132, -0.703937339158548, 0.703937339158548}, 0.066792370686747},
                 {{-0.0945750764037128, -0.703937339158548, -0.703937339158548}, 0.066792370686747},
                 {{0.0945750764037131, -0.703937339158547, -0.703937339158548}, 0.066792370686747},
                 {{-0.0945750764037128, 0.703937339158548, 0.703937339158548}, 0.066792370686747},
                 {{0.0945750764037132, 0.703937339158548, 0.703937339158548}, 0.066792370686747},
                 {{-0.0945750764037128, 0.703937339158548, -0.703937339158548}, 0.066792370686747},
                 {{0.0945750764037132, 0.703937339158547, -0.703937339158548}, 0.066792370686747},
                 {{-0.101252624857242, -0.101252624857242, 0.989694807462905}, 0.0508578910395412},
                 {{-0.101252624857242, -0.101252624857242, -0.989694807462905}, 0.0508578910395412},
                 {{-0.101252624857242, 0.101252624857242, 0.989694807462905}, 0.0508578910395412},
                 {{-0.101252624857242, 0.101252624857242, -0.989694807462905}, 0.0508578910395412},
                 {{0.101252624857242, -0.101252624857242, 0.989694807462905}, 0.0508578910395412},
                 {{0.101252624857242, -0.101252624857242, -0.989694807462905}, 0.0508578910395412},
                 {{0.101252624857242, 0.101252624857242, 0.989694807462905}, 0.0508578910395412},
                 {{0.101252624857242, 0.101252624857242, -0.989694807462905}, 0.0508578910395412},
                 {{-0.101252624857242, -0.989694807462906, 0.101252624857241}, 0.0508578910395412},
                 {{-0.101252624857241, 0.989694807462906, 0.101252624857241}, 0.0508578910395412},
                 {{-0.101252624857242, -0.989694807462906, -0.101252624857242}, 0.0508578910395412},
                 {{-0.101252624857241, 0.989694807462906, -0.101252624857242}, 0.0508578910395412},
                 {{0.101252624857241, -0.989694807462906, 0.101252624857241}, 0.0508578910395412},
                 {{0.101252624857242, 0.989694807462906, 0.101252624857241}, 0.0508578910395412},
                 {{0.101252624857241, -0.989694807462906, -0.101252624857242}, 0.0508578910395412},
                 {{0.101252624857242, 0.989694807462906, -0.101252624857242}, 0.0508578910395412},
                 {{-0.989694807462906, -0.101252624857241, 0.101252624857241}, 0.0508578910395412},
                 {{0.989694807462906, -0.101252624857242, 0.101252624857241}, 0.0508578910395412},
                 {{-0.989694807462906, -0.101252624857241, -0.101252624857242}, 0.0508578910395412},
                 {{0.989694807462906, -0.101252624857242, -0.101252624857242}, 0.0508578910395412},
                 {{-0.989694807462906, 0.101252624857242, 0.101252624857241}, 0.0508578910395412},
                 {{0.989694807462906, 0.101252624857241, 0.101252624857241}, 0.0508578910395412},
                 {{-0.989694807462906, 0.101252624857242, -0.101252624857242}, 0.0508578910395412},
                 {{0.989694807462906, 0.101252624857241, -0.101252624857242}, 0.0508578910395412},
                 {{-0.464744872642054, -0.464744872642054, 0.753673939250816}, 0.0516789779131456},
                 {{-0.464744872642054, -0.464744872642054, -0.753673939250816}, 0.0516789779131456},
                 {{-0.464744872642054, 0.464744872642054, 0.753673939250816}, 0.0516789779131456},
                 {{-0.464744872642054, 0.464744872642054, -0.753673939250816}, 0.0516789779131456},
                 {{0.464744872642054, -0.464744872642054, 0.753673939250816}, 0.0516789779131456},
                 {{0.464744872642054, -0.464744872642054, -0.753673939250816}, 0.0516789779131456},
                 {{0.464744872642054, 0.464744872642054, 0.753673939250816}, 0.0516789779131456},
                 {{0.464744872642054, 0.464744872642054, -0.753673939250816}, 0.0516789779131456},
                 {{-0.464744872642054, -0.753673939250815, 0.464744872642054}, 0.0516789779131456},
                 {{-0.464744872642054, 0.753673939250816, 0.464744872642054}, 0.0516789779131456},
                 {{-0.464744872642054, -0.753673939250815, -0.464744872642054}, 0.0516789779131456},
                 {{-0.464744872642054, 0.753673939250816, -0.464744872642054}, 0.0516789779131456},
                 {{0.464744872642054, -0.753673939250816, 0.464744872642054}, 0.0516789779131456},
                 {{0.464744872642054, 0.753673939250816, 0.464744872642054}, 0.0516789779131456},
                 {{0.464744872642054, -0.753673939250815, -0.464744872642054}, 0.0516789779131456},
                 {{0.464744872642054, 0.753673939250816, -0.464744872642054}, 0.0516789779131456},
                 {{-0.753673939250816, -0.464744872642054, 0.464744872642054}, 0.0516789779131456},
                 {{0.753673939250815, -0.464744872642054, 0.464744872642054}, 0.0516789779131456},
                 {{-0.753673939250815, -0.464744872642054, -0.464744872642054}, 0.0516789779131456},
                 {{0.753673939250815, -0.464744872642054, -0.464744872642054}, 0.0516789779131456},
                 {{-0.753673939250815, 0.464744872642054, 0.464744872642054}, 0.0516789779131456},
                 {{0.753673939250816, 0.464744872642054, 0.464744872642054}, 0.0516789779131456},
                 {{-0.753673939250815, 0.464744872642054, -0.464744872642054}, 0.0516789779131456},
                 {{0.753673939250816, 0.464744872642054, -0.464744872642054}, 0.0516789779131456},
                 {{-0.327742065497163, -0.327742065497163, 0.886098344997499}, 0.0451834524257651},
                 {{-0.327742065497163, -0.327742065497163, -0.886098344997499}, 0.0451834524257651},
                 {{-0.327742065497163, 0.327742065497163, 0.886098344997499}, 0.0451834524257651},
                 {{-0.327742065497163, 0.327742065497163, -0.886098344997499}, 0.0451834524257651},
                 {{0.327742065497163, -0.327742065497163, 0.886098344997499}, 0.0451834524257651},
                 {{0.327742065497163, -0.327742065497163, -0.886098344997499}, 0.0451834524257651},
                 {{0.327742065497163, 0.327742065497163, 0.886098344997499}, 0.0451834524257651},
                 {{0.327742065497163, 0.327742065497163, -0.886098344997499}, 0.0451834524257651},
                 {{-0.327742065497164, -0.886098344997499, 0.327742065497163}, 0.0451834524257651},
                 {{-0.327742065497163, 0.886098344997499, 0.327742065497163}, 0.0451834524257651},
                 {{-0.327742065497164, -0.886098344997499, -0.327742065497163}, 0.0451834524257651},
                 {{-0.327742065497163, 0.886098344997499, -0.327742065497163}, 0.0451834524257651},
                 {{0.327742065497163, -0.886098344997499, 0.327742065497163}, 0.0451834524257651},
                 {{0.327742065497163, 0.886098344997499, 0.327742065497163}, 0.0451834524257651},
                 {{0.327742065497163, -0.886098344997499, -0.327742065497163}, 0.0451834524257651},
                 {{0.327742065497163, 0.886098344997499, -0.327742065497163}, 0.0451834524257651},
                 {{-0.886098344997499, -0.327742065497163, 0.327742065497163}, 0.0451834524257651},
                 {{0.886098344997499, -0.327742065497164, 0.327742065497163}, 0.0451834524257651},
                 {{-0.886098344997499, -0.327742065497163, -0.327742065497163}, 0.0451834524257651},
                 {{0.886098344997499, -0.327742065497164, -0.327742065497163}, 0.0451834524257651},
                 {{-0.886098344997499, 0.327742065497163, 0.327742065497163}, 0.0451834524257651},
                 {{0.886098344997499, 0.327742065497163, 0.327742065497163}, 0.0451834524257651},
                 {{-0.886098344997499, 0.327742065497163, -0.327742065497163}, 0.0451834524257651},
                 {{0.886098344997499, 0.327742065497163, -0.327742065497163}, 0.0451834524257651},
                 {{-0.662033866369998, -0.662033866369997, 0.351315128564633}, 0.0534841239454376},
                 {{-0.662033866369998, -0.662033866369997, -0.351315128564634}, 0.0534841239454376},
                 {{-0.662033866369997, 0.662033866369998, 0.351315128564633}, 0.0534841239454376},
                 {{-0.662033866369997, 0.662033866369997, -0.351315128564634}, 0.0534841239454376},
                 {{0.662033866369997, -0.662033866369998, 0.351315128564633}, 0.0534841239454376},
                 {{0.662033866369997, -0.662033866369998, -0.351315128564634}, 0.0534841239454376},
                 {{0.662033866369998, 0.662033866369997, 0.351315128564633}, 0.0534841239454376},
                 {{0.662033866369997, 0.662033866369997, -0.351315128564634}, 0.0534841239454376},
                 {{-0.662033866369998, -0.351315128564633, 0.662033866369997}, 0.0534841239454376},
                 {{-0.662033866369998, 0.351315128564633, 0.662033866369997}, 0.0534841239454376},
                 {{-0.662033866369997, -0.351315128564633, -0.662033866369998}, 0.0534841239454376},
                 {{-0.662033866369997, 0.351315128564633, -0.662033866369998}, 0.0534841239454376},
                 {{0.662033866369997, -0.351315128564633, 0.662033866369997}, 0.0534841239454376},
                 {{0.662033866369998, 0.351315128564633, 0.662033866369997}, 0.0534841239454376},
                 {{0.662033866369997, -0.351315128564633, -0.662033866369998}, 0.0534841239454376},
                 {{0.662033866369997, 0.351315128564633, -0.662033866369998}, 0.0534841239454376},
                 {{-0.351315128564633, -0.662033866369998, 0.662033866369997}, 0.0534841239454376},
                 {{0.351315128564634, -0.662033866369997, 0.662033866369997}, 0.0534841239454376},
                 {{-0.351315128564633, -0.662033866369997, -0.662033866369998}, 0.0534841239454376},
                 {{0.351315128564634, -0.662033866369997, -0.662033866369998}, 0.0534841239454376},
                 {{-0.351315128564633, 0.662033866369998, 0.662033866369997}, 0.0534841239454376},
                 {{0.351315128564634, 0.662033866369997, 0.662033866369997}, 0.0534841239454376},
                 {{-0.351315128564633, 0.662033866369997, -0.662033866369998}, 0.0534841239454376},
                 {{0.351315128564633, 0.662033866369997, -0.662033866369998}, 0.0534841239454376},
                 {{-0.85065080835204, -0.525731112119133, 6.12323399573677e-17}, 0.0531505037604124},
                 {{-0.85065080835204, 0.525731112119134, 6.12323399573677e-17}, 0.0531505037604124},
                 {{0.85065080835204, -0.525731112119133, 6.12323399573677e-17}, 0.0531505037604124},
                 {{0.85065080835204, 0.525731112119134, 6.12323399573677e-17}, 0.0531505037604124},
                 {{-0.525731112119133, -0.85065080835204, 6.12323399573677e-17}, 0.0531505037604124},
                 {{-0.525731112119133, 0.85065080835204, 6.12323399573677e-17}, 0.0531505037604124},
                 {{0.525731112119134, -0.85065080835204, 6.12323399573677e-17}, 0.0531505037604124},
                 {{0.525731112119134, 0.85065080835204, 6.12323399573677e-17}, 0.0531505037604124},
                 {{-0.85065080835204, 1.04174678964043e-16, 0.525731112119134}, 0.0531505037604124},
                 {{-0.85065080835204, 1.04174678964043e-16, -0.525731112119134}, 0.0531505037604124},
                 {{0.85065080835204, -2.08349357928087e-16, 0.525731112119134}, 0.0531505037604124},
                 {{0.85065080835204, -2.08349357928087e-16, -0.525731112119134}, 0.0531505037604124},
                 {{-0.525731112119134, 6.43834923668875e-17, 0.85065080835204}, 0.0531505037604124},
                 {{-0.525731112119134, 6.43834923668875e-17, -0.85065080835204}, 0.0531505037604124},
                 {{0.525731112119134, -1.28766984733775e-16, 0.85065080835204}, 0.0531505037604124},
                 {{0.525731112119134, -1.28766984733775e-16, -0.85065080835204}, 0.0531505037604124},
                 {{-1.56262018446065e-16, -0.85065080835204, 0.525731112119134}, 0.0531505037604124},
                 {{-1.56262018446065e-16, -0.85065080835204, -0.525731112119134}, 0.0531505037604124},
                 {{5.20873394820217e-17, 0.85065080835204, 0.525731112119134}, 0.0531505037604124},
                 {{5.20873394820217e-17, 0.85065080835204, -0.525731112119134}, 0.0531505037604124},
                 {{-9.65752385503313e-17, -0.525731112119134, 0.85065080835204}, 0.0531505037604124},
                 {{-9.65752385503313e-17, -0.525731112119134, -0.85065080835204}, 0.0531505037604124},
                 {{3.21917461834438e-17, 0.525731112119134, 0.85065080835204}, 0.0531505037604124},
                 {{3.21917461834438e-17, 0.525731112119134, -0.85065080835204}, 0.0531505037604124},
                 {{-0.32334845426929, -0.11531120110097, 0.939227929749916}, 0.0512822806065747},
                 {{-0.32334845426929, -0.11531120110097, -0.939227929749916}, 0.0512822806065747},
                 {{-0.32334845426929, 0.11531120110097, 0.939227929749916}, 0.0512822806065747},
                 {{-0.32334845426929, 0.11531120110097, -0.939227929749916}, 0.0512822806065747},
                 {{0.32334845426929, -0.11531120110097, 0.939227929749916}, 0.0512822806065747},
                 {{0.32334845426929, -0.11531120110097, -0.939227929749916}, 0.0512822806065747},
                 {{0.32334845426929, 0.11531120110097, 0.939227929749916}, 0.0512822806065747},
                 {{0.32334845426929, 0.11531120110097, -0.939227929749916}, 0.0512822806065747},
                 {{-0.32334845426929, -0.939227929749916, 0.11531120110097}, 0.0512822806065747},
                 {{-0.32334845426929, -0.939227929749916, -0.11531120110097}, 0.0512822806065747},
                 {{-0.32334845426929, 0.939227929749916, 0.11531120110097}, 0.0512822806065747},
                 {{-0.32334845426929, 0.939227929749916, -0.11531120110097}, 0.0512822806065747},
                 {{0.323348454269289, -0.939227929749916, 0.11531120110097}, 0.0512822806065747},
                 {{0.323348454269289, -0.939227929749916, -0.11531120110097}, 0.0512822806065747},
                 {{0.32334845426929, 0.939227929749916, 0.11531120110097}, 0.0512822806065747},
                 {{0.32334845426929, 0.939227929749916, -0.11531120110097}, 0.0512822806065747},
                 {{-0.11531120110097, -0.32334845426929, 0.939227929749916}, 0.0512822806065747},
                 {{-0.11531120110097, -0.32334845426929, -0.939227929749916}, 0.0512822806065747},
                 {{-0.11531120110097, 0.32334845426929, 0.939227929749916}, 0.0512822806065747},
                 {{-0.11531120110097, 0.32334845426929, -0.939227929749916}, 0.0512822806065747},
                 {{0.11531120110097, -0.32334845426929, 0.939227929749916}, 0.0512822806065747},
                 {{0.11531120110097, -0.32334845426929, -0.939227929749916}, 0.0512822806065747},
                 {{0.11531120110097, 0.32334845426929, 0.939227929749916}, 0.0512822806065747},
                 {{0.11531120110097, 0.32334845426929, -0.939227929749916}, 0.0512822806065747},
                 {{-0.11531120110097, -0.939227929749916, 0.32334845426929}, 0.0512822806065747},
                 {{-0.11531120110097, -0.939227929749916, -0.32334845426929}, 0.0512822806065747},
                 {{-0.11531120110097, 0.939227929749916, 0.32334845426929}, 0.0512822806065747},
                 {{-0.11531120110097, 0.939227929749916, -0.32334845426929}, 0.0512822806065747},
                 {{0.11531120110097, -0.939227929749916, 0.32334845426929}, 0.0512822806065747},
                 {{0.11531120110097, -0.939227929749916, -0.32334845426929}, 0.0512822806065747},
                 {{0.11531120110097, 0.939227929749916, 0.32334845426929}, 0.0512822806065747},
                 {{0.11531120110097, 0.939227929749916, -0.32334845426929}, 0.0512822806065747},
                 {{-0.939227929749916, -0.32334845426929, 0.11531120110097}, 0.0512822806065747},
                 {{-0.939227929749916, -0.32334845426929, -0.11531120110097}, 0.0512822806065747},
                 {{-0.939227929749916, 0.32334845426929, 0.11531120110097}, 0.0512822806065747},
                 {{-0.939227929749916, 0.32334845426929, -0.11531120110097}, 0.0512822806065747},
                 {{0.939227929749916, -0.32334845426929, 0.11531120110097}, 0.0512822806065747},
                 {{0.939227929749916, -0.32334845426929, -0.11531120110097}, 0.0512822806065747},
                 {{0.939227929749916, 0.32334845426929, 0.11531120110097}, 0.0512822806065747},
                 {{0.939227929749916, 0.32334845426929, -0.11531120110097}, 0.0512822806065747},
                 {{-0.939227929749916, -0.11531120110097, 0.32334845426929}, 0.0512822806065747},
                 {{-0.939227929749916, -0.11531120110097, -0.32334845426929}, 0.0512822806065747},
                 {{-0.939227929749916, 0.11531120110097, 0.32334845426929}, 0.0512822806065747},
                 {{-0.939227929749916, 0.11531120110097, -0.32334845426929}, 0.0512822806065747},
                 {{0.939227929749916, -0.11531120110097, 0.32334845426929}, 0.0512822806065747},
                 {{0.939227929749916, -0.11531120110097, -0.32334845426929}, 0.0512822806065747},
                 {{0.939227929749916, 0.11531120110097, 0.32334845426929}, 0.0512822806065747},
                 {{0.939227929749916, 0.11531120110097, -0.32334845426929}, 0.0512822806065747},
                 {{-0.23147901587126, -0.524493924092236, 0.81934338881912}, 0.0511635707284335},
                 {{-0.23147901587126, -0.524493924092236, -0.81934338881912}, 0.0511635707284335},
                 {{-0.23147901587126, 0.524493924092236, 0.81934338881912}, 0.0511635707284335},
                 {{-0.23147901587126, 0.524493924092236, -0.81934338881912}, 0.0511635707284335},
                 {{0.23147901587126, -0.524493924092237, 0.81934338881912}, 0.0511635707284335},
                 {{0.23147901587126, -0.524493924092237, -0.81934338881912}, 0.0511635707284335},
                 {{0.23147901587126, 0.524493924092236, 0.81934338881912}, 0.0511635707284335},
                 {{0.23147901587126, 0.524493924092236, -0.81934338881912}, 0.0511635707284335},
                 {{-0.23147901587126, -0.81934338881912, 0.524493924092236}, 0.0511635707284335},
                 {{-0.23147901587126, -0.81934338881912, -0.524493924092236}, 0.0511635707284335},
                 {{-0.23147901587126, 0.81934338881912, 0.524493924092236}, 0.0511635707284335},
                 {{-0.23147901587126, 0.81934338881912, -0.524493924092236}, 0.0511635707284335},
                 {{0.23147901587126, -0.81934338881912, 0.524493924092236}, 0.0511635707284335},
                 {{0.23147901587126, -0.81934338881912, -0.524493924092236}, 0.0511635707284335},
                 {{0.23147901587126, 0.81934338881912, 0.524493924092236}, 0.0511635707284335},
                 {{0.23147901587126, 0.81934338881912, -0.524493924092236}, 0.0511635707284335},
                 {{-0.524493924092237, -0.23147901587126, 0.81934338881912}, 0.0511635707284335},
                 {{-0.524493924092237, -0.23147901587126, -0.81934338881912}, 0.0511635707284335},
                 {{-0.524493924092236, 0.23147901587126, 0.81934338881912}, 0.0511635707284335},
                 {{-0.524493924092236, 0.23147901587126, -0.81934338881912}, 0.0511635707284335},
                 {{0.524493924092236, -0.23147901587126, 0.81934338881912}, 0.0511635707284335},
                 {{0.524493924092236, -0.23147901587126, -0.81934338881912}, 0.0511635707284335},
                 {{0.524493924092237, 0.23147901587126, 0.81934338881912}, 0.0511635707284335},
                 {{0.524493924092237, 0.23147901587126, -0.81934338881912}, 0.0511635707284335},
                 {{-0.524493924092236, -0.81934338881912, 0.23147901587126}, 0.0511635707284335},
                 {{-0.524493924092236, -0.81934338881912, -0.23147901587126}, 0.0511635707284335},
                 {{-0.524493924092236, 0.81934338881912, 0.23147901587126}, 0.0511635707284335},
                 {{-0.524493924092236, 0.81934338881912, -0.23147901587126}, 0.0511635707284335},
                 {{0.524493924092236, -0.81934338881912, 0.23147901587126}, 0.0511635707284335},
                 {{0.524493924092236, -0.81934338881912, -0.23147901587126}, 0.0511635707284335},
                 {{0.524493924092236, 0.81934338881912, 0.23147901587126}, 0.0511635707284335},
                 {{0.524493924092236, 0.81934338881912, -0.23147901587126}, 0.0511635707284335},
                 {{-0.81934338881912, -0.23147901587126, 0.524493924092236}, 0.0511635707284335},
                 {{-0.81934338881912, -0.23147901587126, -0.524493924092236}, 0.0511635707284335},
                 {{-0.81934338881912, 0.23147901587126, 0.524493924092236}, 0.0511635707284335},
                 {{-0.81934338881912, 0.23147901587126, -0.524493924092236}, 0.0511635707284335},
                 {{0.81934338881912, -0.23147901587126, 0.524493924092236}, 0.0511635707284335},
                 {{0.81934338881912, -0.23147901587126, -0.524493924092236}, 0.0511635707284335},
                 {{0.81934338881912, 0.23147901587126, 0.524493924092236}, 0.0511635707284335},
                 {{0.81934338881912, 0.23147901587126, -0.524493924092236}, 0.0511635707284335},
                 {{-0.81934338881912, -0.524493924092237, 0.23147901587126}, 0.0511635707284335},
                 {{-0.81934338881912, -0.524493924092237, -0.23147901587126}, 0.0511635707284335},
                 {{-0.81934338881912, 0.524493924092237, 0.23147901587126}, 0.0511635707284335},
                 {{-0.81934338881912, 0.524493924092237, -0.23147901587126}, 0.0511635707284335},
                 {{0.819343388819121, -0.524493924092236, 0.23147901587126}, 0.0511635707284335},
                 {{0.819343388819121, -0.524493924092236, -0.23147901587126}, 0.0511635707284335},
                 {{0.819343388819121, 0.524493924092236, 0.23147901587126}, 0.0511635707284335},
                 {{0.819343388819121, 0.524493924092236, -0.23147901587126}, 0.0511635707284335}};
  }


} // namespace internal
} // namespace Problems
} // namespace Hyperbolic
} // namespace GDT
} // namespace Dune