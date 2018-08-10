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
void LebedevData<9>::get(std::vector<std::pair<std::array<double, 3>, double>>& quad_rule)
{
    quad_rule = {{{-1, 1.22464679914735e-16, 6.12323399573677e-17}, 0.11967972013676},
                 {{1, -2.44929359829471e-16, 6.12323399573677e-17}, 0.11967972013676},
                 {{-1.83697019872103e-16, -1, 6.12323399573677e-17}, 0.11967972013676},
                 {{6.12323399573677e-17, 1, 6.12323399573677e-17}, 0.11967972013676},
                 {{-0, -0, 1}, 0.11967972013676},
                 {{-2.24963967399279e-32, -1.22464679914735e-16, -1}, 0.11967972013676},
                 {{-0.577350269189626, -0.577350269189626, 0.577350269189626}, 0.403919055461543},
                 {{-0.577350269189626, -0.577350269189626, -0.577350269189626}, 0.403919055461543},
                 {{-0.577350269189626, 0.577350269189626, 0.577350269189626}, 0.403919055461543},
                 {{-0.577350269189626, 0.577350269189626, -0.577350269189626}, 0.403919055461543},
                 {{0.577350269189626, -0.577350269189626, 0.577350269189626}, 0.403919055461543},
                 {{0.577350269189626, -0.577350269189626, -0.577350269189626}, 0.403919055461543},
                 {{0.577350269189626, 0.577350269189626, 0.577350269189626}, 0.403919055461543},
                 {{0.577350269189626, 0.577350269189626, -0.577350269189626}, 0.403919055461543},
                 {{-0.459700843380983, -0.888073833977115, 6.12323399573677e-17}, 0.359039160410267},
                 {{-0.459700843380983, 0.888073833977115, 6.12323399573677e-17}, 0.359039160410267},
                 {{0.459700843380983, -0.888073833977115, 6.12323399573677e-17}, 0.359039160410267},
                 {{0.459700843380983, 0.888073833977115, 6.12323399573677e-17}, 0.359039160410267},
                 {{-0.888073833977115, -0.459700843380983, 6.12323399573677e-17}, 0.359039160410267},
                 {{-0.888073833977115, 0.459700843380983, 6.12323399573677e-17}, 0.359039160410267},
                 {{0.888073833977115, -0.459700843380983, 6.12323399573677e-17}, 0.359039160410267},
                 {{0.888073833977116, 0.459700843380982, 6.12323399573677e-17}, 0.359039160410267},
                 {{-0.459700843380983, 5.6297116641186e-17, 0.888073833977115}, 0.359039160410267},
                 {{-0.459700843380983, 5.62971166411859e-17, -0.888073833977115}, 0.359039160410267},
                 {{0.459700843380983, -1.12594233282372e-16, 0.888073833977115}, 0.359039160410267},
                 {{0.459700843380983, -1.12594233282372e-16, -0.888073833977115}, 0.359039160410267},
                 {{-0.888073833977115, 1.08757677818659e-16, 0.459700843380983}, 0.359039160410267},
                 {{-0.888073833977115, 1.08757677818659e-16, -0.459700843380983}, 0.359039160410267},
                 {{0.888073833977115, -2.17515355637318e-16, 0.459700843380983}, 0.359039160410267},
                 {{0.888073833977115, -2.17515355637318e-16, -0.459700843380983}, 0.359039160410267},
                 {{-8.44456749617789e-17, -0.459700843380983, 0.888073833977115}, 0.359039160410267},
                 {{-8.44456749617788e-17, -0.459700843380983, -0.888073833977115}, 0.359039160410267},
                 {{2.8148558320593e-17, 0.459700843380983, 0.888073833977115}, 0.359039160410267},
                 {{2.8148558320593e-17, 0.459700843380983, -0.888073833977115}, 0.359039160410267},
                 {{-1.63136516727989e-16, -0.888073833977115, 0.459700843380983}, 0.359039160410267},
                 {{-1.63136516727989e-16, -0.888073833977115, -0.459700843380983}, 0.359039160410267},
                 {{5.43788389093296e-17, 0.888073833977115, 0.459700843380983}, 0.359039160410267},
                 {{5.43788389093296e-17, 0.888073833977115, -0.459700843380983}, 0.359039160410267}};
}


} // namespace internal
} // namespace Problems
} // namespace Hyperbolic
} // namespace GDT
} // namespace Dune
