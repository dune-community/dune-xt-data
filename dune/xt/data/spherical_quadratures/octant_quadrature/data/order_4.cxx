// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   René Fritze    (2018)
//   Tobias Leibner (2018 - 2019)

#include "../octant_quadrature_data.hh"

namespace Dune {
namespace XT {
namespace Data {


template <>
std::vector<std::vector<std::vector<double>>> OctantQuadratureData<4>::get()
{
  return {{{0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462,
            0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154},
           {0.076158, 0.076158, 0.076158, 0.076158, 0.36818, 0.36818, 0.36818, 0.36818, 0.7854, 0.7854,
            0.7854,   0.7854,   1.2026,   1.2026,   1.2026,  1.2026,  1.4946,  1.4946,  1.4946, 1.4946},
           {0.0026768, 0.02558, 0.065968,  0.097095, 0.0052446, 0.05012, 0.12925,   0.19024, 0.0061343, 0.058622,
            0.15118,   0.22251, 0.0052446, 0.05012,  0.12925,   0.19024, 0.0026768, 0.02558, 0.065968,  0.097095}},
          {{0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462,
            0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154},
           {1.647,  1.647,  1.647,  1.647,  1.939,  1.939,  1.939,  1.939,  2.3562, 2.3562,
            2.3562, 2.3562, 2.7734, 2.7734, 2.7734, 2.7734, 3.0654, 3.0654, 3.0654, 3.0654},
           {0.0026768, 0.02558, 0.065968,  0.097095, 0.0052446, 0.05012, 0.12925,   0.19024, 0.0061343, 0.058622,
            0.15118,   0.22251, 0.0052446, 0.05012,  0.12925,   0.19024, 0.0026768, 0.02558, 0.065968,  0.097095}},
          {{0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462,
            0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154},
           {3.2178, 3.2178, 3.2178, 3.2178, 3.5098, 3.5098, 3.5098, 3.5098, 3.927,  3.927,
            3.927,  3.927,  4.3442, 4.3442, 4.3442, 4.3442, 4.6362, 4.6362, 4.6362, 4.6362},
           {0.0026768, 0.02558, 0.065968,  0.097095, 0.0052446, 0.05012, 0.12925,   0.19024, 0.0061343, 0.058622,
            0.15118,   0.22251, 0.0052446, 0.05012,  0.12925,   0.19024, 0.0026768, 0.02558, 0.065968,  0.097095}},
          {{0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462,
            0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154},
           {4.7885, 4.7885, 4.7885, 4.7885, 5.0806, 5.0806, 5.0806, 5.0806, 5.4978, 5.4978,
            5.4978, 5.4978, 5.915,  5.915,  5.915,  5.915,  6.207,  6.207,  6.207,  6.207},
           {0.0026768, 0.02558, 0.065968,  0.097095, 0.0052446, 0.05012, 0.12925,   0.19024, 0.0061343, 0.058622,
            0.15118,   0.22251, 0.0052446, 0.05012,  0.12925,   0.19024, 0.0026768, 0.02558, 0.065968,  0.097095}},
          {{-0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462,
            -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154},
           {0.076158, 0.076158, 0.076158, 0.076158, 0.36818, 0.36818, 0.36818, 0.36818, 0.7854, 0.7854,
            0.7854,   0.7854,   1.2026,   1.2026,   1.2026,  1.2026,  1.4946,  1.4946,  1.4946, 1.4946},
           {0.0026768, 0.02558, 0.065968,  0.097095, 0.0052446, 0.05012, 0.12925,   0.19024, 0.0061343, 0.058622,
            0.15118,   0.22251, 0.0052446, 0.05012,  0.12925,   0.19024, 0.0026768, 0.02558, 0.065968,  0.097095}},
          {{-0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462,
            -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154},
           {1.647,  1.647,  1.647,  1.647,  1.939,  1.939,  1.939,  1.939,  2.3562, 2.3562,
            2.3562, 2.3562, 2.7734, 2.7734, 2.7734, 2.7734, 3.0654, 3.0654, 3.0654, 3.0654},
           {0.0026768, 0.02558, 0.065968,  0.097095, 0.0052446, 0.05012, 0.12925,   0.19024, 0.0061343, 0.058622,
            0.15118,   0.22251, 0.0052446, 0.05012,  0.12925,   0.19024, 0.0026768, 0.02558, 0.065968,  0.097095}},
          {{-0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462,
            -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154},
           {3.2178, 3.2178, 3.2178, 3.2178, 3.5098, 3.5098, 3.5098, 3.5098, 3.927,  3.927,
            3.927,  3.927,  4.3442, 4.3442, 4.3442, 4.3442, 4.6362, 4.6362, 4.6362, 4.6362},
           {0.0026768, 0.02558, 0.065968,  0.097095, 0.0052446, 0.05012, 0.12925,   0.19024, 0.0061343, 0.058622,
            0.15118,   0.22251, 0.0052446, 0.05012,  0.12925,   0.19024, 0.0026768, 0.02558, 0.065968,  0.097095}},
          {{-0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462,
            -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154},
           {4.7885, 4.7885, 4.7885, 4.7885, 5.0806, 5.0806, 5.0806, 5.0806, 5.4978, 5.4978,
            5.4978, 5.4978, 5.915,  5.915,  5.915,  5.915,  6.207,  6.207,  6.207,  6.207},
           {0.0026768, 0.02558, 0.065968,  0.097095, 0.0052446, 0.05012, 0.12925,   0.19024, 0.0061343, 0.058622,
            0.15118,   0.22251, 0.0052446, 0.05012,  0.12925,   0.19024, 0.0026768, 0.02558, 0.065968,  0.097095}}};
}


} // namespace Data
} // namespace XT
} // namespace Dune
