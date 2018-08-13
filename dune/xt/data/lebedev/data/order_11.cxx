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
void LebedevData<11>::get(std::vector<std::pair<std::array<double, 3>, double>>& quad_rule)
{
  quad_rule = {{{-1, 1.22464679914735e-16, 6.12323399573677e-17}, 0.159572960182342},
               {{1, -2.44929359829471e-16, 6.12323399573677e-17}, 0.159572960182342},
               {{-1.83697019872103e-16, -1, 6.12323399573677e-17}, 0.159572960182342},
               {{6.12323399573677e-17, 1, 6.12323399573677e-17}, 0.159572960182342},
               {{-0, -0, 1}, 0.159572960182342},
               {{-2.24963967399279e-32, -1.22464679914735e-16, -1}, 0.159572960182342},
               {{-1.29893408435324e-16, -0.707106781186547, 0.707106781186548}, 0.283685262546377},
               {{-1.29893408435324e-16, -0.707106781186548, -0.707106781186547}, 0.283685262546377},
               {{4.32978028117747e-17, 0.707106781186547, 0.707106781186548}, 0.283685262546377},
               {{4.32978028117747e-17, 0.707106781186548, -0.707106781186547}, 0.283685262546377},
               {{-0.707106781186547, 8.65956056235493e-17, 0.707106781186548}, 0.283685262546377},
               {{-0.707106781186548, 8.65956056235493e-17, -0.707106781186547}, 0.283685262546377},
               {{0.707106781186547, -1.73191211247099e-16, 0.707106781186548}, 0.283685262546377},
               {{0.707106781186548, -1.73191211247099e-16, -0.707106781186547}, 0.283685262546377},
               {{-0.707106781186548, -0.707106781186547, 6.12323399573677e-17}, 0.283685262546377},
               {{-0.707106781186547, 0.707106781186548, 6.12323399573677e-17}, 0.283685262546377},
               {{0.707106781186547, -0.707106781186548, 6.12323399573677e-17}, 0.283685262546377},
               {{0.707106781186548, 0.707106781186547, 6.12323399573677e-17}, 0.283685262546377},
               {{-0.577350269189626, -0.577350269189626, 0.577350269189626}, 0.265071880146639},
               {{-0.577350269189626, -0.577350269189626, -0.577350269189626}, 0.265071880146639},
               {{-0.577350269189626, 0.577350269189626, 0.577350269189626}, 0.265071880146639},
               {{-0.577350269189626, 0.577350269189626, -0.577350269189626}, 0.265071880146639},
               {{0.577350269189626, -0.577350269189626, 0.577350269189626}, 0.265071880146639},
               {{0.577350269189626, -0.577350269189626, -0.577350269189626}, 0.265071880146639},
               {{0.577350269189626, 0.577350269189626, 0.577350269189626}, 0.265071880146639},
               {{0.577350269189626, 0.577350269189626, -0.577350269189626}, 0.265071880146639},
               {{-0.301511344577764, -0.301511344577764, 0.904534033733291}, 0.253505610897313},
               {{-0.301511344577764, -0.301511344577764, -0.904534033733291}, 0.253505610897313},
               {{-0.301511344577764, 0.301511344577764, 0.904534033733291}, 0.253505610897313},
               {{-0.301511344577764, 0.301511344577764, -0.904534033733291}, 0.253505610897313},
               {{0.301511344577763, -0.301511344577764, 0.904534033733291}, 0.253505610897313},
               {{0.301511344577764, -0.301511344577764, -0.904534033733291}, 0.253505610897313},
               {{0.301511344577764, 0.301511344577764, 0.904534033733291}, 0.253505610897313},
               {{0.301511344577764, 0.301511344577764, -0.904534033733291}, 0.253505610897313},
               {{-0.301511344577764, -0.904534033733291, 0.301511344577764}, 0.253505610897313},
               {{-0.301511344577764, 0.904534033733291, 0.301511344577764}, 0.253505610897313},
               {{-0.301511344577764, -0.904534033733291, -0.301511344577764}, 0.253505610897313},
               {{-0.301511344577764, 0.904534033733291, -0.301511344577764}, 0.253505610897313},
               {{0.301511344577763, -0.904534033733291, 0.301511344577764}, 0.253505610897313},
               {{0.301511344577764, 0.904534033733291, 0.301511344577764}, 0.253505610897313},
               {{0.301511344577763, -0.904534033733291, -0.301511344577764}, 0.253505610897313},
               {{0.301511344577764, 0.904534033733291, -0.301511344577764}, 0.253505610897313},
               {{-0.904534033733291, -0.301511344577763, 0.301511344577764}, 0.253505610897313},
               {{0.904534033733291, -0.301511344577764, 0.301511344577764}, 0.253505610897313},
               {{-0.904534033733291, -0.301511344577763, -0.301511344577764}, 0.253505610897313},
               {{0.904534033733291, -0.301511344577764, -0.301511344577764}, 0.253505610897313},
               {{-0.904534033733291, 0.301511344577764, 0.301511344577764}, 0.253505610897313},
               {{0.904534033733291, 0.301511344577763, 0.301511344577764}, 0.253505610897313},
               {{-0.904534033733291, 0.301511344577764, -0.301511344577764}, 0.253505610897313},
               {{0.904534033733291, 0.301511344577763, -0.301511344577764}, 0.253505610897313}};
}


} // namespace internal
} // namespace Problems
} // namespace Hyperbolic
} // namespace GDT
} // namespace Dune
