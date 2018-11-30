// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner (2018)

#ifndef DUNE_XT_DATA_DUNE_XT_DATA_GAUSSLOBATTO_GAUSSLOBATTO_DATA_HH
#define DUNE_XT_DATA_DUNE_XT_DATA_GAUSSLOBATTO_GAUSSLOBATTO_DATA_HH

#include <array>
#include <utility>
#include <vector>

namespace Dune {
namespace XT {
namespace Data {
namespace internal {


template <size_t numQuadPoints>
struct GaussLobattoData
{
  // This vector contains the pairs (x_i, w_i). The positions x are in [-1, 1] and the weights thus sum up to 2.
  static std::vector<std::vector<double>> get();
};


} // namespace internal
} // namespace Data
} // namespace XT
} // namespace Dune

#endif // DUNE_XT_DATA_DUNE_XT_DATA_GAUSSLOBATTO_GAUSSLOBATTO_DATA_HH
