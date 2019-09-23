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

#ifndef DUNE_XT_DATA_SPHERICALQUADRATURES_PRODUCTQUADRATURE_HH
#define DUNE_XT_DATA_SPHERICALQUADRATURES_PRODUCTQUADRATURE_HH

#include <dune/geometry/quadraturerules.hh>

#include <dune/grid/yaspgrid.hh>

#include <dune/xt/data/coordinates.hh>

namespace Dune {
namespace XT {
namespace Data {

template <class FieldType>
class SphericalProductQuadrature
{
public:
  using QuadratureType = Dune::QuadratureRule<FieldType, 3>;

  // use product quadrature for phi and theta to get quadrature on sphere
  static QuadratureType
  get(const size_t order_theta, size_t order_phi = 0, const size_t theta_grid_size = 1, const size_t phi_grid_size = 1)
  {
    if (order_theta <= 0)
      DUNE_THROW(Dune::NotImplemented, "order_theta cannot be 0 or negative");
    if (order_phi == 0)
      order_phi = order_theta;
    // create grids for phi and theta
    using GridType = Dune::YaspGrid<1, Dune::EquidistantOffsetCoordinates<FieldType, 1>>;
    GridType theta_grid({0}, {M_PI}, {static_cast<int>(theta_grid_size)}, std::bitset<1>{});
    GridType phi_grid({0}, {2 * M_PI}, {static_cast<int>(phi_grid_size)}, std::bitset<1>{});
    Dune::QuadratureRule<FieldType, 2> product_quad_spherical;
    const auto phi_grid_view = phi_grid.leafGridView();
    const auto theta_grid_view = theta_grid.leafGridView();
    for (const auto& phi_entity : Dune::elements(phi_grid_view)) {
      const auto phi_quad_rule =
          Dune::QuadratureRules<FieldType, 1>::rule(phi_entity.geometry().type(), static_cast<int>(order_phi));
      for (const auto& theta_entity : Dune::elements(theta_grid_view)) {
        const auto theta_quad_rule =
            Dune::QuadratureRules<FieldType, 1>::rule(theta_entity.geometry().type(), static_cast<int>(order_theta));
        for (const auto& phi_quad_point : phi_quad_rule)
          for (const auto& theta_quad_point : theta_quad_rule)
            product_quad_spherical.push_back(Dune::QuadraturePoint<FieldType, 2>(
                {theta_entity.geometry().global(theta_quad_point.position()),
                 phi_entity.geometry().global(phi_quad_point.position())},
                std::sin(theta_entity.geometry().global(theta_quad_point.position())[0]) * phi_quad_point.weight()
                    * theta_quad_point.weight() * phi_entity.geometry().volume() * theta_entity.geometry().volume()));
      }
    }
    Dune::QuadratureRule<FieldType, 3> product_quad_cartesian;
    for (const auto quad_point : product_quad_spherical)
      product_quad_cartesian.push_back(Dune::QuadraturePoint<FieldType, 3>(
          Dune::XT::Data::CoordinateConverter<FieldType>::to_cartesian(quad_point.position()), quad_point.weight()));
    return product_quad_cartesian;
  }
}; // class SphericalProductQuadrature


} // namespace Data
} // namespace XT
} // namespace Dune

#endif // DUNE_XT_DATA_SPHERICALQUADRATURES_PRODUCTQUADRATURE_HH
