// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   René Fritze    (2018)
//   Tobias Leibner (2018 - 2019)
//
// This file is part of the dune-gdt project:

#include "../gausslobatto_data.hh"

namespace Dune::XT::Data {


template <>
std::vector<std::vector<double>> GaussLobattoData<12>::get()
{
  return {{-1, 0.01515151515151515151515},
          {-0.9448992722228822234076, 0.091684517413196130668},
          {-0.8192793216440066783486, 0.1579747055643701151647},
          {-0.6328761530318606776624, 0.212508417761021145358},
          {-0.3995309409653489322644, 0.2512756031992012802932},
          {-0.1365529328549275548641, 0.2714052409106961770003},
          {0.1365529328549275548641, 0.2714052409106961770003},
          {0.3995309409653489322644, 0.251275603199201280293},
          {0.6328761530318606776624, 0.212508417761021145358},
          {0.8192793216440066783486, 0.1579747055643701151647},
          {0.9448992722228822234076, 0.0916845174131961306683},
          {1, 0.01515151515151515151515}};
}


} // namespace Dune::XT::Data
