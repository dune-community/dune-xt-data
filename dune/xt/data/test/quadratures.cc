// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner (2019)

#include <dune/xt/common/test/main.hxx>

#include <dune/common/fvector.hh>

#include <dune/xt/data/quadratures.hh>

static auto integrand1d = [](const double x) { return std::sin(x) * std::cos(x); };
// integral of sin(x)cos(x) over interval [0, 1]
static const double expected_result1d = std::sin(1) * std::sin(1) / 2.;

GTEST_TEST(Quadratures, GaussLobatto)
{
  using namespace Dune::XT::Data;
  const auto gauss_lobatto_quad1 = GaussLobattoQuadrature<double>::get(11);
  const auto gauss_lobatto_quad2 = GaussLobattoQuadrature<double>::get(100);
  double result1 = 0;
  double result2 = 0;
  for (const auto& quad_point : gauss_lobatto_quad1)
    result1 += integrand1d(quad_point.position()) * quad_point.weight();
  for (const auto& quad_point : gauss_lobatto_quad2)
    result2 += integrand1d(quad_point.position()) * quad_point.weight();
  EXPECT_NEAR(expected_result1d, result1, 4e-13);
  EXPECT_NEAR(expected_result1d, result2, 1e-15);
  // GaussLobattoQuadrature is available up to order 31 in dune-geometry
  for (size_t order = 1; order <= GaussLobattoQuadrature<double>::max_order(); ++order) {
    auto quadrature = GaussLobattoQuadrature<double>::get(order);
    if (order <= 31) {
      auto reference_quadrature = Dune::QuadratureRules<double, 1>::rule(
          Dune::GeometryTypes::simplex(1), static_cast<int>(order), Dune::QuadratureType::GaussLobatto);
      std::sort(reference_quadrature.begin(),
                reference_quadrature.end(),
                [](const Dune::QuadraturePoint<double, 1>& a, const Dune::QuadraturePoint<double, 1>& b) {
                  return a.position()[0] < b.position()[0];
                });
      for (size_t ii = 0; ii < quadrature.size(); ++ii) {
        EXPECT_TRUE(Dune::XT::Common::FloatCmp::eq(quadrature[ii].position(), reference_quadrature[ii].position()));
        EXPECT_TRUE(Dune::XT::Common::FloatCmp::eq(quadrature[ii].weight(), reference_quadrature[ii].weight()));
      }
    }
    const double summed_weights = std::accumulate(
        quadrature.begin(),
        quadrature.end(),
        0.,
        [](const double& sum, const Dune::QuadraturePoint<double, 1> quad_point) { return sum + quad_point.weight(); });
    EXPECT_FLOAT_EQ(1., summed_weights);
  }
}

static auto integrand2d = [](const Dune::FieldVector<double, 2>& x) { return std::sin(x[0]) * std::cos(x[1]); };
// integral of sin(x)cos(y) over reference triangle
static const double expected_result2d = (std::sin(1) - std::cos(1)) / 2.;

GTEST_TEST(Quadratures, Fekete)
{
  using namespace Dune::XT::Data;
  const auto fekete_quad1 = FeketeQuadrature<double>::get(1);
  const auto fekete_quad2 = FeketeQuadrature<double>::get(7);
  double result1 = 0;
  double result2 = 0;
  for (const auto& quad_point : fekete_quad1)
    result1 += integrand2d(quad_point.position()) * quad_point.weight();
  for (const auto& quad_point : fekete_quad2)
    result2 += integrand2d(quad_point.position()) * quad_point.weight();
  EXPECT_NEAR(expected_result2d, result1, 2e-5);
  EXPECT_NEAR(expected_result2d, result2, 1.1e-10);
}
