# ~~~
# This file is part of the dune-xt-data project:
#   https://github.com/dune-community/dune-xt-data
# Copyright 2018 dune-xt-data developers and contributors. All rights reserved.
# License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause) 
# or  GPL-2.0+ (http://opensource.org/licenses/gpl-license) 
# with "runtime exception" (http://www.dune-project.org/license.html)
# Authors:
#   Rene Milk (2018)
# ~~~

name = 'This file is part of the dune-xt-data project:'
url = 'https://github.com/dune-community/dune-xt-data'
copyright_statement = 'Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.'
license = '''Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
          with "runtime exception" (http://www.dune-project.org/license.html)'''
prefix = '#'
lead_in = '# ~~~'
lead_out = '# ~~~'

include_patterns = ('*.txt', '*.cmake', '*.py', '*.sh', '*.bash', '*.dgf', '*.msh', '*.gdb', '*.cfg',
                    '*.travis.*', '*.gitignore', '*.mailmap', '*.gitattributes', '*gitignore-*', '*stamp-vc',
                    '*dune.module', '*Doxylocal', '*.clang-format', '*COPYING-CMAKE-SCRIPTS', '*README',
                    '*LICENSE', '*mainpage', '*switch-build_dir', '*dune-xt-data.pc.in', '*CMakeLists.txt')
exclude_patterns = ('*config.h.cmake', '*.gz', '*.vcsetup*', 'FindEigen3.cmake', '*builder_definitions.cmake')
