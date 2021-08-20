// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   René Fritze    (2018)
//   Tobias Leibner (2018 - 2019)

#include "../lebedev_data.hh"

namespace Dune::XT::Data {


template <>
void LebedevData<3>::get(std::vector<std::pair<std::array<double, 3>, double>>& quad_rule)
{
  quad_rule = {{{-1, 1.22464679914735e-16, 6.12323399573677e-17}, 2.0943951023932},
               {{1, -2.44929359829471e-16, 6.12323399573677e-17}, 2.0943951023932},
               {{-1.83697019872103e-16, -1, 6.12323399573677e-17}, 2.0943951023932},
               {{6.12323399573677e-17, 1, 6.12323399573677e-17}, 2.0943951023932},
               {{-0, -0, 1}, 2.0943951023932},
               {{-2.24963967399279e-32, -1.22464679914735e-16, -1}, 2.0943951023932}};
}


} // namespace Dune::XT::Data
