// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
// or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
// with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Rene Milk (2018)

#include "config.h"

#include <python/dune/xt/common/bindings.hh>

#include <dune/pybindxi/pybind11.h>
#include <dune/pybindxi/stl.h>
#include <dune/xt/data/paths.hh>

void addbind_paths(pybind11::module& m)
{
  namespace py = pybind11;
  using namespace Dune::XT::Data;
  m.def("spe10_model1_filename", &spe10_model1_filename);
  m.def("spe10_model2_filename", &spe10_model2_filename);
} // ... addbind_pathss(...)

PYBIND11_MODULE(_paths, m)
{
  namespace py = pybind11;
  using namespace pybind11::literals;

  Dune::XT::Common::bindings::add_initialization(m, "dune.xt.data");
  addbind_paths(m);
}
