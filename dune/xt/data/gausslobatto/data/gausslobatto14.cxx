// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner (2018)
//
// This file is part of the dune-gdt project:

#include "../gausslobatto_data.hh"

namespace Dune {
namespace XT {
namespace Data {
namespace internal {


template <>
std::vector<std::vector<double>> GaussLobattoData<14>::get()
{
  return {{-1, 0.01098901098901098901099},
          {-0.9599350452672609013551, 0.0668372844976812846341},
          {-0.8678010538303472510002, 0.116586655898711651541},
          {-0.7288685990913261405847, 0.160021851762952142413},
          {-0.5506394029286470553166, 0.1948261493734161186403},
          {-0.342724013342712845044, 0.2191262530097707548712},
          {-0.1163318688837038676588, 0.23161279446845705889},
          {0.1163318688837038676588, 0.2316127944684570588896},
          {0.3427240133427128450439, 0.2191262530097707548712},
          {0.5506394029286470553166, 0.1948261493734161186403},
          {0.7288685990913261405847, 0.160021851762952142413},
          {0.8678010538303472510002, 0.116586655898711651541},
          {0.9599350452672609013551, 0.0668372844976812846341},
          {1, 0.01098901098901098901099}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
