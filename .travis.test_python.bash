#!/bin/bash
#
# ~~~
# This file is part of the dune-xt-data project:
#   https://github.com/dune-community/dune-xt-data
# Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
# License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
#      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
#          with "runtime exception" (http://www.dune-project.org/license.html)
# Authors:
#   René Fritze    (2018)
#   Tobias Leibner (2018)
# ~~~

# ****** THIS FILE IS AUTOGENERATED, DO NOT EDIT **********
# this file is treated as a jinja2 template

set -e
set -x

WAIT="${SUPERDIR}/scripts/bash/travis_wait_new.bash 45"
source ${SUPERDIR}/scripts/bash/retry_command.bash

${SRC_DCTRL} ${BLD} --only=${MY_MODULE} configure
${SRC_DCTRL} ${BLD} --only=${MY_MODULE} bexec ${BUILD_CMD}
${WAIT} ${SRC_DCTRL} ${BLD} --only=${MY_MODULE} bexec ${BUILD_CMD} bindings
${WAIT} ${SRC_DCTRL} ${BLD} --only=${MY_MODULE} bexec ${BUILD_CMD} test_python

if [ "${TRAVIS_SECURE_ENV_VARS}" == "false" ] ; then
    echo "Coverage reporting disabled for forked repo/PR"
    exit 0
fi

cd ${SUPERDIR}/${MY_MODULE}
${DUNE_BUILD_DIR}/${MY_MODULE}/run-in-dune-env pip install codecov
${DUNE_BUILD_DIR}/${MY_MODULE}/run-in-dune-env codecov -X gcov -F pytest -t ${CODECOV_TOKEN}

# ****** THIS FILE IS AUTOGENERATED, DO NOT EDIT **********