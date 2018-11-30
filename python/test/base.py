# ~~~
# This file is part of the dune-xt-data project:
#   https://github.com/dune-community/dune-xt-data
# Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
# License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
#      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
#          with "runtime exception" (http://www.dune-project.org/license.html)
# Authors:
#   René Fritze (2018)
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
