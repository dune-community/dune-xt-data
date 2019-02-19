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
namespace GDT {
namespace internal {


template <>
std::vector<std::vector<std::vector<double>>> OctantQuadratureData<12>::get()
{
  return {
      {{0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557,
        0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525,
        0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557,
        0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525,
        0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557,
        0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525,
        0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557,
        0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525,
        0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525},
       {0.013008, 0.013008, 0.013008, 0.013008, 0.013008, 0.013008, 0.013008, 0.013008, 0.067445, 0.067445, 0.067445,
        0.067445, 0.067445, 0.067445, 0.067445, 0.067445, 0.16116,  0.16116,  0.16116,  0.16116,  0.16116,  0.16116,
        0.16116,  0.16116,  0.28781,  0.28781,  0.28781,  0.28781,  0.28781,  0.28781,  0.28781,  0.28781,  0.43963,
        0.43963,  0.43963,  0.43963,  0.43963,  0.43963,  0.43963,  0.43963,  0.60831,  0.60831,  0.60831,  0.60831,
        0.60831,  0.60831,  0.60831,  0.60831,  0.7854,   0.7854,   0.7854,   0.7854,   0.7854,   0.7854,   0.7854,
        0.7854,   0.96249,  0.96249,  0.96249,  0.96249,  0.96249,  0.96249,  0.96249,  0.96249,  1.1312,   1.1312,
        1.1312,   1.1312,   1.1312,   1.1312,   1.1312,   1.1312,   1.283,    1.283,    1.283,    1.283,    1.283,
        1.283,    1.283,    1.283,    1.4096,   1.4096,   1.4096,   1.4096,   1.4096,   1.4096,   1.4096,   1.4096,
        1.5034,   1.5034,   1.5034,   1.5034,   1.5034,   1.5034,   1.5034,   1.5034,   1.5578,   1.5578,   1.5578,
        1.5578,   1.5578,   1.5578,   1.5578,   1.5578},
       {3.593e-05,  0.00040765, 0.0013799, 0.0029293,  0.0048055, 0.006653,   0.0081185, 0.0089262,  8.0995e-05,
        0.00091893, 0.0031105,  0.0066033, 0.010833,   0.014997,  0.018301,   0.020122,  0.00012035, 0.0013654,
        0.0046218,  0.0098116,  0.016096,  0.022284,   0.027193,  0.029898,   0.0001519, 0.0017234,  0.0058336,
        0.012384,   0.020316,   0.028127,  0.034322,   0.037737,  0.00017466, 0.0019816, 0.0067075,  0.014239,
        0.023359,   0.03234,    0.039464,  0.04339,    0.0001883, 0.0021364,  0.0072316, 0.015352,   0.025185,
        0.034868,   0.042548,   0.046781,  0.00019284, 0.0021879, 0.007406,   0.015722,  0.025792,   0.035708,
        0.043574,   0.047908,   0.0001883, 0.0021364,  0.0072316, 0.015352,   0.025185,  0.034868,   0.042548,
        0.046781,   0.00017466, 0.0019816, 0.0067075,  0.014239,  0.023359,   0.03234,   0.039464,   0.04339,
        0.0001519,  0.0017234,  0.0058336, 0.012384,   0.020316,  0.028127,   0.034322,  0.037737,   0.00012035,
        0.0013654,  0.0046218,  0.0098116, 0.016096,   0.022284,  0.027193,   0.029898,  8.0995e-05, 0.00091893,
        0.0031105,  0.0066033,  0.010833,  0.014997,   0.018301,  0.020122,   3.593e-05, 0.00040765, 0.0013799,
        0.0029293,  0.0048055,  0.006653,  0.0081185,  0.0089262}},
      {{0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557,
        0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525,
        0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557,
        0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525,
        0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557,
        0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525,
        0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557,
        0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525,
        0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525},
       {1.5838, 1.5838, 1.5838, 1.5838, 1.5838, 1.5838, 1.5838, 1.5838, 1.6382, 1.6382, 1.6382, 1.6382, 1.6382,
        1.6382, 1.6382, 1.6382, 1.732,  1.732,  1.732,  1.732,  1.732,  1.732,  1.732,  1.732,  1.8586, 1.8586,
        1.8586, 1.8586, 1.8586, 1.8586, 1.8586, 1.8586, 2.0104, 2.0104, 2.0104, 2.0104, 2.0104, 2.0104, 2.0104,
        2.0104, 2.1791, 2.1791, 2.1791, 2.1791, 2.1791, 2.1791, 2.1791, 2.1791, 2.3562, 2.3562, 2.3562, 2.3562,
        2.3562, 2.3562, 2.3562, 2.3562, 2.5333, 2.5333, 2.5333, 2.5333, 2.5333, 2.5333, 2.5333, 2.5333, 2.702,
        2.702,  2.702,  2.702,  2.702,  2.702,  2.702,  2.702,  2.8538, 2.8538, 2.8538, 2.8538, 2.8538, 2.8538,
        2.8538, 2.8538, 2.9804, 2.9804, 2.9804, 2.9804, 2.9804, 2.9804, 2.9804, 2.9804, 3.0741, 3.0741, 3.0741,
        3.0741, 3.0741, 3.0741, 3.0741, 3.0741, 3.1286, 3.1286, 3.1286, 3.1286, 3.1286, 3.1286, 3.1286, 3.1286},
       {3.593e-05,  0.00040765, 0.0013799, 0.0029293,  0.0048055, 0.006653,   0.0081185, 0.0089262,  8.0995e-05,
        0.00091893, 0.0031105,  0.0066033, 0.010833,   0.014997,  0.018301,   0.020122,  0.00012035, 0.0013654,
        0.0046218,  0.0098116,  0.016096,  0.022284,   0.027193,  0.029898,   0.0001519, 0.0017234,  0.0058336,
        0.012384,   0.020316,   0.028127,  0.034322,   0.037737,  0.00017466, 0.0019816, 0.0067075,  0.014239,
        0.023359,   0.03234,    0.039464,  0.04339,    0.0001883, 0.0021364,  0.0072316, 0.015352,   0.025185,
        0.034868,   0.042548,   0.046781,  0.00019284, 0.0021879, 0.007406,   0.015722,  0.025792,   0.035708,
        0.043574,   0.047908,   0.0001883, 0.0021364,  0.0072316, 0.015352,   0.025185,  0.034868,   0.042548,
        0.046781,   0.00017466, 0.0019816, 0.0067075,  0.014239,  0.023359,   0.03234,   0.039464,   0.04339,
        0.0001519,  0.0017234,  0.0058336, 0.012384,   0.020316,  0.028127,   0.034322,  0.037737,   0.00012035,
        0.0013654,  0.0046218,  0.0098116, 0.016096,   0.022284,  0.027193,   0.029898,  8.0995e-05, 0.00091893,
        0.0031105,  0.0066033,  0.010833,  0.014997,   0.018301,  0.020122,   3.593e-05, 0.00040765, 0.0013799,
        0.0029293,  0.0048055,  0.006653,  0.0081185,  0.0089262}},
      {{0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557,
        0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525,
        0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557,
        0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525,
        0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557,
        0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525,
        0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557,
        0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525,
        0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525},
       {3.1546, 3.1546, 3.1546, 3.1546, 3.1546, 3.1546, 3.1546, 3.1546, 3.209,  3.209,  3.209,  3.209,  3.209,
        3.209,  3.209,  3.209,  3.3028, 3.3028, 3.3028, 3.3028, 3.3028, 3.3028, 3.3028, 3.3028, 3.4294, 3.4294,
        3.4294, 3.4294, 3.4294, 3.4294, 3.4294, 3.4294, 3.5812, 3.5812, 3.5812, 3.5812, 3.5812, 3.5812, 3.5812,
        3.5812, 3.7499, 3.7499, 3.7499, 3.7499, 3.7499, 3.7499, 3.7499, 3.7499, 3.927,  3.927,  3.927,  3.927,
        3.927,  3.927,  3.927,  3.927,  4.1041, 4.1041, 4.1041, 4.1041, 4.1041, 4.1041, 4.1041, 4.1041, 4.2728,
        4.2728, 4.2728, 4.2728, 4.2728, 4.2728, 4.2728, 4.2728, 4.4246, 4.4246, 4.4246, 4.4246, 4.4246, 4.4246,
        4.4246, 4.4246, 4.5512, 4.5512, 4.5512, 4.5512, 4.5512, 4.5512, 4.5512, 4.5512, 4.6449, 4.6449, 4.6449,
        4.6449, 4.6449, 4.6449, 4.6449, 4.6449, 4.6994, 4.6994, 4.6994, 4.6994, 4.6994, 4.6994, 4.6994, 4.6994},
       {3.593e-05,  0.00040765, 0.0013799, 0.0029293,  0.0048055, 0.006653,   0.0081185, 0.0089262,  8.0995e-05,
        0.00091893, 0.0031105,  0.0066033, 0.010833,   0.014997,  0.018301,   0.020122,  0.00012035, 0.0013654,
        0.0046218,  0.0098116,  0.016096,  0.022284,   0.027193,  0.029898,   0.0001519, 0.0017234,  0.0058336,
        0.012384,   0.020316,   0.028127,  0.034322,   0.037737,  0.00017466, 0.0019816, 0.0067075,  0.014239,
        0.023359,   0.03234,    0.039464,  0.04339,    0.0001883, 0.0021364,  0.0072316, 0.015352,   0.025185,
        0.034868,   0.042548,   0.046781,  0.00019284, 0.0021879, 0.007406,   0.015722,  0.025792,   0.035708,
        0.043574,   0.047908,   0.0001883, 0.0021364,  0.0072316, 0.015352,   0.025185,  0.034868,   0.042548,
        0.046781,   0.00017466, 0.0019816, 0.0067075,  0.014239,  0.023359,   0.03234,   0.039464,   0.04339,
        0.0001519,  0.0017234,  0.0058336, 0.012384,   0.020316,  0.028127,   0.034322,  0.037737,   0.00012035,
        0.0013654,  0.0046218,  0.0098116, 0.016096,   0.022284,  0.027193,   0.029898,  8.0995e-05, 0.00091893,
        0.0031105,  0.0066033,  0.010833,  0.014997,   0.018301,  0.020122,   3.593e-05, 0.00040765, 0.0013799,
        0.0029293,  0.0048055,  0.006653,  0.0081185,  0.0089262}},
      {{0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557,
        0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525,
        0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557,
        0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525,
        0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557,
        0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525,
        0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557,
        0.78967, 0.61686, 0.39342, 0.13525, 0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525,
        0.99979, 0.99442, 0.96915, 0.90557, 0.78967, 0.61686, 0.39342, 0.13525},
       {4.7254, 4.7254, 4.7254, 4.7254, 4.7254, 4.7254, 4.7254, 4.7254, 4.7798, 4.7798, 4.7798, 4.7798, 4.7798,
        4.7798, 4.7798, 4.7798, 4.8736, 4.8736, 4.8736, 4.8736, 4.8736, 4.8736, 4.8736, 4.8736, 5.0002, 5.0002,
        5.0002, 5.0002, 5.0002, 5.0002, 5.0002, 5.0002, 5.152,  5.152,  5.152,  5.152,  5.152,  5.152,  5.152,
        5.152,  5.3207, 5.3207, 5.3207, 5.3207, 5.3207, 5.3207, 5.3207, 5.3207, 5.4978, 5.4978, 5.4978, 5.4978,
        5.4978, 5.4978, 5.4978, 5.4978, 5.6749, 5.6749, 5.6749, 5.6749, 5.6749, 5.6749, 5.6749, 5.6749, 5.8436,
        5.8436, 5.8436, 5.8436, 5.8436, 5.8436, 5.8436, 5.8436, 5.9954, 5.9954, 5.9954, 5.9954, 5.9954, 5.9954,
        5.9954, 5.9954, 6.122,  6.122,  6.122,  6.122,  6.122,  6.122,  6.122,  6.122,  6.2157, 6.2157, 6.2157,
        6.2157, 6.2157, 6.2157, 6.2157, 6.2157, 6.2702, 6.2702, 6.2702, 6.2702, 6.2702, 6.2702, 6.2702, 6.2702},
       {3.593e-05,  0.00040765, 0.0013799, 0.0029293,  0.0048055, 0.006653,   0.0081185, 0.0089262,  8.0995e-05,
        0.00091893, 0.0031105,  0.0066033, 0.010833,   0.014997,  0.018301,   0.020122,  0.00012035, 0.0013654,
        0.0046218,  0.0098116,  0.016096,  0.022284,   0.027193,  0.029898,   0.0001519, 0.0017234,  0.0058336,
        0.012384,   0.020316,   0.028127,  0.034322,   0.037737,  0.00017466, 0.0019816, 0.0067075,  0.014239,
        0.023359,   0.03234,    0.039464,  0.04339,    0.0001883, 0.0021364,  0.0072316, 0.015352,   0.025185,
        0.034868,   0.042548,   0.046781,  0.00019284, 0.0021879, 0.007406,   0.015722,  0.025792,   0.035708,
        0.043574,   0.047908,   0.0001883, 0.0021364,  0.0072316, 0.015352,   0.025185,  0.034868,   0.042548,
        0.046781,   0.00017466, 0.0019816, 0.0067075,  0.014239,  0.023359,   0.03234,   0.039464,   0.04339,
        0.0001519,  0.0017234,  0.0058336, 0.012384,   0.020316,  0.028127,   0.034322,  0.037737,   0.00012035,
        0.0013654,  0.0046218,  0.0098116, 0.016096,   0.022284,  0.027193,   0.029898,  8.0995e-05, 0.00091893,
        0.0031105,  0.0066033,  0.010833,  0.014997,   0.018301,  0.020122,   3.593e-05, 0.00040765, 0.0013799,
        0.0029293,  0.0048055,  0.006653,  0.0081185,  0.0089262}},
      {{-0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915,
        -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686,
        -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979,
        -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557,
        -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342,
        -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442,
        -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967,
        -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525,
        -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915,
        -0.90557, -0.78967, -0.61686, -0.39342, -0.13525},
       {0.013008, 0.013008, 0.013008, 0.013008, 0.013008, 0.013008, 0.013008, 0.013008, 0.067445, 0.067445, 0.067445,
        0.067445, 0.067445, 0.067445, 0.067445, 0.067445, 0.16116,  0.16116,  0.16116,  0.16116,  0.16116,  0.16116,
        0.16116,  0.16116,  0.28781,  0.28781,  0.28781,  0.28781,  0.28781,  0.28781,  0.28781,  0.28781,  0.43963,
        0.43963,  0.43963,  0.43963,  0.43963,  0.43963,  0.43963,  0.43963,  0.60831,  0.60831,  0.60831,  0.60831,
        0.60831,  0.60831,  0.60831,  0.60831,  0.7854,   0.7854,   0.7854,   0.7854,   0.7854,   0.7854,   0.7854,
        0.7854,   0.96249,  0.96249,  0.96249,  0.96249,  0.96249,  0.96249,  0.96249,  0.96249,  1.1312,   1.1312,
        1.1312,   1.1312,   1.1312,   1.1312,   1.1312,   1.1312,   1.283,    1.283,    1.283,    1.283,    1.283,
        1.283,    1.283,    1.283,    1.4096,   1.4096,   1.4096,   1.4096,   1.4096,   1.4096,   1.4096,   1.4096,
        1.5034,   1.5034,   1.5034,   1.5034,   1.5034,   1.5034,   1.5034,   1.5034,   1.5578,   1.5578,   1.5578,
        1.5578,   1.5578,   1.5578,   1.5578,   1.5578},
       {3.593e-05,  0.00040765, 0.0013799, 0.0029293,  0.0048055, 0.006653,   0.0081185, 0.0089262,  8.0995e-05,
        0.00091893, 0.0031105,  0.0066033, 0.010833,   0.014997,  0.018301,   0.020122,  0.00012035, 0.0013654,
        0.0046218,  0.0098116,  0.016096,  0.022284,   0.027193,  0.029898,   0.0001519, 0.0017234,  0.0058336,
        0.012384,   0.020316,   0.028127,  0.034322,   0.037737,  0.00017466, 0.0019816, 0.0067075,  0.014239,
        0.023359,   0.03234,    0.039464,  0.04339,    0.0001883, 0.0021364,  0.0072316, 0.015352,   0.025185,
        0.034868,   0.042548,   0.046781,  0.00019284, 0.0021879, 0.007406,   0.015722,  0.025792,   0.035708,
        0.043574,   0.047908,   0.0001883, 0.0021364,  0.0072316, 0.015352,   0.025185,  0.034868,   0.042548,
        0.046781,   0.00017466, 0.0019816, 0.0067075,  0.014239,  0.023359,   0.03234,   0.039464,   0.04339,
        0.0001519,  0.0017234,  0.0058336, 0.012384,   0.020316,  0.028127,   0.034322,  0.037737,   0.00012035,
        0.0013654,  0.0046218,  0.0098116, 0.016096,   0.022284,  0.027193,   0.029898,  8.0995e-05, 0.00091893,
        0.0031105,  0.0066033,  0.010833,  0.014997,   0.018301,  0.020122,   3.593e-05, 0.00040765, 0.0013799,
        0.0029293,  0.0048055,  0.006653,  0.0081185,  0.0089262}},
      {{-0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915,
        -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686,
        -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979,
        -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557,
        -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342,
        -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442,
        -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967,
        -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525,
        -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915,
        -0.90557, -0.78967, -0.61686, -0.39342, -0.13525},
       {1.5838, 1.5838, 1.5838, 1.5838, 1.5838, 1.5838, 1.5838, 1.5838, 1.6382, 1.6382, 1.6382, 1.6382, 1.6382,
        1.6382, 1.6382, 1.6382, 1.732,  1.732,  1.732,  1.732,  1.732,  1.732,  1.732,  1.732,  1.8586, 1.8586,
        1.8586, 1.8586, 1.8586, 1.8586, 1.8586, 1.8586, 2.0104, 2.0104, 2.0104, 2.0104, 2.0104, 2.0104, 2.0104,
        2.0104, 2.1791, 2.1791, 2.1791, 2.1791, 2.1791, 2.1791, 2.1791, 2.1791, 2.3562, 2.3562, 2.3562, 2.3562,
        2.3562, 2.3562, 2.3562, 2.3562, 2.5333, 2.5333, 2.5333, 2.5333, 2.5333, 2.5333, 2.5333, 2.5333, 2.702,
        2.702,  2.702,  2.702,  2.702,  2.702,  2.702,  2.702,  2.8538, 2.8538, 2.8538, 2.8538, 2.8538, 2.8538,
        2.8538, 2.8538, 2.9804, 2.9804, 2.9804, 2.9804, 2.9804, 2.9804, 2.9804, 2.9804, 3.0741, 3.0741, 3.0741,
        3.0741, 3.0741, 3.0741, 3.0741, 3.0741, 3.1286, 3.1286, 3.1286, 3.1286, 3.1286, 3.1286, 3.1286, 3.1286},
       {3.593e-05,  0.00040765, 0.0013799, 0.0029293,  0.0048055, 0.006653,   0.0081185, 0.0089262,  8.0995e-05,
        0.00091893, 0.0031105,  0.0066033, 0.010833,   0.014997,  0.018301,   0.020122,  0.00012035, 0.0013654,
        0.0046218,  0.0098116,  0.016096,  0.022284,   0.027193,  0.029898,   0.0001519, 0.0017234,  0.0058336,
        0.012384,   0.020316,   0.028127,  0.034322,   0.037737,  0.00017466, 0.0019816, 0.0067075,  0.014239,
        0.023359,   0.03234,    0.039464,  0.04339,    0.0001883, 0.0021364,  0.0072316, 0.015352,   0.025185,
        0.034868,   0.042548,   0.046781,  0.00019284, 0.0021879, 0.007406,   0.015722,  0.025792,   0.035708,
        0.043574,   0.047908,   0.0001883, 0.0021364,  0.0072316, 0.015352,   0.025185,  0.034868,   0.042548,
        0.046781,   0.00017466, 0.0019816, 0.0067075,  0.014239,  0.023359,   0.03234,   0.039464,   0.04339,
        0.0001519,  0.0017234,  0.0058336, 0.012384,   0.020316,  0.028127,   0.034322,  0.037737,   0.00012035,
        0.0013654,  0.0046218,  0.0098116, 0.016096,   0.022284,  0.027193,   0.029898,  8.0995e-05, 0.00091893,
        0.0031105,  0.0066033,  0.010833,  0.014997,   0.018301,  0.020122,   3.593e-05, 0.00040765, 0.0013799,
        0.0029293,  0.0048055,  0.006653,  0.0081185,  0.0089262}},
      {{-0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915,
        -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686,
        -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979,
        -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557,
        -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342,
        -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442,
        -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967,
        -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525,
        -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915,
        -0.90557, -0.78967, -0.61686, -0.39342, -0.13525},
       {3.1546, 3.1546, 3.1546, 3.1546, 3.1546, 3.1546, 3.1546, 3.1546, 3.209,  3.209,  3.209,  3.209,  3.209,
        3.209,  3.209,  3.209,  3.3028, 3.3028, 3.3028, 3.3028, 3.3028, 3.3028, 3.3028, 3.3028, 3.4294, 3.4294,
        3.4294, 3.4294, 3.4294, 3.4294, 3.4294, 3.4294, 3.5812, 3.5812, 3.5812, 3.5812, 3.5812, 3.5812, 3.5812,
        3.5812, 3.7499, 3.7499, 3.7499, 3.7499, 3.7499, 3.7499, 3.7499, 3.7499, 3.927,  3.927,  3.927,  3.927,
        3.927,  3.927,  3.927,  3.927,  4.1041, 4.1041, 4.1041, 4.1041, 4.1041, 4.1041, 4.1041, 4.1041, 4.2728,
        4.2728, 4.2728, 4.2728, 4.2728, 4.2728, 4.2728, 4.2728, 4.4246, 4.4246, 4.4246, 4.4246, 4.4246, 4.4246,
        4.4246, 4.4246, 4.5512, 4.5512, 4.5512, 4.5512, 4.5512, 4.5512, 4.5512, 4.5512, 4.6449, 4.6449, 4.6449,
        4.6449, 4.6449, 4.6449, 4.6449, 4.6449, 4.6994, 4.6994, 4.6994, 4.6994, 4.6994, 4.6994, 4.6994, 4.6994},
       {3.593e-05,  0.00040765, 0.0013799, 0.0029293,  0.0048055, 0.006653,   0.0081185, 0.0089262,  8.0995e-05,
        0.00091893, 0.0031105,  0.0066033, 0.010833,   0.014997,  0.018301,   0.020122,  0.00012035, 0.0013654,
        0.0046218,  0.0098116,  0.016096,  0.022284,   0.027193,  0.029898,   0.0001519, 0.0017234,  0.0058336,
        0.012384,   0.020316,   0.028127,  0.034322,   0.037737,  0.00017466, 0.0019816, 0.0067075,  0.014239,
        0.023359,   0.03234,    0.039464,  0.04339,    0.0001883, 0.0021364,  0.0072316, 0.015352,   0.025185,
        0.034868,   0.042548,   0.046781,  0.00019284, 0.0021879, 0.007406,   0.015722,  0.025792,   0.035708,
        0.043574,   0.047908,   0.0001883, 0.0021364,  0.0072316, 0.015352,   0.025185,  0.034868,   0.042548,
        0.046781,   0.00017466, 0.0019816, 0.0067075,  0.014239,  0.023359,   0.03234,   0.039464,   0.04339,
        0.0001519,  0.0017234,  0.0058336, 0.012384,   0.020316,  0.028127,   0.034322,  0.037737,   0.00012035,
        0.0013654,  0.0046218,  0.0098116, 0.016096,   0.022284,  0.027193,   0.029898,  8.0995e-05, 0.00091893,
        0.0031105,  0.0066033,  0.010833,  0.014997,   0.018301,  0.020122,   3.593e-05, 0.00040765, 0.0013799,
        0.0029293,  0.0048055,  0.006653,  0.0081185,  0.0089262}},
      {{-0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915,
        -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686,
        -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979,
        -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557,
        -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342,
        -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442,
        -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967,
        -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525,
        -0.99979, -0.99442, -0.96915, -0.90557, -0.78967, -0.61686, -0.39342, -0.13525, -0.99979, -0.99442, -0.96915,
        -0.90557, -0.78967, -0.61686, -0.39342, -0.13525},
       {4.7254, 4.7254, 4.7254, 4.7254, 4.7254, 4.7254, 4.7254, 4.7254, 4.7798, 4.7798, 4.7798, 4.7798, 4.7798,
        4.7798, 4.7798, 4.7798, 4.8736, 4.8736, 4.8736, 4.8736, 4.8736, 4.8736, 4.8736, 4.8736, 5.0002, 5.0002,
        5.0002, 5.0002, 5.0002, 5.0002, 5.0002, 5.0002, 5.152,  5.152,  5.152,  5.152,  5.152,  5.152,  5.152,
        5.152,  5.3207, 5.3207, 5.3207, 5.3207, 5.3207, 5.3207, 5.3207, 5.3207, 5.4978, 5.4978, 5.4978, 5.4978,
        5.4978, 5.4978, 5.4978, 5.4978, 5.6749, 5.6749, 5.6749, 5.6749, 5.6749, 5.6749, 5.6749, 5.6749, 5.8436,
        5.8436, 5.8436, 5.8436, 5.8436, 5.8436, 5.8436, 5.8436, 5.9954, 5.9954, 5.9954, 5.9954, 5.9954, 5.9954,
        5.9954, 5.9954, 6.122,  6.122,  6.122,  6.122,  6.122,  6.122,  6.122,  6.122,  6.2157, 6.2157, 6.2157,
        6.2157, 6.2157, 6.2157, 6.2157, 6.2157, 6.2702, 6.2702, 6.2702, 6.2702, 6.2702, 6.2702, 6.2702, 6.2702},
       {3.593e-05,  0.00040765, 0.0013799, 0.0029293,  0.0048055, 0.006653,   0.0081185, 0.0089262,  8.0995e-05,
        0.00091893, 0.0031105,  0.0066033, 0.010833,   0.014997,  0.018301,   0.020122,  0.00012035, 0.0013654,
        0.0046218,  0.0098116,  0.016096,  0.022284,   0.027193,  0.029898,   0.0001519, 0.0017234,  0.0058336,
        0.012384,   0.020316,   0.028127,  0.034322,   0.037737,  0.00017466, 0.0019816, 0.0067075,  0.014239,
        0.023359,   0.03234,    0.039464,  0.04339,    0.0001883, 0.0021364,  0.0072316, 0.015352,   0.025185,
        0.034868,   0.042548,   0.046781,  0.00019284, 0.0021879, 0.007406,   0.015722,  0.025792,   0.035708,
        0.043574,   0.047908,   0.0001883, 0.0021364,  0.0072316, 0.015352,   0.025185,  0.034868,   0.042548,
        0.046781,   0.00017466, 0.0019816, 0.0067075,  0.014239,  0.023359,   0.03234,   0.039464,   0.04339,
        0.0001519,  0.0017234,  0.0058336, 0.012384,   0.020316,  0.028127,   0.034322,  0.037737,   0.00012035,
        0.0013654,  0.0046218,  0.0098116, 0.016096,   0.022284,  0.027193,   0.029898,  8.0995e-05, 0.00091893,
        0.0031105,  0.0066033,  0.010833,  0.014997,   0.018301,  0.020122,   3.593e-05, 0.00040765, 0.0013799,
        0.0029293,  0.0048055,  0.006653,  0.0081185,  0.0089262}}};
}


} // namespace internal
} // namespace GDT
} // namespace Dune
