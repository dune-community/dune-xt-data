// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   René Fritze    (2018)
//   Tobias Leibner (2018 - 2019)

#ifndef DUNE_XT_DATA_DUNE_XT_DATA_OCTANT_QUADRATURE_OCTANT_QUADRATURE_DATA_HH
#define DUNE_XT_DATA_DUNE_XT_DATA_OCTANT_QUADRATURE_OCTANT_QUADRATURE_DATA_HH

#include <stddef.h>
#include <array>
#include <utility>
#include <vector>

namespace Dune {
namespace XT {
namespace Data {


template <size_t order>
struct OctantQuadratureData
{
  // This vector contains the quadratures for each octant, in the order
  // ppp, mpp, mmp, pmp, ppm, mpm, mmm, pmm, where e.g. mpp is the octant
  // with negative x values and positive y and z values.
  // Each of the eight second-level vectors consists of three vectors of the
  // same size (number of quadrature points), where the first vector contains
  // the mu values, the second one the phi values and the third one the weights.
  // mu is the cosine of the polar angle, phi is the azimutal angle, i.e. we can
  // get the cartesian coordinates from (mu, phi) as
  // (x, y, z) = (sqrt(1-mu^2) cos(phi), sqrt(1-mu^2) sin(phi), mu)
  static std::vector<std::vector<std::vector<double>>> get();
};


} // namespace Data
} // namespace XT
} // namespace Dune

#endif // DUNE_XT_DATA_DUNE_XT_DATA_OCTANT_QUADRATURE_OCTANT_QUADRATURE_DATA_HH
