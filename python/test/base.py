# ~~~
# This file is part of the dune-xt-common project:
#   https://github.com/dune-community/dune-xt-common
# Copyright 2009-2018 dune-xt-common developers and contributors. All rights reserved.
# License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
# Authors:
#   Rene Milk (2018)
# ~~~

import pytest
from dune.xt.common.test import load_all_submodule


def test_load_all():
    import dune.xt.data as xtd
    load_all_submodule(xtd)


def test_load_files():
    from dune.xt.data import paths
    funcs = ['spe10_model{}_filename'.format(i) for i in (1,2)]
    for f in funcs:
        fn = getattr(paths, f)()
        open(fn).read()
