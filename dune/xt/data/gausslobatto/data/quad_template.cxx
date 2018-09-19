// This file is part of the dune-gdt project:
//   https://github.com/dune-community/dune-gdt
// Copyright 2010-2017, dune-gdt developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner  (2017)

#include "../gausslobatto_data.hh"

namespace Dune {
namespace XT {
namespace Data {
namespace internal {


template <>
std::vector<std::vector<double>> GaussLobattoData<ORDER>::get()
{
  return PASTEBELOW;
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
