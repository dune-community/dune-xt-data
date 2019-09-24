// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner (2019)

#include <dune/xt/data/test/main.hxx>

#include <dune/common/fvector.hh>

#include <dune/xt/data/quadratures/merged.hh>
#include <dune/xt/data/spherical_quadratures.hh>

// integral of x^2*y^4*z^6 over unit sphere
static const double expected_result = 4. * M_PI / 3003;
static auto integrand = [](const Dune::FieldVector<double, 3> x) {
  return std::pow(x[0], 2) * std::pow(x[1], 4) * std::pow(x[2], 6);
};

GTEST_TEST(SphericalQuadratures, Lebedev)
{
  using namespace Dune::XT::Data;
  const auto lebedev_quad1 = LebedevQuadrature<double>::get(11);
  const auto lebedev_quad2 = LebedevQuadrature<double>::get(12);
  double result1 = 0;
  double result2 = 0;
  for (const auto& quad_point : lebedev_quad1)
    result1 += integrand(quad_point.position()) * quad_point.weight();
  for (const auto& quad_point : lebedev_quad2)
    result2 += integrand(quad_point.position()) * quad_point.weight();
  EXPECT_NEAR(expected_result, result1, 0.00034);
  EXPECT_NEAR(expected_result, result2, 1e-15);
  for (size_t order = 1; order <= LebedevQuadrature<double>::max_order(); ++order) {
    const auto quadrature = LebedevQuadrature<double>::get(order);
    const double summed_weights = std::accumulate(
        quadrature.begin(),
        quadrature.end(),
        0.,
        [](const double& sum, const Dune::QuadraturePoint<double, 3> quad_point) { return sum + quad_point.weight(); });
    EXPECT_NEAR(summed_weights, 4. * M_PI, 1e-11);
    for (const auto& quad_point : quadrature)
      EXPECT_NEAR(quad_point.position().two_norm(), 1., 1e-15);
  }
}

GTEST_TEST(SphericalQuadratures, Octant)
{
  using namespace Dune::XT::Data;
  const auto octant_quads1 = OctantQuadratures<double>::get(11);
  const auto octant_quads2 = OctantQuadratures<double>::get(12);
  double result1 = 0;
  double result2 = 0;
  for (const auto& quad_point : merged_quadrature(octant_quads1))
    result1 += integrand(quad_point.position()) * quad_point.weight();
  for (const auto& quad_point : merged_quadrature(octant_quads2))
    result2 += integrand(quad_point.position()) * quad_point.weight();
  EXPECT_NEAR(expected_result, result1, 2e-7);
  EXPECT_NEAR(expected_result, result2, 6e-8);
  for (size_t order = 1; order <= OctantQuadratures<double>::max_order(); ++order) {
    const auto quadratures = OctantQuadratures<double>::get(order);
    for (size_t ii = 0; ii < 8; ++ii) {
      const double summed_weights =
          std::accumulate(quadratures[ii].begin(),
                          quadratures[ii].end(),
                          0.,
                          [](const double& sum, const Dune::QuadraturePoint<double, 3> quad_point) {
                            return sum + quad_point.weight();
                          });
      EXPECT_NEAR(summed_weights, 0.5 * M_PI, 1.4e-5);
      for (const auto& quad_point : quadratures[ii])
        EXPECT_NEAR(quad_point.position().two_norm(), 1., 1e-15);
    }
  }
}

GTEST_TEST(SphericalQuadratures, Product)
{
  using namespace Dune::XT::Data;
  const auto product_quad1 = SphericalProductQuadrature<double>::get(11);
  const auto product_quad2 = SphericalProductQuadrature<double>::get(20, 30, 3, 2);
  double result1 = 0;
  double result2 = 0;
  for (const auto& quad_point : product_quad1)
    result1 += integrand(quad_point.position()) * quad_point.weight();
  for (const auto& quad_point : product_quad2)
    result2 += integrand(quad_point.position()) * quad_point.weight();
  EXPECT_NEAR(expected_result, result1, 2e-4);
  EXPECT_NEAR(expected_result, result2, 1e-13);
}
