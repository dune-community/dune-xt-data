// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner (2019)
//
// This file is part of the dune-gdt project:

#ifndef DUNE_XT_DATA_QUADRATURES_FEKETEQUADRATURE_HH
#define DUNE_XT_DATA_QUADRATURES_FEKETEQUADRATURE_HH

#include <vector>

#include <dune/common/fvector.hh>

#include <dune/geometry/quadraturerules.hh>

#include <dune/xt/common/math.hh>

#include <dune/xt/data/quadratures/fekete/fekete.hh>

namespace Dune {
namespace XT {
namespace Data {


// Fekete Quadrature on the reference triangle
template <class FieldType>
class FeketeQuadrature
{
public:
  static Dune::QuadratureRule<FieldType, 2> get(const size_t rule)
  {
    if (rule == 0 || rule > 7)
      DUNE_THROW(NotImplemented,
                 "Only rules 1 to 7 are available! The corresponding orders (number of points) are 10, "
                 "28, 55, 91, 91, 136, 190 and the degrees (polynomial degree up to which the rule is "
                 "exakt) are 3, 6, 9, 12, 12, 15, 18, respectively");

    Dune::QuadratureRule<FieldType, 2> quad_rule;
    std::vector<double> xy, weights;
    get_fekete_rule(static_cast<int>(rule), xy, weights);
    // The weights in the original paper (Taylor, Wingate, Vincent, "An Algorithm for Computing Fekete Points in the
    // Triangle", https://doi.org/10.1137/S0036142998337247) sum up to 2. The TRIANGLE_FEKETE_RULE library divides the
    // weights by 2, so the weights now sum up to 1. We want the weights to sum up to 1/2, the area of the unit
    // triangle, so divide by 2 again.
    for (size_t ii = 0; ii < weights.size(); ++ii)
      quad_rule.emplace_back(QuadraturePoint<FieldType, 2>({xy[2 * ii], xy[2 * ii + 1]}, weights[ii] / 2.));
    return quad_rule;
  }
}; // class FeketeQuadrature


} // namespace Data
} // namespace XT
} // namespace Dune

#endif // DUNE_XT_DATA_QUADRATURES_FEKETEQUADRATURE_HH
