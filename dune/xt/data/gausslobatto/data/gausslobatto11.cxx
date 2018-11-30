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
std::vector<std::vector<double>> GaussLobattoData<11>::get()
{
  return {{-1, 0.01818181818181818181818},
          {-0.9340014304080591343323, 0.1096122732669948644614},
          {-0.7844834736631444186224, 0.187169881780305204108},
          {-0.565235326996205006471, 0.2480481042640283140401},
          {-0.2957581355869393914319, 0.2868791247790080886792},
          {0, 0.3002175954556906937859},
          {0.2957581355869393914319, 0.286879124779008088679},
          {0.565235326996205006471, 0.2480481042640283140401},
          {0.7844834736631444186224, 0.1871698817803052041081},
          {0.9340014304080591343323, 0.109612273266994864461},
          {1, 0.01818181818181818181818}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
