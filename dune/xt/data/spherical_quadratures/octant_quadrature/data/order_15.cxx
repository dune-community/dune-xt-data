// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2019 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner  (2019)

#include "../octant_quadrature_data.hh"

namespace Dune {
namespace XT {
namespace Data {


template <>
std::vector<std::vector<std::vector<double>>> OctantQuadratureData<15>::get()
{
  return {
      {{0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,
        0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,
        0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062,
        0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,
        0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,
        0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062,
        0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,
        0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,
        0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062,
        0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,
        0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,
        0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062},
       {0.0087298, 0.0087298, 0.0087298, 0.0087298, 0.0087298, 0.0087298, 0.0087298, 0.0087298, 0.0087298, 0.045497,
        0.045497,  0.045497,  0.045497,  0.045497,  0.045497,  0.045497,  0.045497,  0.045497,  0.10969,   0.10969,
        0.10969,   0.10969,   0.10969,   0.10969,   0.10969,   0.10969,   0.10969,   0.19824,   0.19824,   0.19824,
        0.19824,   0.19824,   0.19824,   0.19824,   0.19824,   0.19824,   0.30726,   0.30726,   0.30726,   0.30726,
        0.30726,   0.30726,   0.30726,   0.30726,   0.30726,   0.43237,   0.43237,   0.43237,   0.43237,   0.43237,
        0.43237,   0.43237,   0.43237,   0.43237,   0.56898,   0.56898,   0.56898,   0.56898,   0.56898,   0.56898,
        0.56898,   0.56898,   0.56898,   0.7125,    0.7125,    0.7125,    0.7125,    0.7125,    0.7125,    0.7125,
        0.7125,    0.7125,    0.8583,    0.8583,    0.8583,    0.8583,    0.8583,    0.8583,    0.8583,    0.8583,
        0.8583,    1.0018,    1.0018,    1.0018,    1.0018,    1.0018,    1.0018,    1.0018,    1.0018,    1.0018,
        1.1384,    1.1384,    1.1384,    1.1384,    1.1384,    1.1384,    1.1384,    1.1384,    1.1384,    1.2635,
        1.2635,    1.2635,    1.2635,    1.2635,    1.2635,    1.2635,    1.2635,    1.2635,    1.3726,    1.3726,
        1.3726,    1.3726,    1.3726,    1.3726,    1.3726,    1.3726,    1.3726,    1.4611,    1.4611,    1.4611,
        1.4611,    1.4611,    1.4611,    1.4611,    1.4611,    1.4611,    1.5253,    1.5253,    1.5253,    1.5253,
        1.5253,    1.5253,    1.5253,    1.5253,    1.5253,    1.5621,    1.5621,    1.5621,    1.5621,    1.5621,
        1.5621,    1.5621,    1.5621,    1.5621},
       {1.5417e-05, 0.00017751, 0.00061546, 0.0013475, 0.0022932, 0.0033141, 0.0042541, 0.0049708, 0.0053576,
        3.5114e-05, 0.00040431, 0.0014018,  0.0030691, 0.0052231, 0.0075482, 0.0096891, 0.011322,  0.012202,
        5.3101e-05, 0.00061142, 0.0021198,  0.0046412, 0.0078986, 0.011415,  0.014652,  0.017121,  0.018453,
        6.864e-05,  0.00079034, 0.0027402,  0.0059994, 0.01021,   0.014755,  0.01894,   0.022131,  0.023853,
        8.1285e-05, 0.00093594, 0.003245,   0.0071047, 0.012091,  0.017473,  0.022429,  0.026208,  0.028248,
        9.0817e-05, 0.0010457,  0.0036255,  0.0079378, 0.013509,  0.019522,  0.025059,  0.029281,  0.03156,
        9.7165e-05, 0.0011188,  0.0038789,  0.0084927, 0.014453,  0.020887,  0.026811,  0.031328,  0.033766,
        0.00010033, 0.0011552,  0.0040053,  0.0087694, 0.014924,  0.021568,  0.027685,  0.032349,  0.034866,
        0.00010033, 0.0011552,  0.0040053,  0.0087694, 0.014924,  0.021568,  0.027685,  0.032349,  0.034866,
        9.7165e-05, 0.0011188,  0.0038789,  0.0084927, 0.014453,  0.020887,  0.026811,  0.031328,  0.033766,
        9.0817e-05, 0.0010457,  0.0036255,  0.0079378, 0.013509,  0.019522,  0.025059,  0.029281,  0.03156,
        8.1285e-05, 0.00093594, 0.003245,   0.0071047, 0.012091,  0.017473,  0.022429,  0.026208,  0.028248,
        6.864e-05,  0.00079034, 0.0027402,  0.0059994, 0.01021,   0.014755,  0.01894,   0.022131,  0.023853,
        5.3101e-05, 0.00061142, 0.0021198,  0.0046412, 0.0078986, 0.011415,  0.014652,  0.017121,  0.018453,
        3.5114e-05, 0.00040431, 0.0014018,  0.0030691, 0.0052231, 0.0075482, 0.0096891, 0.011322,  0.012202,
        1.5417e-05, 0.00017751, 0.00061546, 0.0013475, 0.0022932, 0.0033141, 0.0042541, 0.0049708, 0.0053576}},
      {{0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,
        0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,
        0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062,
        0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,
        0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,
        0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062,
        0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,
        0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,
        0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062,
        0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,
        0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,
        0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062},
       {1.5795, 1.5795, 1.5795, 1.5795, 1.5795, 1.5795, 1.5795, 1.5795, 1.5795, 1.6163, 1.6163, 1.6163, 1.6163, 1.6163,
        1.6163, 1.6163, 1.6163, 1.6163, 1.6805, 1.6805, 1.6805, 1.6805, 1.6805, 1.6805, 1.6805, 1.6805, 1.6805, 1.769,
        1.769,  1.769,  1.769,  1.769,  1.769,  1.769,  1.769,  1.769,  1.8781, 1.8781, 1.8781, 1.8781, 1.8781, 1.8781,
        1.8781, 1.8781, 1.8781, 2.0032, 2.0032, 2.0032, 2.0032, 2.0032, 2.0032, 2.0032, 2.0032, 2.0032, 2.1398, 2.1398,
        2.1398, 2.1398, 2.1398, 2.1398, 2.1398, 2.1398, 2.1398, 2.2833, 2.2833, 2.2833, 2.2833, 2.2833, 2.2833, 2.2833,
        2.2833, 2.2833, 2.4291, 2.4291, 2.4291, 2.4291, 2.4291, 2.4291, 2.4291, 2.4291, 2.4291, 2.5726, 2.5726, 2.5726,
        2.5726, 2.5726, 2.5726, 2.5726, 2.5726, 2.5726, 2.7092, 2.7092, 2.7092, 2.7092, 2.7092, 2.7092, 2.7092, 2.7092,
        2.7092, 2.8343, 2.8343, 2.8343, 2.8343, 2.8343, 2.8343, 2.8343, 2.8343, 2.8343, 2.9434, 2.9434, 2.9434, 2.9434,
        2.9434, 2.9434, 2.9434, 2.9434, 2.9434, 3.0319, 3.0319, 3.0319, 3.0319, 3.0319, 3.0319, 3.0319, 3.0319, 3.0319,
        3.0961, 3.0961, 3.0961, 3.0961, 3.0961, 3.0961, 3.0961, 3.0961, 3.0961, 3.1329, 3.1329, 3.1329, 3.1329, 3.1329,
        3.1329, 3.1329, 3.1329, 3.1329},
       {1.5417e-05, 0.00017751, 0.00061546, 0.0013475, 0.0022932, 0.0033141, 0.0042541, 0.0049708, 0.0053576,
        3.5114e-05, 0.00040431, 0.0014018,  0.0030691, 0.0052231, 0.0075482, 0.0096891, 0.011322,  0.012202,
        5.3101e-05, 0.00061142, 0.0021198,  0.0046412, 0.0078986, 0.011415,  0.014652,  0.017121,  0.018453,
        6.864e-05,  0.00079034, 0.0027402,  0.0059994, 0.01021,   0.014755,  0.01894,   0.022131,  0.023853,
        8.1285e-05, 0.00093594, 0.003245,   0.0071047, 0.012091,  0.017473,  0.022429,  0.026208,  0.028248,
        9.0817e-05, 0.0010457,  0.0036255,  0.0079378, 0.013509,  0.019522,  0.025059,  0.029281,  0.03156,
        9.7165e-05, 0.0011188,  0.0038789,  0.0084927, 0.014453,  0.020887,  0.026811,  0.031328,  0.033766,
        0.00010033, 0.0011552,  0.0040053,  0.0087694, 0.014924,  0.021568,  0.027685,  0.032349,  0.034866,
        0.00010033, 0.0011552,  0.0040053,  0.0087694, 0.014924,  0.021568,  0.027685,  0.032349,  0.034866,
        9.7165e-05, 0.0011188,  0.0038789,  0.0084927, 0.014453,  0.020887,  0.026811,  0.031328,  0.033766,
        9.0817e-05, 0.0010457,  0.0036255,  0.0079378, 0.013509,  0.019522,  0.025059,  0.029281,  0.03156,
        8.1285e-05, 0.00093594, 0.003245,   0.0071047, 0.012091,  0.017473,  0.022429,  0.026208,  0.028248,
        6.864e-05,  0.00079034, 0.0027402,  0.0059994, 0.01021,   0.014755,  0.01894,   0.022131,  0.023853,
        5.3101e-05, 0.00061142, 0.0021198,  0.0046412, 0.0078986, 0.011415,  0.014652,  0.017121,  0.018453,
        3.5114e-05, 0.00040431, 0.0014018,  0.0030691, 0.0052231, 0.0075482, 0.0096891, 0.011322,  0.012202,
        1.5417e-05, 0.00017751, 0.00061546, 0.0013475, 0.0022932, 0.0033141, 0.0042541, 0.0049708, 0.0053576}},
      {{0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,
        0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,
        0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062,
        0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,
        0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,
        0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062,
        0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,
        0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,
        0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062,
        0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,
        0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,
        0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062},
       {3.1503, 3.1503, 3.1503, 3.1503, 3.1503, 3.1503, 3.1503, 3.1503, 3.1503, 3.1871, 3.1871, 3.1871, 3.1871, 3.1871,
        3.1871, 3.1871, 3.1871, 3.1871, 3.2513, 3.2513, 3.2513, 3.2513, 3.2513, 3.2513, 3.2513, 3.2513, 3.2513, 3.3398,
        3.3398, 3.3398, 3.3398, 3.3398, 3.3398, 3.3398, 3.3398, 3.3398, 3.4489, 3.4489, 3.4489, 3.4489, 3.4489, 3.4489,
        3.4489, 3.4489, 3.4489, 3.574,  3.574,  3.574,  3.574,  3.574,  3.574,  3.574,  3.574,  3.574,  3.7106, 3.7106,
        3.7106, 3.7106, 3.7106, 3.7106, 3.7106, 3.7106, 3.7106, 3.8541, 3.8541, 3.8541, 3.8541, 3.8541, 3.8541, 3.8541,
        3.8541, 3.8541, 3.9999, 3.9999, 3.9999, 3.9999, 3.9999, 3.9999, 3.9999, 3.9999, 3.9999, 4.1434, 4.1434, 4.1434,
        4.1434, 4.1434, 4.1434, 4.1434, 4.1434, 4.1434, 4.28,   4.28,   4.28,   4.28,   4.28,   4.28,   4.28,   4.28,
        4.28,   4.4051, 4.4051, 4.4051, 4.4051, 4.4051, 4.4051, 4.4051, 4.4051, 4.4051, 4.5141, 4.5141, 4.5141, 4.5141,
        4.5141, 4.5141, 4.5141, 4.5141, 4.5141, 4.6027, 4.6027, 4.6027, 4.6027, 4.6027, 4.6027, 4.6027, 4.6027, 4.6027,
        4.6669, 4.6669, 4.6669, 4.6669, 4.6669, 4.6669, 4.6669, 4.6669, 4.6669, 4.7037, 4.7037, 4.7037, 4.7037, 4.7037,
        4.7037, 4.7037, 4.7037, 4.7037},
       {1.5417e-05, 0.00017751, 0.00061546, 0.0013475, 0.0022932, 0.0033141, 0.0042541, 0.0049708, 0.0053576,
        3.5114e-05, 0.00040431, 0.0014018,  0.0030691, 0.0052231, 0.0075482, 0.0096891, 0.011322,  0.012202,
        5.3101e-05, 0.00061142, 0.0021198,  0.0046412, 0.0078986, 0.011415,  0.014652,  0.017121,  0.018453,
        6.864e-05,  0.00079034, 0.0027402,  0.0059994, 0.01021,   0.014755,  0.01894,   0.022131,  0.023853,
        8.1285e-05, 0.00093594, 0.003245,   0.0071047, 0.012091,  0.017473,  0.022429,  0.026208,  0.028248,
        9.0817e-05, 0.0010457,  0.0036255,  0.0079378, 0.013509,  0.019522,  0.025059,  0.029281,  0.03156,
        9.7165e-05, 0.0011188,  0.0038789,  0.0084927, 0.014453,  0.020887,  0.026811,  0.031328,  0.033766,
        0.00010033, 0.0011552,  0.0040053,  0.0087694, 0.014924,  0.021568,  0.027685,  0.032349,  0.034866,
        0.00010033, 0.0011552,  0.0040053,  0.0087694, 0.014924,  0.021568,  0.027685,  0.032349,  0.034866,
        9.7165e-05, 0.0011188,  0.0038789,  0.0084927, 0.014453,  0.020887,  0.026811,  0.031328,  0.033766,
        9.0817e-05, 0.0010457,  0.0036255,  0.0079378, 0.013509,  0.019522,  0.025059,  0.029281,  0.03156,
        8.1285e-05, 0.00093594, 0.003245,   0.0071047, 0.012091,  0.017473,  0.022429,  0.026208,  0.028248,
        6.864e-05,  0.00079034, 0.0027402,  0.0059994, 0.01021,   0.014755,  0.01894,   0.022131,  0.023853,
        5.3101e-05, 0.00061142, 0.0021198,  0.0046412, 0.0078986, 0.011415,  0.014652,  0.017121,  0.018453,
        3.5114e-05, 0.00040431, 0.0014018,  0.0030691, 0.0052231, 0.0075482, 0.0096891, 0.011322,  0.012202,
        1.5417e-05, 0.00017751, 0.00061546, 0.0013475, 0.0022932, 0.0033141, 0.0042541, 0.0049708, 0.0053576}},
      {{0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,
        0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,
        0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062,
        0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,
        0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,
        0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062,
        0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,
        0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,
        0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062,
        0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,
        0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,
        0.56057, 0.3531,  0.12062, 0.99986, 0.9964,  0.9798,  0.93688, 0.85598, 0.7305,  0.56057, 0.3531,  0.12062},
       {4.7211, 4.7211, 4.7211, 4.7211, 4.7211, 4.7211, 4.7211, 4.7211, 4.7211, 4.7579, 4.7579, 4.7579, 4.7579, 4.7579,
        4.7579, 4.7579, 4.7579, 4.7579, 4.8221, 4.8221, 4.8221, 4.8221, 4.8221, 4.8221, 4.8221, 4.8221, 4.8221, 4.9106,
        4.9106, 4.9106, 4.9106, 4.9106, 4.9106, 4.9106, 4.9106, 4.9106, 5.0196, 5.0196, 5.0196, 5.0196, 5.0196, 5.0196,
        5.0196, 5.0196, 5.0196, 5.1448, 5.1448, 5.1448, 5.1448, 5.1448, 5.1448, 5.1448, 5.1448, 5.1448, 5.2814, 5.2814,
        5.2814, 5.2814, 5.2814, 5.2814, 5.2814, 5.2814, 5.2814, 5.4249, 5.4249, 5.4249, 5.4249, 5.4249, 5.4249, 5.4249,
        5.4249, 5.4249, 5.5707, 5.5707, 5.5707, 5.5707, 5.5707, 5.5707, 5.5707, 5.5707, 5.5707, 5.7142, 5.7142, 5.7142,
        5.7142, 5.7142, 5.7142, 5.7142, 5.7142, 5.7142, 5.8508, 5.8508, 5.8508, 5.8508, 5.8508, 5.8508, 5.8508, 5.8508,
        5.8508, 5.9759, 5.9759, 5.9759, 5.9759, 5.9759, 5.9759, 5.9759, 5.9759, 5.9759, 6.0849, 6.0849, 6.0849, 6.0849,
        6.0849, 6.0849, 6.0849, 6.0849, 6.0849, 6.1735, 6.1735, 6.1735, 6.1735, 6.1735, 6.1735, 6.1735, 6.1735, 6.1735,
        6.2377, 6.2377, 6.2377, 6.2377, 6.2377, 6.2377, 6.2377, 6.2377, 6.2377, 6.2745, 6.2745, 6.2745, 6.2745, 6.2745,
        6.2745, 6.2745, 6.2745, 6.2745},
       {1.5417e-05, 0.00017751, 0.00061546, 0.0013475, 0.0022932, 0.0033141, 0.0042541, 0.0049708, 0.0053576,
        3.5114e-05, 0.00040431, 0.0014018,  0.0030691, 0.0052231, 0.0075482, 0.0096891, 0.011322,  0.012202,
        5.3101e-05, 0.00061142, 0.0021198,  0.0046412, 0.0078986, 0.011415,  0.014652,  0.017121,  0.018453,
        6.864e-05,  0.00079034, 0.0027402,  0.0059994, 0.01021,   0.014755,  0.01894,   0.022131,  0.023853,
        8.1285e-05, 0.00093594, 0.003245,   0.0071047, 0.012091,  0.017473,  0.022429,  0.026208,  0.028248,
        9.0817e-05, 0.0010457,  0.0036255,  0.0079378, 0.013509,  0.019522,  0.025059,  0.029281,  0.03156,
        9.7165e-05, 0.0011188,  0.0038789,  0.0084927, 0.014453,  0.020887,  0.026811,  0.031328,  0.033766,
        0.00010033, 0.0011552,  0.0040053,  0.0087694, 0.014924,  0.021568,  0.027685,  0.032349,  0.034866,
        0.00010033, 0.0011552,  0.0040053,  0.0087694, 0.014924,  0.021568,  0.027685,  0.032349,  0.034866,
        9.7165e-05, 0.0011188,  0.0038789,  0.0084927, 0.014453,  0.020887,  0.026811,  0.031328,  0.033766,
        9.0817e-05, 0.0010457,  0.0036255,  0.0079378, 0.013509,  0.019522,  0.025059,  0.029281,  0.03156,
        8.1285e-05, 0.00093594, 0.003245,   0.0071047, 0.012091,  0.017473,  0.022429,  0.026208,  0.028248,
        6.864e-05,  0.00079034, 0.0027402,  0.0059994, 0.01021,   0.014755,  0.01894,   0.022131,  0.023853,
        5.3101e-05, 0.00061142, 0.0021198,  0.0046412, 0.0078986, 0.011415,  0.014652,  0.017121,  0.018453,
        3.5114e-05, 0.00040431, 0.0014018,  0.0030691, 0.0052231, 0.0075482, 0.0096891, 0.011322,  0.012202,
        1.5417e-05, 0.00017751, 0.00061546, 0.0013475, 0.0022932, 0.0033141, 0.0042541, 0.0049708, 0.0053576}},
      {{-0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,
        -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688,
        -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,
        -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,
        -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986,
        -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,
        -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598,
        -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057,
        -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062,
        -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,
        -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688,
        -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,
        -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,
        -0.12062},
       {0.0087298, 0.0087298, 0.0087298, 0.0087298, 0.0087298, 0.0087298, 0.0087298, 0.0087298, 0.0087298, 0.045497,
        0.045497,  0.045497,  0.045497,  0.045497,  0.045497,  0.045497,  0.045497,  0.045497,  0.10969,   0.10969,
        0.10969,   0.10969,   0.10969,   0.10969,   0.10969,   0.10969,   0.10969,   0.19824,   0.19824,   0.19824,
        0.19824,   0.19824,   0.19824,   0.19824,   0.19824,   0.19824,   0.30726,   0.30726,   0.30726,   0.30726,
        0.30726,   0.30726,   0.30726,   0.30726,   0.30726,   0.43237,   0.43237,   0.43237,   0.43237,   0.43237,
        0.43237,   0.43237,   0.43237,   0.43237,   0.56898,   0.56898,   0.56898,   0.56898,   0.56898,   0.56898,
        0.56898,   0.56898,   0.56898,   0.7125,    0.7125,    0.7125,    0.7125,    0.7125,    0.7125,    0.7125,
        0.7125,    0.7125,    0.8583,    0.8583,    0.8583,    0.8583,    0.8583,    0.8583,    0.8583,    0.8583,
        0.8583,    1.0018,    1.0018,    1.0018,    1.0018,    1.0018,    1.0018,    1.0018,    1.0018,    1.0018,
        1.1384,    1.1384,    1.1384,    1.1384,    1.1384,    1.1384,    1.1384,    1.1384,    1.1384,    1.2635,
        1.2635,    1.2635,    1.2635,    1.2635,    1.2635,    1.2635,    1.2635,    1.2635,    1.3726,    1.3726,
        1.3726,    1.3726,    1.3726,    1.3726,    1.3726,    1.3726,    1.3726,    1.4611,    1.4611,    1.4611,
        1.4611,    1.4611,    1.4611,    1.4611,    1.4611,    1.4611,    1.5253,    1.5253,    1.5253,    1.5253,
        1.5253,    1.5253,    1.5253,    1.5253,    1.5253,    1.5621,    1.5621,    1.5621,    1.5621,    1.5621,
        1.5621,    1.5621,    1.5621,    1.5621},
       {1.5417e-05, 0.00017751, 0.00061546, 0.0013475, 0.0022932, 0.0033141, 0.0042541, 0.0049708, 0.0053576,
        3.5114e-05, 0.00040431, 0.0014018,  0.0030691, 0.0052231, 0.0075482, 0.0096891, 0.011322,  0.012202,
        5.3101e-05, 0.00061142, 0.0021198,  0.0046412, 0.0078986, 0.011415,  0.014652,  0.017121,  0.018453,
        6.864e-05,  0.00079034, 0.0027402,  0.0059994, 0.01021,   0.014755,  0.01894,   0.022131,  0.023853,
        8.1285e-05, 0.00093594, 0.003245,   0.0071047, 0.012091,  0.017473,  0.022429,  0.026208,  0.028248,
        9.0817e-05, 0.0010457,  0.0036255,  0.0079378, 0.013509,  0.019522,  0.025059,  0.029281,  0.03156,
        9.7165e-05, 0.0011188,  0.0038789,  0.0084927, 0.014453,  0.020887,  0.026811,  0.031328,  0.033766,
        0.00010033, 0.0011552,  0.0040053,  0.0087694, 0.014924,  0.021568,  0.027685,  0.032349,  0.034866,
        0.00010033, 0.0011552,  0.0040053,  0.0087694, 0.014924,  0.021568,  0.027685,  0.032349,  0.034866,
        9.7165e-05, 0.0011188,  0.0038789,  0.0084927, 0.014453,  0.020887,  0.026811,  0.031328,  0.033766,
        9.0817e-05, 0.0010457,  0.0036255,  0.0079378, 0.013509,  0.019522,  0.025059,  0.029281,  0.03156,
        8.1285e-05, 0.00093594, 0.003245,   0.0071047, 0.012091,  0.017473,  0.022429,  0.026208,  0.028248,
        6.864e-05,  0.00079034, 0.0027402,  0.0059994, 0.01021,   0.014755,  0.01894,   0.022131,  0.023853,
        5.3101e-05, 0.00061142, 0.0021198,  0.0046412, 0.0078986, 0.011415,  0.014652,  0.017121,  0.018453,
        3.5114e-05, 0.00040431, 0.0014018,  0.0030691, 0.0052231, 0.0075482, 0.0096891, 0.011322,  0.012202,
        1.5417e-05, 0.00017751, 0.00061546, 0.0013475, 0.0022932, 0.0033141, 0.0042541, 0.0049708, 0.0053576}},
      {{-0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,
        -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688,
        -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,
        -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,
        -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986,
        -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,
        -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598,
        -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057,
        -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062,
        -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,
        -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688,
        -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,
        -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,
        -0.12062},
       {1.5795, 1.5795, 1.5795, 1.5795, 1.5795, 1.5795, 1.5795, 1.5795, 1.5795, 1.6163, 1.6163, 1.6163, 1.6163, 1.6163,
        1.6163, 1.6163, 1.6163, 1.6163, 1.6805, 1.6805, 1.6805, 1.6805, 1.6805, 1.6805, 1.6805, 1.6805, 1.6805, 1.769,
        1.769,  1.769,  1.769,  1.769,  1.769,  1.769,  1.769,  1.769,  1.8781, 1.8781, 1.8781, 1.8781, 1.8781, 1.8781,
        1.8781, 1.8781, 1.8781, 2.0032, 2.0032, 2.0032, 2.0032, 2.0032, 2.0032, 2.0032, 2.0032, 2.0032, 2.1398, 2.1398,
        2.1398, 2.1398, 2.1398, 2.1398, 2.1398, 2.1398, 2.1398, 2.2833, 2.2833, 2.2833, 2.2833, 2.2833, 2.2833, 2.2833,
        2.2833, 2.2833, 2.4291, 2.4291, 2.4291, 2.4291, 2.4291, 2.4291, 2.4291, 2.4291, 2.4291, 2.5726, 2.5726, 2.5726,
        2.5726, 2.5726, 2.5726, 2.5726, 2.5726, 2.5726, 2.7092, 2.7092, 2.7092, 2.7092, 2.7092, 2.7092, 2.7092, 2.7092,
        2.7092, 2.8343, 2.8343, 2.8343, 2.8343, 2.8343, 2.8343, 2.8343, 2.8343, 2.8343, 2.9434, 2.9434, 2.9434, 2.9434,
        2.9434, 2.9434, 2.9434, 2.9434, 2.9434, 3.0319, 3.0319, 3.0319, 3.0319, 3.0319, 3.0319, 3.0319, 3.0319, 3.0319,
        3.0961, 3.0961, 3.0961, 3.0961, 3.0961, 3.0961, 3.0961, 3.0961, 3.0961, 3.1329, 3.1329, 3.1329, 3.1329, 3.1329,
        3.1329, 3.1329, 3.1329, 3.1329},
       {1.5417e-05, 0.00017751, 0.00061546, 0.0013475, 0.0022932, 0.0033141, 0.0042541, 0.0049708, 0.0053576,
        3.5114e-05, 0.00040431, 0.0014018,  0.0030691, 0.0052231, 0.0075482, 0.0096891, 0.011322,  0.012202,
        5.3101e-05, 0.00061142, 0.0021198,  0.0046412, 0.0078986, 0.011415,  0.014652,  0.017121,  0.018453,
        6.864e-05,  0.00079034, 0.0027402,  0.0059994, 0.01021,   0.014755,  0.01894,   0.022131,  0.023853,
        8.1285e-05, 0.00093594, 0.003245,   0.0071047, 0.012091,  0.017473,  0.022429,  0.026208,  0.028248,
        9.0817e-05, 0.0010457,  0.0036255,  0.0079378, 0.013509,  0.019522,  0.025059,  0.029281,  0.03156,
        9.7165e-05, 0.0011188,  0.0038789,  0.0084927, 0.014453,  0.020887,  0.026811,  0.031328,  0.033766,
        0.00010033, 0.0011552,  0.0040053,  0.0087694, 0.014924,  0.021568,  0.027685,  0.032349,  0.034866,
        0.00010033, 0.0011552,  0.0040053,  0.0087694, 0.014924,  0.021568,  0.027685,  0.032349,  0.034866,
        9.7165e-05, 0.0011188,  0.0038789,  0.0084927, 0.014453,  0.020887,  0.026811,  0.031328,  0.033766,
        9.0817e-05, 0.0010457,  0.0036255,  0.0079378, 0.013509,  0.019522,  0.025059,  0.029281,  0.03156,
        8.1285e-05, 0.00093594, 0.003245,   0.0071047, 0.012091,  0.017473,  0.022429,  0.026208,  0.028248,
        6.864e-05,  0.00079034, 0.0027402,  0.0059994, 0.01021,   0.014755,  0.01894,   0.022131,  0.023853,
        5.3101e-05, 0.00061142, 0.0021198,  0.0046412, 0.0078986, 0.011415,  0.014652,  0.017121,  0.018453,
        3.5114e-05, 0.00040431, 0.0014018,  0.0030691, 0.0052231, 0.0075482, 0.0096891, 0.011322,  0.012202,
        1.5417e-05, 0.00017751, 0.00061546, 0.0013475, 0.0022932, 0.0033141, 0.0042541, 0.0049708, 0.0053576}},
      {{-0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,
        -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688,
        -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,
        -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,
        -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986,
        -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,
        -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598,
        -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057,
        -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062,
        -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,
        -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688,
        -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,
        -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,
        -0.12062},
       {3.1503, 3.1503, 3.1503, 3.1503, 3.1503, 3.1503, 3.1503, 3.1503, 3.1503, 3.1871, 3.1871, 3.1871, 3.1871, 3.1871,
        3.1871, 3.1871, 3.1871, 3.1871, 3.2513, 3.2513, 3.2513, 3.2513, 3.2513, 3.2513, 3.2513, 3.2513, 3.2513, 3.3398,
        3.3398, 3.3398, 3.3398, 3.3398, 3.3398, 3.3398, 3.3398, 3.3398, 3.4489, 3.4489, 3.4489, 3.4489, 3.4489, 3.4489,
        3.4489, 3.4489, 3.4489, 3.574,  3.574,  3.574,  3.574,  3.574,  3.574,  3.574,  3.574,  3.574,  3.7106, 3.7106,
        3.7106, 3.7106, 3.7106, 3.7106, 3.7106, 3.7106, 3.7106, 3.8541, 3.8541, 3.8541, 3.8541, 3.8541, 3.8541, 3.8541,
        3.8541, 3.8541, 3.9999, 3.9999, 3.9999, 3.9999, 3.9999, 3.9999, 3.9999, 3.9999, 3.9999, 4.1434, 4.1434, 4.1434,
        4.1434, 4.1434, 4.1434, 4.1434, 4.1434, 4.1434, 4.28,   4.28,   4.28,   4.28,   4.28,   4.28,   4.28,   4.28,
        4.28,   4.4051, 4.4051, 4.4051, 4.4051, 4.4051, 4.4051, 4.4051, 4.4051, 4.4051, 4.5141, 4.5141, 4.5141, 4.5141,
        4.5141, 4.5141, 4.5141, 4.5141, 4.5141, 4.6027, 4.6027, 4.6027, 4.6027, 4.6027, 4.6027, 4.6027, 4.6027, 4.6027,
        4.6669, 4.6669, 4.6669, 4.6669, 4.6669, 4.6669, 4.6669, 4.6669, 4.6669, 4.7037, 4.7037, 4.7037, 4.7037, 4.7037,
        4.7037, 4.7037, 4.7037, 4.7037},
       {1.5417e-05, 0.00017751, 0.00061546, 0.0013475, 0.0022932, 0.0033141, 0.0042541, 0.0049708, 0.0053576,
        3.5114e-05, 0.00040431, 0.0014018,  0.0030691, 0.0052231, 0.0075482, 0.0096891, 0.011322,  0.012202,
        5.3101e-05, 0.00061142, 0.0021198,  0.0046412, 0.0078986, 0.011415,  0.014652,  0.017121,  0.018453,
        6.864e-05,  0.00079034, 0.0027402,  0.0059994, 0.01021,   0.014755,  0.01894,   0.022131,  0.023853,
        8.1285e-05, 0.00093594, 0.003245,   0.0071047, 0.012091,  0.017473,  0.022429,  0.026208,  0.028248,
        9.0817e-05, 0.0010457,  0.0036255,  0.0079378, 0.013509,  0.019522,  0.025059,  0.029281,  0.03156,
        9.7165e-05, 0.0011188,  0.0038789,  0.0084927, 0.014453,  0.020887,  0.026811,  0.031328,  0.033766,
        0.00010033, 0.0011552,  0.0040053,  0.0087694, 0.014924,  0.021568,  0.027685,  0.032349,  0.034866,
        0.00010033, 0.0011552,  0.0040053,  0.0087694, 0.014924,  0.021568,  0.027685,  0.032349,  0.034866,
        9.7165e-05, 0.0011188,  0.0038789,  0.0084927, 0.014453,  0.020887,  0.026811,  0.031328,  0.033766,
        9.0817e-05, 0.0010457,  0.0036255,  0.0079378, 0.013509,  0.019522,  0.025059,  0.029281,  0.03156,
        8.1285e-05, 0.00093594, 0.003245,   0.0071047, 0.012091,  0.017473,  0.022429,  0.026208,  0.028248,
        6.864e-05,  0.00079034, 0.0027402,  0.0059994, 0.01021,   0.014755,  0.01894,   0.022131,  0.023853,
        5.3101e-05, 0.00061142, 0.0021198,  0.0046412, 0.0078986, 0.011415,  0.014652,  0.017121,  0.018453,
        3.5114e-05, 0.00040431, 0.0014018,  0.0030691, 0.0052231, 0.0075482, 0.0096891, 0.011322,  0.012202,
        1.5417e-05, 0.00017751, 0.00061546, 0.0013475, 0.0022932, 0.0033141, 0.0042541, 0.0049708, 0.0053576}},
      {{-0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,
        -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688,
        -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,
        -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,
        -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986,
        -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,
        -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598,
        -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057,
        -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062,
        -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,
        -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688,
        -0.85598, -0.7305,  -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,
        -0.56057, -0.3531,  -0.12062, -0.99986, -0.9964,  -0.9798,  -0.93688, -0.85598, -0.7305,  -0.56057, -0.3531,
        -0.12062},
       {4.7211, 4.7211, 4.7211, 4.7211, 4.7211, 4.7211, 4.7211, 4.7211, 4.7211, 4.7579, 4.7579, 4.7579, 4.7579, 4.7579,
        4.7579, 4.7579, 4.7579, 4.7579, 4.8221, 4.8221, 4.8221, 4.8221, 4.8221, 4.8221, 4.8221, 4.8221, 4.8221, 4.9106,
        4.9106, 4.9106, 4.9106, 4.9106, 4.9106, 4.9106, 4.9106, 4.9106, 5.0196, 5.0196, 5.0196, 5.0196, 5.0196, 5.0196,
        5.0196, 5.0196, 5.0196, 5.1448, 5.1448, 5.1448, 5.1448, 5.1448, 5.1448, 5.1448, 5.1448, 5.1448, 5.2814, 5.2814,
        5.2814, 5.2814, 5.2814, 5.2814, 5.2814, 5.2814, 5.2814, 5.4249, 5.4249, 5.4249, 5.4249, 5.4249, 5.4249, 5.4249,
        5.4249, 5.4249, 5.5707, 5.5707, 5.5707, 5.5707, 5.5707, 5.5707, 5.5707, 5.5707, 5.5707, 5.7142, 5.7142, 5.7142,
        5.7142, 5.7142, 5.7142, 5.7142, 5.7142, 5.7142, 5.8508, 5.8508, 5.8508, 5.8508, 5.8508, 5.8508, 5.8508, 5.8508,
        5.8508, 5.9759, 5.9759, 5.9759, 5.9759, 5.9759, 5.9759, 5.9759, 5.9759, 5.9759, 6.0849, 6.0849, 6.0849, 6.0849,
        6.0849, 6.0849, 6.0849, 6.0849, 6.0849, 6.1735, 6.1735, 6.1735, 6.1735, 6.1735, 6.1735, 6.1735, 6.1735, 6.1735,
        6.2377, 6.2377, 6.2377, 6.2377, 6.2377, 6.2377, 6.2377, 6.2377, 6.2377, 6.2745, 6.2745, 6.2745, 6.2745, 6.2745,
        6.2745, 6.2745, 6.2745, 6.2745},
       {1.5417e-05, 0.00017751, 0.00061546, 0.0013475, 0.0022932, 0.0033141, 0.0042541, 0.0049708, 0.0053576,
        3.5114e-05, 0.00040431, 0.0014018,  0.0030691, 0.0052231, 0.0075482, 0.0096891, 0.011322,  0.012202,
        5.3101e-05, 0.00061142, 0.0021198,  0.0046412, 0.0078986, 0.011415,  0.014652,  0.017121,  0.018453,
        6.864e-05,  0.00079034, 0.0027402,  0.0059994, 0.01021,   0.014755,  0.01894,   0.022131,  0.023853,
        8.1285e-05, 0.00093594, 0.003245,   0.0071047, 0.012091,  0.017473,  0.022429,  0.026208,  0.028248,
        9.0817e-05, 0.0010457,  0.0036255,  0.0079378, 0.013509,  0.019522,  0.025059,  0.029281,  0.03156,
        9.7165e-05, 0.0011188,  0.0038789,  0.0084927, 0.014453,  0.020887,  0.026811,  0.031328,  0.033766,
        0.00010033, 0.0011552,  0.0040053,  0.0087694, 0.014924,  0.021568,  0.027685,  0.032349,  0.034866,
        0.00010033, 0.0011552,  0.0040053,  0.0087694, 0.014924,  0.021568,  0.027685,  0.032349,  0.034866,
        9.7165e-05, 0.0011188,  0.0038789,  0.0084927, 0.014453,  0.020887,  0.026811,  0.031328,  0.033766,
        9.0817e-05, 0.0010457,  0.0036255,  0.0079378, 0.013509,  0.019522,  0.025059,  0.029281,  0.03156,
        8.1285e-05, 0.00093594, 0.003245,   0.0071047, 0.012091,  0.017473,  0.022429,  0.026208,  0.028248,
        6.864e-05,  0.00079034, 0.0027402,  0.0059994, 0.01021,   0.014755,  0.01894,   0.022131,  0.023853,
        5.3101e-05, 0.00061142, 0.0021198,  0.0046412, 0.0078986, 0.011415,  0.014652,  0.017121,  0.018453,
        3.5114e-05, 0.00040431, 0.0014018,  0.0030691, 0.0052231, 0.0075482, 0.0096891, 0.011322,  0.012202,
        1.5417e-05, 0.00017751, 0.00061546, 0.0013475, 0.0022932, 0.0033141, 0.0042541, 0.0049708, 0.0053576}}};
}


} // namespace Data
} // namespace XT
} // namespace Dune