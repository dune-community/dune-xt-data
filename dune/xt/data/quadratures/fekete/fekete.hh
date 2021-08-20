// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   René Fritze    (2018)
//   Tobias Leibner (2018 - 2019)

#ifndef DUNE_XT_DATA_QUADRATURES_FEKETE_FEKETE_HH
#define DUNE_XT_DATA_QUADRATURES_FEKETE_FEKETE_HH

#include <vector>

namespace Dune::XT::Data {


void get_fekete_rule(const int rule, std::vector<double>& points, std::vector<double>& weights);


} // namespace Dune::XT::Data

#endif // DUNE_XT_DATA_QUADRATURES_FEKETE_FEKETE_HH
