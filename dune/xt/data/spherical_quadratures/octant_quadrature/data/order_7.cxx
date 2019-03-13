// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   René Fritze    (2018)
//   Tobias Leibner (2018 - 2019)

#include "../octant_quadrature_data.hh"

namespace Dune {
namespace XT {
namespace Data {


template <>
std::vector<std::vector<std::vector<double>>> OctantQuadratureData<7>::get()
{
  return {
      {{0.99877, 0.96951, 0.84773, 0.58971, 0.21225, 0.99877, 0.96951, 0.84773, 0.58971, 0.21225,
        0.99877, 0.96951, 0.84773, 0.58971, 0.21225, 0.99877, 0.96951, 0.84773, 0.58971, 0.21225,
        0.99877, 0.96951, 0.84773, 0.58971, 0.21225, 0.99877, 0.96951, 0.84773, 0.58971, 0.21225,
        0.99877, 0.96951, 0.84773, 0.58971, 0.21225, 0.99877, 0.96951, 0.84773, 0.58971, 0.21225},
       {0.032493, 0.032493, 0.032493, 0.032493, 0.032493, 0.16469, 0.16469, 0.16469, 0.16469, 0.16469,
        0.37905,  0.37905,  0.37905,  0.37905,  0.37905,  0.64427, 0.64427, 0.64427, 0.64427, 0.64427,
        0.92652,  0.92652,  0.92652,  0.92652,  0.92652,  1.1917,  1.1917,  1.1917,  1.1917,  1.1917,
        1.4061,   1.4061,   1.4061,   1.4061,   1.4061,   1.5383,  1.5383,  1.5383,  1.5383,  1.5383},
       {0.00051589, 0.0053171, 0.015461, 0.026928, 0.034389, 0.0011117,  0.011457,  0.033315, 0.058025, 0.074101,
        0.0015323,  0.015793,  0.04592,  0.07998,  0.10214,  0.0017449,  0.017984,  0.052292, 0.091078, 0.11631,
        0.0017449,  0.017984,  0.052292, 0.091078, 0.11631,  0.0015323,  0.015793,  0.04592,  0.07998,  0.10214,
        0.0011117,  0.011457,  0.033315, 0.058025, 0.074101, 0.00051589, 0.0053171, 0.015461, 0.026928, 0.034389}},
      {{0.99877, 0.96951, 0.84773, 0.58971, 0.21225, 0.99877, 0.96951, 0.84773, 0.58971, 0.21225,
        0.99877, 0.96951, 0.84773, 0.58971, 0.21225, 0.99877, 0.96951, 0.84773, 0.58971, 0.21225,
        0.99877, 0.96951, 0.84773, 0.58971, 0.21225, 0.99877, 0.96951, 0.84773, 0.58971, 0.21225,
        0.99877, 0.96951, 0.84773, 0.58971, 0.21225, 0.99877, 0.96951, 0.84773, 0.58971, 0.21225},
       {1.6033, 1.6033, 1.6033, 1.6033, 1.6033, 1.7355, 1.7355, 1.7355, 1.7355, 1.7355, 1.9498, 1.9498, 1.9498, 1.9498,
        1.9498, 2.2151, 2.2151, 2.2151, 2.2151, 2.2151, 2.4973, 2.4973, 2.4973, 2.4973, 2.4973, 2.7625, 2.7625, 2.7625,
        2.7625, 2.7625, 2.9769, 2.9769, 2.9769, 2.9769, 2.9769, 3.1091, 3.1091, 3.1091, 3.1091, 3.1091},
       {0.00051589, 0.0053171, 0.015461, 0.026928, 0.034389, 0.0011117,  0.011457,  0.033315, 0.058025, 0.074101,
        0.0015323,  0.015793,  0.04592,  0.07998,  0.10214,  0.0017449,  0.017984,  0.052292, 0.091078, 0.11631,
        0.0017449,  0.017984,  0.052292, 0.091078, 0.11631,  0.0015323,  0.015793,  0.04592,  0.07998,  0.10214,
        0.0011117,  0.011457,  0.033315, 0.058025, 0.074101, 0.00051589, 0.0053171, 0.015461, 0.026928, 0.034389}},
      {{0.99877, 0.96951, 0.84773, 0.58971, 0.21225, 0.99877, 0.96951, 0.84773, 0.58971, 0.21225,
        0.99877, 0.96951, 0.84773, 0.58971, 0.21225, 0.99877, 0.96951, 0.84773, 0.58971, 0.21225,
        0.99877, 0.96951, 0.84773, 0.58971, 0.21225, 0.99877, 0.96951, 0.84773, 0.58971, 0.21225,
        0.99877, 0.96951, 0.84773, 0.58971, 0.21225, 0.99877, 0.96951, 0.84773, 0.58971, 0.21225},
       {3.1741, 3.1741, 3.1741, 3.1741, 3.1741, 3.3063, 3.3063, 3.3063, 3.3063, 3.3063, 3.5206, 3.5206, 3.5206, 3.5206,
        3.5206, 3.7859, 3.7859, 3.7859, 3.7859, 3.7859, 4.0681, 4.0681, 4.0681, 4.0681, 4.0681, 4.3333, 4.3333, 4.3333,
        4.3333, 4.3333, 4.5477, 4.5477, 4.5477, 4.5477, 4.5477, 4.6799, 4.6799, 4.6799, 4.6799, 4.6799},
       {0.00051589, 0.0053171, 0.015461, 0.026928, 0.034389, 0.0011117,  0.011457,  0.033315, 0.058025, 0.074101,
        0.0015323,  0.015793,  0.04592,  0.07998,  0.10214,  0.0017449,  0.017984,  0.052292, 0.091078, 0.11631,
        0.0017449,  0.017984,  0.052292, 0.091078, 0.11631,  0.0015323,  0.015793,  0.04592,  0.07998,  0.10214,
        0.0011117,  0.011457,  0.033315, 0.058025, 0.074101, 0.00051589, 0.0053171, 0.015461, 0.026928, 0.034389}},
      {{0.99877, 0.96951, 0.84773, 0.58971, 0.21225, 0.99877, 0.96951, 0.84773, 0.58971, 0.21225,
        0.99877, 0.96951, 0.84773, 0.58971, 0.21225, 0.99877, 0.96951, 0.84773, 0.58971, 0.21225,
        0.99877, 0.96951, 0.84773, 0.58971, 0.21225, 0.99877, 0.96951, 0.84773, 0.58971, 0.21225,
        0.99877, 0.96951, 0.84773, 0.58971, 0.21225, 0.99877, 0.96951, 0.84773, 0.58971, 0.21225},
       {4.7449, 4.7449, 4.7449, 4.7449, 4.7449, 4.8771, 4.8771, 4.8771, 4.8771, 4.8771, 5.0914, 5.0914, 5.0914, 5.0914,
        5.0914, 5.3567, 5.3567, 5.3567, 5.3567, 5.3567, 5.6389, 5.6389, 5.6389, 5.6389, 5.6389, 5.9041, 5.9041, 5.9041,
        5.9041, 5.9041, 6.1185, 6.1185, 6.1185, 6.1185, 6.1185, 6.2507, 6.2507, 6.2507, 6.2507, 6.2507},
       {0.00051589, 0.0053171, 0.015461, 0.026928, 0.034389, 0.0011117,  0.011457,  0.033315, 0.058025, 0.074101,
        0.0015323,  0.015793,  0.04592,  0.07998,  0.10214,  0.0017449,  0.017984,  0.052292, 0.091078, 0.11631,
        0.0017449,  0.017984,  0.052292, 0.091078, 0.11631,  0.0015323,  0.015793,  0.04592,  0.07998,  0.10214,
        0.0011117,  0.011457,  0.033315, 0.058025, 0.074101, 0.00051589, 0.0053171, 0.015461, 0.026928, 0.034389}},
      {{-0.99877, -0.96951, -0.84773, -0.58971, -0.21225, -0.99877, -0.96951, -0.84773, -0.58971, -0.21225,
        -0.99877, -0.96951, -0.84773, -0.58971, -0.21225, -0.99877, -0.96951, -0.84773, -0.58971, -0.21225,
        -0.99877, -0.96951, -0.84773, -0.58971, -0.21225, -0.99877, -0.96951, -0.84773, -0.58971, -0.21225,
        -0.99877, -0.96951, -0.84773, -0.58971, -0.21225, -0.99877, -0.96951, -0.84773, -0.58971, -0.21225},
       {0.032493, 0.032493, 0.032493, 0.032493, 0.032493, 0.16469, 0.16469, 0.16469, 0.16469, 0.16469,
        0.37905,  0.37905,  0.37905,  0.37905,  0.37905,  0.64427, 0.64427, 0.64427, 0.64427, 0.64427,
        0.92652,  0.92652,  0.92652,  0.92652,  0.92652,  1.1917,  1.1917,  1.1917,  1.1917,  1.1917,
        1.4061,   1.4061,   1.4061,   1.4061,   1.4061,   1.5383,  1.5383,  1.5383,  1.5383,  1.5383},
       {0.00051589, 0.0053171, 0.015461, 0.026928, 0.034389, 0.0011117,  0.011457,  0.033315, 0.058025, 0.074101,
        0.0015323,  0.015793,  0.04592,  0.07998,  0.10214,  0.0017449,  0.017984,  0.052292, 0.091078, 0.11631,
        0.0017449,  0.017984,  0.052292, 0.091078, 0.11631,  0.0015323,  0.015793,  0.04592,  0.07998,  0.10214,
        0.0011117,  0.011457,  0.033315, 0.058025, 0.074101, 0.00051589, 0.0053171, 0.015461, 0.026928, 0.034389}},
      {{-0.99877, -0.96951, -0.84773, -0.58971, -0.21225, -0.99877, -0.96951, -0.84773, -0.58971, -0.21225,
        -0.99877, -0.96951, -0.84773, -0.58971, -0.21225, -0.99877, -0.96951, -0.84773, -0.58971, -0.21225,
        -0.99877, -0.96951, -0.84773, -0.58971, -0.21225, -0.99877, -0.96951, -0.84773, -0.58971, -0.21225,
        -0.99877, -0.96951, -0.84773, -0.58971, -0.21225, -0.99877, -0.96951, -0.84773, -0.58971, -0.21225},
       {1.6033, 1.6033, 1.6033, 1.6033, 1.6033, 1.7355, 1.7355, 1.7355, 1.7355, 1.7355, 1.9498, 1.9498, 1.9498, 1.9498,
        1.9498, 2.2151, 2.2151, 2.2151, 2.2151, 2.2151, 2.4973, 2.4973, 2.4973, 2.4973, 2.4973, 2.7625, 2.7625, 2.7625,
        2.7625, 2.7625, 2.9769, 2.9769, 2.9769, 2.9769, 2.9769, 3.1091, 3.1091, 3.1091, 3.1091, 3.1091},
       {0.00051589, 0.0053171, 0.015461, 0.026928, 0.034389, 0.0011117,  0.011457,  0.033315, 0.058025, 0.074101,
        0.0015323,  0.015793,  0.04592,  0.07998,  0.10214,  0.0017449,  0.017984,  0.052292, 0.091078, 0.11631,
        0.0017449,  0.017984,  0.052292, 0.091078, 0.11631,  0.0015323,  0.015793,  0.04592,  0.07998,  0.10214,
        0.0011117,  0.011457,  0.033315, 0.058025, 0.074101, 0.00051589, 0.0053171, 0.015461, 0.026928, 0.034389}},
      {{-0.99877, -0.96951, -0.84773, -0.58971, -0.21225, -0.99877, -0.96951, -0.84773, -0.58971, -0.21225,
        -0.99877, -0.96951, -0.84773, -0.58971, -0.21225, -0.99877, -0.96951, -0.84773, -0.58971, -0.21225,
        -0.99877, -0.96951, -0.84773, -0.58971, -0.21225, -0.99877, -0.96951, -0.84773, -0.58971, -0.21225,
        -0.99877, -0.96951, -0.84773, -0.58971, -0.21225, -0.99877, -0.96951, -0.84773, -0.58971, -0.21225},
       {3.1741, 3.1741, 3.1741, 3.1741, 3.1741, 3.3063, 3.3063, 3.3063, 3.3063, 3.3063, 3.5206, 3.5206, 3.5206, 3.5206,
        3.5206, 3.7859, 3.7859, 3.7859, 3.7859, 3.7859, 4.0681, 4.0681, 4.0681, 4.0681, 4.0681, 4.3333, 4.3333, 4.3333,
        4.3333, 4.3333, 4.5477, 4.5477, 4.5477, 4.5477, 4.5477, 4.6799, 4.6799, 4.6799, 4.6799, 4.6799},
       {0.00051589, 0.0053171, 0.015461, 0.026928, 0.034389, 0.0011117,  0.011457,  0.033315, 0.058025, 0.074101,
        0.0015323,  0.015793,  0.04592,  0.07998,  0.10214,  0.0017449,  0.017984,  0.052292, 0.091078, 0.11631,
        0.0017449,  0.017984,  0.052292, 0.091078, 0.11631,  0.0015323,  0.015793,  0.04592,  0.07998,  0.10214,
        0.0011117,  0.011457,  0.033315, 0.058025, 0.074101, 0.00051589, 0.0053171, 0.015461, 0.026928, 0.034389}},
      {{-0.99877, -0.96951, -0.84773, -0.58971, -0.21225, -0.99877, -0.96951, -0.84773, -0.58971, -0.21225,
        -0.99877, -0.96951, -0.84773, -0.58971, -0.21225, -0.99877, -0.96951, -0.84773, -0.58971, -0.21225,
        -0.99877, -0.96951, -0.84773, -0.58971, -0.21225, -0.99877, -0.96951, -0.84773, -0.58971, -0.21225,
        -0.99877, -0.96951, -0.84773, -0.58971, -0.21225, -0.99877, -0.96951, -0.84773, -0.58971, -0.21225},
       {4.7449, 4.7449, 4.7449, 4.7449, 4.7449, 4.8771, 4.8771, 4.8771, 4.8771, 4.8771, 5.0914, 5.0914, 5.0914, 5.0914,
        5.0914, 5.3567, 5.3567, 5.3567, 5.3567, 5.3567, 5.6389, 5.6389, 5.6389, 5.6389, 5.6389, 5.9041, 5.9041, 5.9041,
        5.9041, 5.9041, 6.1185, 6.1185, 6.1185, 6.1185, 6.1185, 6.2507, 6.2507, 6.2507, 6.2507, 6.2507},
       {0.00051589, 0.0053171, 0.015461, 0.026928, 0.034389, 0.0011117,  0.011457,  0.033315, 0.058025, 0.074101,
        0.0015323,  0.015793,  0.04592,  0.07998,  0.10214,  0.0017449,  0.017984,  0.052292, 0.091078, 0.11631,
        0.0017449,  0.017984,  0.052292, 0.091078, 0.11631,  0.0015323,  0.015793,  0.04592,  0.07998,  0.10214,
        0.0011117,  0.011457,  0.033315, 0.058025, 0.074101, 0.00051589, 0.0053171, 0.015461, 0.026928, 0.034389}}};
}


} // namespace Data
} // namespace XT
} // namespace Dune
