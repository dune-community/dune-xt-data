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

for name in r8lib c8lib matrix_exponential matrix_exponential_extension
do
${CXX} -O3 -c ${name}.cpp -o ${name}.o
done
ar rcs libmatrix_exponential.a matrix_exponential_extension.o matrix_exponential.o c8lib.o r8lib.o
