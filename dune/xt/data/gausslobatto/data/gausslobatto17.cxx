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
std::vector<std::vector<double>> GaussLobattoData<17>::get()
{
  return {{-1, 0.00735294117647058823529},
          {-0.973132176631418314157, 0.044921940543254209647},
          {-0.9108799959155735956238, 0.0791982705036871191903},
          {-0.8156962512217703071068, 0.1105929090070281613758},
          {-0.6910289806276847053949, 0.1379877462019265590562},
          {-0.5413853993301015391237, 0.1603946619976215395163},
          {-0.3721744335654770419072, 0.177004253515657870437},
          {-0.1895119735183173883043, 0.1872163396776192358921},
          {0, 0.1906618747534694332994},
          {0.1895119735183173883043, 0.1872163396776192358921},
          {0.3721744335654770419072, 0.177004253515657870437},
          {0.5413853993301015391237, 0.1603946619976215395163},
          {0.6910289806276847053949, 0.1379877462019265590562},
          {0.8156962512217703071068, 0.1105929090070281613758},
          {0.9108799959155735956238, 0.0791982705036871191903},
          {0.973132176631418314157, 0.044921940543254209647},
          {1, 0.00735294117647058823529}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
