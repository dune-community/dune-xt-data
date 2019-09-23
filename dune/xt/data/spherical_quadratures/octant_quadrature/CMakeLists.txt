# ~~~
# This file is part of the dune-xt-data project:
#   https://github.com/dune-community/dune-xt-data
# Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
# License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
#      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
#          with "runtime exception" (http://www.dune-project.org/license.html)
# Authors:
#   Tobias Leibner (2019)
# ~~~

foreach(order RANGE 2 70 1)
  list(APPEND oq_sources data/order_${order}.cxx)
endforeach()
dune_library_add_sources(dxt_data SOURCES ${oq_sources})
