// This file is part of the dune-xt project:
//   https://github.com/dune-community/dune-xt
// Copyright 2009-2018 dune-xt developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   René Fritze    (2018 - 2019)
//   Tobias Leibner (2018)

#ifndef DUNE_XT_DATA_COORDINATES_HH
#define DUNE_XT_DATA_COORDINATES_HH


#include <boost/geometry.hpp>

#include <dune/common/fvector.hh>

namespace Dune::XT::Data {


/** Converts from (x, y, z) to (theta, phi) on the unit sphere s.t.
 * (x, y, z) = (sin(theta) cos(phi), sin(theta) sin(phi), cos(theta))
 * with 0 \leq \theta \leq \pi and 0 \leq \varphi < 2\pi. **/
template <class DomainFieldType>
class CoordinateConverter
{
  using BoostCartesianCoordType =
      typename boost::geometry::model::point<DomainFieldType, 3, typename boost::geometry::cs::cartesian>;
  using BoostSphericalCoordType = typename boost::geometry::model::
      point<DomainFieldType, 2, typename boost::geometry::cs::spherical<boost::geometry::radian>>;

public:
  using CartesianCoordType = FieldVector<DomainFieldType, 3>;
  using SphericalCoordType = FieldVector<DomainFieldType, 2>;

  static SphericalCoordType to_spherical(const CartesianCoordType& x)
  {
    BoostCartesianCoordType x_boost(x[0], x[1], x[2]);
    BoostSphericalCoordType x_spherical_boost;
    boost::geometry::transform(x_boost, x_spherical_boost);
    return SphericalCoordType{boost::geometry::get<1>(x_spherical_boost), boost::geometry::get<0>(x_spherical_boost)};
  }

  static CartesianCoordType to_cartesian(const SphericalCoordType& x_spherical, bool first_is_cosine = false)
  {
    // if first_is_cosine, the first coordinate is not theta but rather cos(theta)
    if (first_is_cosine) {
      const auto& mu = x_spherical[0];
      const auto& phi = x_spherical[1];
      return CartesianCoordType{
          std::sqrt(1 - std::pow(mu, 2)) * std::cos(phi), std::sqrt(1 - std::pow(mu, 2)) * std::sin(phi), mu};
    }
    BoostSphericalCoordType x_spherical_boost(x_spherical[1], x_spherical[0]);
    BoostCartesianCoordType x_boost;
    boost::geometry::transform(x_spherical_boost, x_boost);
    return CartesianCoordType{
        boost::geometry::get<0>(x_boost), boost::geometry::get<1>(x_boost), boost::geometry::get<2>(x_boost)};
  }
};


} // namespace Dune::XT::Data

#endif // DUNE_XT_DATA_COORDINATES_HH
