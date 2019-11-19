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

#ifndef DUNE_GDT_HYPERBOLIC_PROBLEMS_MOMENTMODELS_GAUSSLOBATTO_HH
#define DUNE_GDT_HYPERBOLIC_PROBLEMS_MOMENTMODELS_GAUSSLOBATTO_HH

#include <numeric>
#include <vector>

#include <dune/geometry/quadraturerules.hh>

#include <dune/xt/data/quadratures/gausslobatto/gausslobatto_data.hh>

namespace Dune {
namespace XT {
namespace Data {


template <class FieldType>
class GaussLobattoQuadrature
{
public:
  static size_t max_order()
  {
    return 197;
  }

  static Dune::QuadratureRule<FieldType, 1> get(const size_t requested_order)
  {
    size_t order = requested_order;
    if (requested_order > max_order()) {
      std::cerr << "Warning: Requested gauss lobatto quadrature with order " << requested_order
                << " is not available, using highest available order " << max_order() << "." << std::endl;
      order = max_order();
    }
    if (order < 2)
      order = 2;
    const size_t num_quad_points = (order + 4) / 2;
    std::vector<std::vector<double>> data_vector;
    switch (num_quad_points) {
      case 2:
        data_vector = GaussLobattoData<2>::get();
        break;
      case 3:
        data_vector = GaussLobattoData<3>::get();
        break;
      case 4:
        data_vector = GaussLobattoData<4>::get();
        break;
      case 5:
        data_vector = GaussLobattoData<5>::get();
        break;
      case 6:
        data_vector = GaussLobattoData<6>::get();
        break;
      case 7:
        data_vector = GaussLobattoData<7>::get();
        break;
      case 8:
        data_vector = GaussLobattoData<8>::get();
        break;
      case 9:
        data_vector = GaussLobattoData<9>::get();
        break;
      case 10:
        data_vector = GaussLobattoData<10>::get();
        break;
      case 11:
        data_vector = GaussLobattoData<11>::get();
        break;
      case 12:
        data_vector = GaussLobattoData<12>::get();
        break;
      case 13:
        data_vector = GaussLobattoData<13>::get();
        break;
      case 14:
        data_vector = GaussLobattoData<14>::get();
        break;
      case 15:
        data_vector = GaussLobattoData<15>::get();
        break;
      case 16:
        data_vector = GaussLobattoData<16>::get();
        break;
      case 17:
        data_vector = GaussLobattoData<17>::get();
        break;
      case 18:
        data_vector = GaussLobattoData<18>::get();
        break;
      case 19:
        data_vector = GaussLobattoData<19>::get();
        break;
      case 20:
        data_vector = GaussLobattoData<20>::get();
        break;
      case 21:
        data_vector = GaussLobattoData<21>::get();
        break;
      case 22:
        data_vector = GaussLobattoData<22>::get();
        break;
      case 23:
        data_vector = GaussLobattoData<23>::get();
        break;
      case 24:
        data_vector = GaussLobattoData<24>::get();
        break;
      case 25:
        data_vector = GaussLobattoData<25>::get();
        break;
      case 26:
        data_vector = GaussLobattoData<26>::get();
        break;
      case 27:
        data_vector = GaussLobattoData<27>::get();
        break;
      case 28:
        data_vector = GaussLobattoData<28>::get();
        break;
      case 29:
        data_vector = GaussLobattoData<29>::get();
        break;
      case 30:
        data_vector = GaussLobattoData<30>::get();
        break;
      case 31:
        data_vector = GaussLobattoData<31>::get();
        break;
      case 32:
        data_vector = GaussLobattoData<32>::get();
        break;
      case 33:
        data_vector = GaussLobattoData<33>::get();
        break;
      case 34:
        data_vector = GaussLobattoData<34>::get();
        break;
      case 35:
        data_vector = GaussLobattoData<35>::get();
        break;
      case 36:
        data_vector = GaussLobattoData<36>::get();
        break;
      case 37:
        data_vector = GaussLobattoData<37>::get();
        break;
      case 38:
        data_vector = GaussLobattoData<38>::get();
        break;
      case 39:
        data_vector = GaussLobattoData<39>::get();
        break;
      case 40:
        data_vector = GaussLobattoData<40>::get();
        break;
      case 41:
        data_vector = GaussLobattoData<41>::get();
        break;
      case 42:
        data_vector = GaussLobattoData<42>::get();
        break;
      case 43:
        data_vector = GaussLobattoData<43>::get();
        break;
      case 44:
        data_vector = GaussLobattoData<44>::get();
        break;
      case 45:
        data_vector = GaussLobattoData<45>::get();
        break;
      case 46:
        data_vector = GaussLobattoData<46>::get();
        break;
      case 47:
        data_vector = GaussLobattoData<47>::get();
        break;
      case 48:
        data_vector = GaussLobattoData<48>::get();
        break;
      case 49:
        data_vector = GaussLobattoData<49>::get();
        break;
      case 50:
        data_vector = GaussLobattoData<50>::get();
        break;
      case 51:
        data_vector = GaussLobattoData<51>::get();
        break;
      case 52:
        data_vector = GaussLobattoData<52>::get();
        break;
      case 53:
        data_vector = GaussLobattoData<53>::get();
        break;
      case 54:
        data_vector = GaussLobattoData<54>::get();
        break;
      case 55:
        data_vector = GaussLobattoData<55>::get();
        break;
      case 56:
        data_vector = GaussLobattoData<56>::get();
        break;
      case 57:
        data_vector = GaussLobattoData<57>::get();
        break;
      case 58:
        data_vector = GaussLobattoData<58>::get();
        break;
      case 59:
        data_vector = GaussLobattoData<59>::get();
        break;
      case 60:
        data_vector = GaussLobattoData<60>::get();
        break;
      case 61:
        data_vector = GaussLobattoData<61>::get();
        break;
      case 62:
        data_vector = GaussLobattoData<62>::get();
        break;
      case 63:
        data_vector = GaussLobattoData<63>::get();
        break;
      case 64:
        data_vector = GaussLobattoData<64>::get();
        break;
      case 65:
        data_vector = GaussLobattoData<65>::get();
        break;
      case 66:
        data_vector = GaussLobattoData<66>::get();
        break;
      case 67:
        data_vector = GaussLobattoData<67>::get();
        break;
      case 68:
        data_vector = GaussLobattoData<68>::get();
        break;
      case 69:
        data_vector = GaussLobattoData<69>::get();
        break;
      case 70:
        data_vector = GaussLobattoData<70>::get();
        break;
      case 71:
        data_vector = GaussLobattoData<71>::get();
        break;
      case 72:
        data_vector = GaussLobattoData<72>::get();
        break;
      case 73:
        data_vector = GaussLobattoData<73>::get();
        break;
      case 74:
        data_vector = GaussLobattoData<74>::get();
        break;
      case 75:
        data_vector = GaussLobattoData<75>::get();
        break;
      case 76:
        data_vector = GaussLobattoData<76>::get();
        break;
      case 77:
        data_vector = GaussLobattoData<77>::get();
        break;
      case 78:
        data_vector = GaussLobattoData<78>::get();
        break;
      case 79:
        data_vector = GaussLobattoData<79>::get();
        break;
      case 80:
        data_vector = GaussLobattoData<80>::get();
        break;
      case 81:
        data_vector = GaussLobattoData<81>::get();
        break;
      case 82:
        data_vector = GaussLobattoData<82>::get();
        break;
      case 83:
        data_vector = GaussLobattoData<83>::get();
        break;
      case 84:
        data_vector = GaussLobattoData<84>::get();
        break;
      case 85:
        data_vector = GaussLobattoData<85>::get();
        break;
      case 86:
        data_vector = GaussLobattoData<86>::get();
        break;
      case 87:
        data_vector = GaussLobattoData<87>::get();
        break;
      case 88:
        data_vector = GaussLobattoData<88>::get();
        break;
      case 89:
        data_vector = GaussLobattoData<89>::get();
        break;
      case 90:
        data_vector = GaussLobattoData<90>::get();
        break;
      case 91:
        data_vector = GaussLobattoData<91>::get();
        break;
      case 92:
        data_vector = GaussLobattoData<92>::get();
        break;
      case 93:
        data_vector = GaussLobattoData<93>::get();
        break;
      case 94:
        data_vector = GaussLobattoData<94>::get();
        break;
      case 95:
        data_vector = GaussLobattoData<95>::get();
        break;
      case 96:
        data_vector = GaussLobattoData<96>::get();
        break;
      case 97:
        data_vector = GaussLobattoData<97>::get();
        break;
      case 98:
        data_vector = GaussLobattoData<98>::get();
        break;
      case 99:
        data_vector = GaussLobattoData<99>::get();
        break;
      case 100:
        data_vector = GaussLobattoData<100>::get();
        break;
      default:
        DUNE_THROW(NotImplemented, "Requested order is not available!");
    }
    assert(data_vector.size() == num_quad_points);
    Dune::QuadratureRule<FieldType, 1> ret;
    // stored values are for [-1, 1], so convert for [0, 1]
    for (const auto& pair : data_vector)
      ret.emplace_back((pair[0] + 1) / 2, pair[1] / 2);
    return ret;
  }
}; // class GaussLobattoQuadrature


} // namespace Data
} // namespace XT
} // namespace Dune

#endif // DUNE_GDT_HYPERBOLIC_PROBLEMS_MOMENTMODELS_GAUSSLOBATTO_HH
