// This file is part of the dune-gdt project:
//   https://github.com/dune-community/dune-gdt
// Copyright 2010-2017, dune-gdt developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner  (2017)

#include "../lebedev_data.hh"

namespace Dune {
namespace GDT {
namespace Hyperbolic {
namespace Problems {
namespace internal {


template <>
void LebedevData<31>::get(std::vector<std::pair<std::array<double, 3>, double>>& quad_rule)
{
  quad_rule = {{{-1, 1.22464679914735e-16, 6.12323399573677e-17}, 0.0377845223156894},
               {{1, -2.44929359829471e-16, 6.12323399573677e-17}, 0.0377845223156894},
               {{-1.83697019872103e-16, -1, 6.12323399573677e-17}, 0.0377845223156894},
               {{6.12323399573677e-17, 1, 6.12323399573677e-17}, 0.0377845223156894},
               {{-0, -0, 1}, 0.0377845223156894},
               {{-2.24963967399279e-32, -1.22464679914735e-16, -1}, 0.0377845223156894},
               {{-0.577350269189626, -0.577350269189626, 0.577350269189626}, 0.0383353188582975},
               {{-0.577350269189626, -0.577350269189626, -0.577350269189626}, 0.0383353188582975},
               {{-0.577350269189626, 0.577350269189626, 0.577350269189626}, 0.0383353188582975},
               {{-0.577350269189626, 0.577350269189626, -0.577350269189626}, 0.0383353188582975},
               {{0.577350269189626, -0.577350269189626, 0.577350269189626}, 0.0383353188582975},
               {{0.577350269189626, -0.577350269189626, -0.577350269189626}, 0.0383353188582975},
               {{0.577350269189626, 0.577350269189626, 0.577350269189626}, 0.0383353188582975},
               {{0.577350269189626, 0.577350269189626, -0.577350269189626}, 0.0383353188582975},
               {{-0.706896546391232, -0.706896546391232, 0.0243833016693557}, 0.0203714012118742},
               {{-0.706896546391232, -0.706896546391232, -0.0243833016693558}, 0.0203714012118742},
               {{-0.706896546391232, 0.706896546391232, 0.0243833016693557}, 0.0203714012118742},
               {{-0.706896546391232, 0.706896546391232, -0.0243833016693558}, 0.0203714012118742},
               {{0.706896546391231, -0.706896546391232, 0.0243833016693557}, 0.0203714012118742},
               {{0.706896546391231, -0.706896546391232, -0.0243833016693558}, 0.0203714012118742},
               {{0.706896546391232, 0.706896546391232, 0.0243833016693557}, 0.0203714012118742},
               {{0.706896546391232, 0.706896546391232, -0.0243833016693558}, 0.0203714012118742},
               {{-0.706896546391232, -0.0243833016693564, 0.706896546391231}, 0.0203714012118742},
               {{-0.706896546391232, 0.0243833016693565, 0.706896546391231}, 0.0203714012118742},
               {{-0.706896546391232, -0.0243833016693564, -0.706896546391232}, 0.0203714012118742},
               {{-0.706896546391232, 0.0243833016693565, -0.706896546391232}, 0.0203714012118742},
               {{0.706896546391232, -0.0243833016693563, 0.706896546391231}, 0.0203714012118742},
               {{0.706896546391232, 0.0243833016693565, 0.706896546391231}, 0.0203714012118742},
               {{0.706896546391232, -0.0243833016693563, -0.706896546391232}, 0.0203714012118742},
               {{0.706896546391232, 0.0243833016693565, -0.706896546391232}, 0.0203714012118742},
               {{-0.0243833016693563, -0.706896546391232, 0.706896546391231}, 0.0203714012118742},
               {{0.024383301669356, -0.706896546391232, 0.706896546391231}, 0.0203714012118742},
               {{-0.0243833016693563, -0.706896546391232, -0.706896546391232}, 0.0203714012118742},
               {{0.024383301669356, -0.706896546391232, -0.706896546391232}, 0.0203714012118742},
               {{-0.0243833016693558, 0.706896546391232, 0.706896546391231}, 0.0203714012118742},
               {{0.0243833016693559, 0.706896546391232, 0.706896546391231}, 0.0203714012118742},
               {{-0.0243833016693558, 0.706896546391232, -0.706896546391232}, 0.0203714012118742},
               {{0.0243833016693559, 0.706896546391232, -0.706896546391232}, 0.0203714012118742},
               {{-0.479468262571203, -0.479468262571203, 0.734996850587746}, 0.0377707588154082},
               {{-0.479468262571203, -0.479468262571203, -0.734996850587746}, 0.0377707588154082},
               {{-0.479468262571203, 0.479468262571203, 0.734996850587746}, 0.0377707588154082},
               {{-0.479468262571203, 0.479468262571203, -0.734996850587746}, 0.0377707588154082},
               {{0.479468262571202, -0.479468262571203, 0.734996850587746}, 0.0377707588154082},
               {{0.479468262571202, -0.479468262571203, -0.734996850587746}, 0.0377707588154082},
               {{0.479468262571203, 0.479468262571203, 0.734996850587746}, 0.0377707588154082},
               {{0.479468262571203, 0.479468262571203, -0.734996850587746}, 0.0377707588154082},
               {{-0.479468262571203, -0.734996850587745, 0.479468262571202}, 0.0377707588154082},
               {{-0.479468262571202, 0.734996850587746, 0.479468262571202}, 0.0377707588154082},
               {{-0.479468262571203, -0.734996850587745, -0.479468262571203}, 0.0377707588154082},
               {{-0.479468262571202, 0.734996850587746, -0.479468262571203}, 0.0377707588154082},
               {{0.479468262571202, -0.734996850587746, 0.479468262571202}, 0.0377707588154082},
               {{0.479468262571203, 0.734996850587746, 0.479468262571202}, 0.0377707588154082},
               {{0.479468262571202, -0.734996850587746, -0.479468262571203}, 0.0377707588154082},
               {{0.479468262571203, 0.734996850587746, -0.479468262571203}, 0.0377707588154082},
               {{-0.734996850587746, -0.479468262571202, 0.479468262571202}, 0.0377707588154082},
               {{0.734996850587745, -0.479468262571203, 0.479468262571202}, 0.0377707588154082},
               {{-0.734996850587746, -0.479468262571202, -0.479468262571203}, 0.0377707588154082},
               {{0.734996850587745, -0.479468262571203, -0.479468262571203}, 0.0377707588154082},
               {{-0.734996850587745, 0.479468262571203, 0.479468262571202}, 0.0377707588154082},
               {{0.734996850587746, 0.479468262571202, 0.479468262571202}, 0.0377707588154082},
               {{-0.734996850587745, 0.479468262571203, -0.479468262571203}, 0.0377707588154082},
               {{0.734996850587746, 0.479468262571202, -0.479468262571203}, 0.0377707588154082},
               {{-0.192753315487802, -0.192753315487802, 0.962129055136014}, 0.0375859206324118},
               {{-0.192753315487802, -0.192753315487802, -0.962129055136014}, 0.0375859206324118},
               {{-0.192753315487802, 0.192753315487802, 0.962129055136014}, 0.0375859206324118},
               {{-0.192753315487802, 0.192753315487802, -0.962129055136014}, 0.0375859206324118},
               {{0.192753315487802, -0.192753315487802, 0.962129055136014}, 0.0375859206324118},
               {{0.192753315487802, -0.192753315487802, -0.962129055136014}, 0.0375859206324118},
               {{0.192753315487802, 0.192753315487802, 0.962129055136014}, 0.0375859206324118},
               {{0.192753315487802, 0.192753315487802, -0.962129055136014}, 0.0375859206324118},
               {{-0.192753315487802, -0.962129055136014, 0.192753315487802}, 0.0375859206324118},
               {{-0.192753315487802, 0.962129055136014, 0.192753315487802}, 0.0375859206324118},
               {{-0.192753315487802, -0.962129055136014, -0.192753315487802}, 0.0375859206324118},
               {{-0.192753315487802, 0.962129055136014, -0.192753315487802}, 0.0375859206324118},
               {{0.192753315487802, -0.962129055136014, 0.192753315487802}, 0.0375859206324118},
               {{0.192753315487802, 0.962129055136014, 0.192753315487802}, 0.0375859206324118},
               {{0.192753315487802, -0.962129055136014, -0.192753315487802}, 0.0375859206324118},
               {{0.192753315487802, 0.962129055136014, -0.192753315487802}, 0.0375859206324118},
               {{-0.962129055136014, -0.192753315487802, 0.192753315487802}, 0.0375859206324118},
               {{0.962129055136014, -0.192753315487802, 0.192753315487802}, 0.0375859206324118},
               {{-0.962129055136014, -0.192753315487802, -0.192753315487802}, 0.0375859206324118},
               {{0.962129055136014, -0.192753315487802, -0.192753315487802}, 0.0375859206324118},
               {{-0.962129055136014, 0.192753315487802, 0.192753315487802}, 0.0375859206324118},
               {{0.962129055136014, 0.192753315487802, 0.192753315487802}, 0.0375859206324118},
               {{-0.962129055136014, 0.192753315487802, -0.192753315487802}, 0.0375859206324118},
               {{0.962129055136014, 0.192753315487802, -0.192753315487802}, 0.0375859206324118},
               {{-0.693035796132712, -0.693035796132712, 0.198501311223365}, 0.0374750615491233},
               {{-0.693035796132712, -0.693035796132712, -0.198501311223365}, 0.0374750615491233},
               {{-0.693035796132712, 0.693035796132712, 0.198501311223365}, 0.0374750615491233},
               {{-0.693035796132712, 0.693035796132712, -0.198501311223365}, 0.0374750615491233},
               {{0.693035796132712, -0.693035796132712, 0.198501311223365}, 0.0374750615491233},
               {{0.693035796132712, -0.693035796132712, -0.198501311223365}, 0.0374750615491233},
               {{0.693035796132712, 0.693035796132712, 0.198501311223365}, 0.0374750615491233},
               {{0.693035796132712, 0.693035796132712, -0.198501311223365}, 0.0374750615491233},
               {{-0.693035796132712, -0.198501311223365, 0.693035796132712}, 0.0374750615491233},
               {{-0.693035796132712, 0.198501311223366, 0.693035796132712}, 0.0374750615491233},
               {{-0.693035796132712, -0.198501311223366, -0.693035796132712}, 0.0374750615491233},
               {{-0.693035796132712, 0.198501311223366, -0.693035796132712}, 0.0374750615491233},
               {{0.693035796132712, -0.198501311223365, 0.693035796132712}, 0.0374750615491233},
               {{0.693035796132712, 0.198501311223365, 0.693035796132712}, 0.0374750615491233},
               {{0.693035796132712, -0.198501311223365, -0.693035796132712}, 0.0374750615491233},
               {{0.693035796132712, 0.198501311223365, -0.693035796132712}, 0.0374750615491233},
               {{-0.198501311223365, -0.693035796132712, 0.693035796132712}, 0.0374750615491233},
               {{0.198501311223365, -0.693035796132712, 0.693035796132712}, 0.0374750615491233},
               {{-0.198501311223365, -0.693035796132712, -0.693035796132712}, 0.0374750615491233},
               {{0.198501311223365, -0.693035796132712, -0.693035796132712}, 0.0374750615491233},
               {{-0.198501311223365, 0.693035796132712, 0.693035796132712}, 0.0374750615491233},
               {{0.198501311223365, 0.693035796132712, 0.693035796132712}, 0.0374750615491233},
               {{-0.198501311223365, 0.693035796132712, -0.693035796132712}, 0.0374750615491233},
               {{0.198501311223365, 0.693035796132712, -0.693035796132712}, 0.0374750615491233},
               {{-0.360830211552009, -0.360830211552009, 0.860001812127547}, 0.0342001848568358},
               {{-0.360830211552009, -0.360830211552009, -0.860001812127547}, 0.0342001848568358},
               {{-0.360830211552009, 0.360830211552009, 0.860001812127547}, 0.0342001848568358},
               {{-0.360830211552009, 0.360830211552009, -0.860001812127547}, 0.0342001848568358},
               {{0.360830211552009, -0.360830211552009, 0.860001812127547}, 0.0342001848568358},
               {{0.360830211552009, -0.360830211552009, -0.860001812127547}, 0.0342001848568358},
               {{0.360830211552009, 0.360830211552009, 0.860001812127547}, 0.0342001848568358},
               {{0.360830211552009, 0.360830211552009, -0.860001812127547}, 0.0342001848568358},
               {{-0.36083021155201, -0.860001812127547, 0.360830211552009}, 0.0342001848568358},
               {{-0.360830211552009, 0.860001812127547, 0.360830211552009}, 0.0342001848568358},
               {{-0.36083021155201, -0.860001812127547, -0.360830211552009}, 0.0342001848568358},
               {{-0.360830211552009, 0.860001812127547, -0.360830211552009}, 0.0342001848568358},
               {{0.360830211552009, -0.860001812127547, 0.360830211552009}, 0.0342001848568358},
               {{0.360830211552009, 0.860001812127547, 0.360830211552009}, 0.0342001848568358},
               {{0.360830211552009, -0.860001812127547, -0.360830211552009}, 0.0342001848568358},
               {{0.360830211552009, 0.860001812127547, -0.360830211552009}, 0.0342001848568358},
               {{-0.860001812127547, -0.360830211552009, 0.360830211552009}, 0.0342001848568358},
               {{0.860001812127547, -0.36083021155201, 0.360830211552009}, 0.0342001848568358},
               {{-0.860001812127547, -0.360830211552009, -0.360830211552009}, 0.0342001848568358},
               {{0.860001812127547, -0.36083021155201, -0.360830211552009}, 0.0342001848568358},
               {{-0.860001812127547, 0.360830211552009, 0.360830211552009}, 0.0342001848568358},
               {{0.860001812127547, 0.360830211552009, 0.360830211552009}, 0.0342001848568358},
               {{-0.860001812127547, 0.360830211552009, -0.360830211552009}, 0.0342001848568358},
               {{0.860001812127547, 0.360830211552009, -0.360830211552009}, 0.0342001848568358},
               {{-0.649848616149617, -0.649848616149617, 0.394199888605839}, 0.0381202586219325},
               {{-0.649848616149617, -0.649848616149617, -0.394199888605839}, 0.0381202586219325},
               {{-0.649848616149617, 0.649848616149617, 0.394199888605839}, 0.0381202586219325},
               {{-0.649848616149617, 0.649848616149617, -0.394199888605839}, 0.0381202586219325},
               {{0.649848616149617, -0.649848616149617, 0.394199888605839}, 0.0381202586219325},
               {{0.649848616149617, -0.649848616149617, -0.394199888605839}, 0.0381202586219325},
               {{0.649848616149617, 0.649848616149617, 0.394199888605839}, 0.0381202586219325},
               {{0.649848616149617, 0.649848616149617, -0.394199888605839}, 0.0381202586219325},
               {{-0.649848616149617, -0.394199888605839, 0.649848616149617}, 0.0381202586219325},
               {{-0.649848616149617, 0.394199888605839, 0.649848616149617}, 0.0381202586219325},
               {{-0.649848616149617, -0.394199888605839, -0.649848616149617}, 0.0381202586219325},
               {{-0.649848616149617, 0.394199888605839, -0.649848616149617}, 0.0381202586219325},
               {{0.649848616149617, -0.394199888605839, 0.649848616149617}, 0.0381202586219325},
               {{0.649848616149617, 0.394199888605839, 0.649848616149617}, 0.0381202586219325},
               {{0.649848616149616, -0.394199888605839, -0.649848616149617}, 0.0381202586219325},
               {{0.649848616149617, 0.394199888605839, -0.649848616149617}, 0.0381202586219325},
               {{-0.394199888605839, -0.649848616149617, 0.649848616149617}, 0.0381202586219325},
               {{0.394199888605839, -0.649848616149617, 0.649848616149617}, 0.0381202586219325},
               {{-0.394199888605839, -0.649848616149616, -0.649848616149617}, 0.0381202586219325},
               {{0.394199888605839, -0.649848616149616, -0.649848616149617}, 0.0381202586219325},
               {{-0.394199888605839, 0.649848616149617, 0.649848616149617}, 0.0381202586219325},
               {{0.394199888605839, 0.649848616149617, 0.649848616149617}, 0.0381202586219325},
               {{-0.394199888605839, 0.649848616149617, -0.649848616149617}, 0.0381202586219325},
               {{0.394199888605839, 0.649848616149617, -0.649848616149617}, 0.0381202586219325},
               {{-0.193294501323034, -0.981140782843257, 6.12323399573677e-17}, 0.0377990089001788},
               {{-0.193294501323034, 0.981140782843257, 6.12323399573677e-17}, 0.0377990089001788},
               {{0.193294501323034, -0.981140782843257, 6.12323399573677e-17}, 0.0377990089001788},
               {{0.193294501323034, 0.981140782843257, 6.12323399573677e-17}, 0.0377990089001788},
               {{-0.981140782843257, -0.193294501323034, 6.12323399573677e-17}, 0.0377990089001788},
               {{-0.981140782843257, 0.193294501323034, 6.12323399573677e-17}, 0.0377990089001788},
               {{0.981140782843257, -0.193294501323034, 6.12323399573677e-17}, 0.0377990089001788},
               {{0.981140782843257, 0.193294501323034, 6.12323399573677e-17}, 0.0377990089001788},
               {{-0.193294501323034, 2.36717492338037e-17, 0.981140782843257}, 0.0377990089001788},
               {{-0.193294501323034, 2.36717492338038e-17, -0.981140782843257}, 0.0377990089001788},
               {{0.193294501323034, -4.73434984676075e-17, 0.981140782843257}, 0.0377990089001788},
               {{0.193294501323034, -4.73434984676075e-17, -0.981140782843257}, 0.0377990089001788},
               {{-0.981140782843257, 1.20155091922192e-16, 0.193294501323034}, 0.0377990089001788},
               {{-0.981140782843257, 1.20155091922192e-16, -0.193294501323034}, 0.0377990089001788},
               {{0.981140782843257, -2.40310183844385e-16, 0.193294501323034}, 0.0377990089001788},
               {{0.981140782843257, -2.40310183844385e-16, -0.193294501323034}, 0.0377990089001788},
               {{-3.55076238507056e-17, -0.193294501323034, 0.981140782843257}, 0.0377990089001788},
               {{-3.55076238507056e-17, -0.193294501323034, -0.981140782843257}, 0.0377990089001788},
               {{1.18358746169019e-17, 0.193294501323034, 0.981140782843257}, 0.0377990089001788},
               {{1.18358746169019e-17, 0.193294501323034, -0.981140782843257}, 0.0377990089001788},
               {{-1.80232637883288e-16, -0.981140782843257, 0.193294501323034}, 0.0377990089001788},
               {{-1.80232637883288e-16, -0.981140782843257, -0.193294501323034}, 0.0377990089001788},
               {{6.00775459610962e-17, 0.981140782843257, 0.193294501323034}, 0.0377990089001788},
               {{6.00775459610962e-17, 0.981140782843257, -0.193294501323034}, 0.0377990089001788},
               {{-0.38004949198993, -0.924966152698679, 6.12323399573677e-17}, 0.0362158352994537},
               {{-0.38004949198993, 0.924966152698679, 6.12323399573677e-17}, 0.0362158352994537},
               {{0.380049491989931, -0.924966152698679, 6.12323399573677e-17}, 0.0362158352994537},
               {{0.38004949198993, 0.924966152698679, 6.12323399573677e-17}, 0.0362158352994537},
               {{-0.924966152698679, -0.38004949198993, 6.12323399573677e-17}, 0.0362158352994537},
               {{-0.924966152698679, 0.380049491989931, 6.12323399573677e-17}, 0.0362158352994537},
               {{0.924966152698679, -0.38004949198993, 6.12323399573677e-17}, 0.0362158352994537},
               {{0.924966152698679, 0.38004949198993, 6.12323399573677e-17}, 0.0362158352994537},
               {{-0.38004949198993, 4.65426393883046e-17, 0.924966152698679}, 0.0362158352994537},
               {{-0.38004949198993, 4.65426393883046e-17, -0.924966152698679}, 0.0362158352994537},
               {{0.38004949198993, -9.30852787766092e-17, 0.924966152698679}, 0.0362158352994537},
               {{0.38004949198993, -9.30852787766091e-17, -0.924966152698679}, 0.0362158352994537},
               {{-0.924966152698679, 1.13275683822208e-16, 0.38004949198993}, 0.0362158352994537},
               {{-0.924966152698679, 1.13275683822208e-16, -0.38004949198993}, 0.0362158352994537},
               {{0.924966152698679, -2.26551367644416e-16, 0.38004949198993}, 0.0362158352994537},
               {{0.924966152698679, -2.26551367644416e-16, -0.38004949198993}, 0.0362158352994537},
               {{-6.98139590824569e-17, -0.38004949198993, 0.924966152698679}, 0.0362158352994537},
               {{-6.98139590824568e-17, -0.38004949198993, -0.924966152698679}, 0.0362158352994537},
               {{2.32713196941523e-17, 0.38004949198993, 0.924966152698679}, 0.0362158352994537},
               {{2.32713196941523e-17, 0.38004949198993, -0.924966152698679}, 0.0362158352994537},
               {{-1.69913525733312e-16, -0.924966152698679, 0.38004949198993}, 0.0362158352994537},
               {{-1.69913525733312e-16, -0.924966152698679, -0.38004949198993}, 0.0362158352994537},
               {{5.6637841911104e-17, 0.924966152698679, 0.38004949198993}, 0.0362158352994537},
               {{5.6637841911104e-17, 0.924966152698679, -0.38004949198993}, 0.0362158352994537},
               {{-0.289955882549958, -0.793453785658231, 0.535123047718276}, 0.0371758183448673},
               {{-0.289955882549958, -0.793453785658231, -0.535123047718276}, 0.0371758183448673},
               {{-0.289955882549957, 0.793453785658232, 0.535123047718276}, 0.0371758183448673},
               {{-0.289955882549957, 0.793453785658232, -0.535123047718276}, 0.0371758183448673},
               {{0.289955882549958, -0.793453785658231, 0.535123047718276}, 0.0371758183448673},
               {{0.289955882549958, -0.793453785658232, -0.535123047718276}, 0.0371758183448673},
               {{0.289955882549958, 0.793453785658231, 0.535123047718276}, 0.0371758183448673},
               {{0.289955882549958, 0.793453785658232, -0.535123047718276}, 0.0371758183448673},
               {{-0.289955882549958, -0.535123047718276, 0.793453785658232}, 0.0371758183448673},
               {{-0.289955882549958, -0.535123047718276, -0.793453785658232}, 0.0371758183448673},
               {{-0.289955882549957, 0.535123047718276, 0.793453785658232}, 0.0371758183448673},
               {{-0.289955882549957, 0.535123047718276, -0.793453785658232}, 0.0371758183448673},
               {{0.289955882549957, -0.535123047718276, 0.793453785658232}, 0.0371758183448673},
               {{0.289955882549957, -0.535123047718276, -0.793453785658232}, 0.0371758183448673},
               {{0.289955882549958, 0.535123047718276, 0.793453785658232}, 0.0371758183448673},
               {{0.289955882549958, 0.535123047718276, -0.793453785658232}, 0.0371758183448673},
               {{-0.793453785658231, -0.289955882549958, 0.535123047718276}, 0.0371758183448673},
               {{-0.793453785658232, -0.289955882549958, -0.535123047718276}, 0.0371758183448673},
               {{-0.793453785658231, 0.289955882549958, 0.535123047718276}, 0.0371758183448673},
               {{-0.793453785658231, 0.289955882549958, -0.535123047718276}, 0.0371758183448673},
               {{0.793453785658232, -0.289955882549957, 0.535123047718276}, 0.0371758183448673},
               {{0.793453785658232, -0.289955882549957, -0.535123047718276}, 0.0371758183448673},
               {{0.793453785658232, 0.289955882549957, 0.535123047718276}, 0.0371758183448673},
               {{0.793453785658232, 0.289955882549957, -0.535123047718276}, 0.0371758183448673},
               {{-0.793453785658232, -0.535123047718276, 0.289955882549957}, 0.0371758183448673},
               {{-0.793453785658232, -0.535123047718276, -0.289955882549957}, 0.0371758183448673},
               {{-0.793453785658232, 0.535123047718276, 0.289955882549957}, 0.0371758183448673},
               {{-0.793453785658231, 0.535123047718276, -0.289955882549957}, 0.0371758183448673},
               {{0.793453785658231, -0.535123047718277, 0.289955882549957}, 0.0371758183448673},
               {{0.793453785658231, -0.535123047718277, -0.289955882549957}, 0.0371758183448673},
               {{0.793453785658232, 0.535123047718276, 0.289955882549957}, 0.0371758183448673},
               {{0.793453785658232, 0.535123047718276, -0.289955882549957}, 0.0371758183448673},
               {{-0.535123047718276, -0.289955882549957, 0.793453785658232}, 0.0371758183448673},
               {{-0.535123047718276, -0.289955882549957, -0.793453785658232}, 0.0371758183448673},
               {{-0.535123047718276, 0.289955882549958, 0.793453785658232}, 0.0371758183448673},
               {{-0.535123047718276, 0.289955882549958, -0.793453785658232}, 0.0371758183448673},
               {{0.535123047718276, -0.289955882549957, 0.793453785658232}, 0.0371758183448673},
               {{0.535123047718276, -0.289955882549957, -0.793453785658232}, 0.0371758183448673},
               {{0.535123047718276, 0.289955882549957, 0.793453785658232}, 0.0371758183448673},
               {{0.535123047718276, 0.289955882549957, -0.793453785658232}, 0.0371758183448673},
               {{-0.535123047718276, -0.793453785658232, 0.289955882549957}, 0.0371758183448673},
               {{-0.535123047718276, -0.793453785658232, -0.289955882549957}, 0.0371758183448673},
               {{-0.535123047718276, 0.793453785658232, 0.289955882549957}, 0.0371758183448673},
               {{-0.535123047718276, 0.793453785658232, -0.289955882549957}, 0.0371758183448673},
               {{0.535123047718276, -0.793453785658231, 0.289955882549957}, 0.0371758183448673},
               {{0.535123047718276, -0.793453785658231, -0.289955882549957}, 0.0371758183448673},
               {{0.535123047718276, 0.793453785658232, 0.289955882549957}, 0.0371758183448673},
               {{0.535123047718276, 0.793453785658231, -0.289955882549957}, 0.0371758183448673},
               {{-0.0968412145510398, -0.828080150668686, 0.552182074349399}, 0.0381517528444469},
               {{-0.0968412145510398, -0.828080150668686, -0.552182074349399}, 0.0381517528444469},
               {{-0.0968412145510394, 0.828080150668686, 0.552182074349399}, 0.0381517528444469},
               {{-0.0968412145510394, 0.828080150668686, -0.552182074349399}, 0.0381517528444469},
               {{0.0968412145510395, -0.828080150668686, 0.552182074349399}, 0.0381517528444469},
               {{0.0968412145510395, -0.828080150668686, -0.552182074349399}, 0.0381517528444469},
               {{0.0968412145510397, 0.828080150668686, 0.552182074349399}, 0.0381517528444469},
               {{0.0968412145510397, 0.828080150668686, -0.552182074349399}, 0.0381517528444469},
               {{-0.0968412145510395, -0.552182074349399, 0.828080150668686}, 0.0381517528444469},
               {{-0.0968412145510395, -0.552182074349399, -0.828080150668686}, 0.0381517528444469},
               {{-0.0968412145510395, 0.552182074349399, 0.828080150668686}, 0.0381517528444469},
               {{-0.0968412145510395, 0.552182074349399, -0.828080150668686}, 0.0381517528444469},
               {{0.0968412145510393, -0.552182074349399, 0.828080150668686}, 0.0381517528444469},
               {{0.0968412145510393, -0.552182074349399, -0.828080150668686}, 0.0381517528444469},
               {{0.0968412145510397, 0.552182074349399, 0.828080150668686}, 0.0381517528444469},
               {{0.0968412145510397, 0.552182074349399, -0.828080150668686}, 0.0381517528444469},
               {{-0.828080150668686, -0.0968412145510396, 0.552182074349399}, 0.0381517528444469},
               {{-0.828080150668686, -0.0968412145510396, -0.552182074349399}, 0.0381517528444469},
               {{-0.828080150668686, 0.0968412145510398, 0.552182074349399}, 0.0381517528444469},
               {{-0.828080150668686, 0.0968412145510398, -0.552182074349399}, 0.0381517528444469},
               {{0.828080150668686, -0.0968412145510399, 0.552182074349399}, 0.0381517528444469},
               {{0.828080150668686, -0.0968412145510399, -0.552182074349399}, 0.0381517528444469},
               {{0.828080150668686, 0.0968412145510397, 0.552182074349399}, 0.0381517528444469},
               {{0.828080150668686, 0.0968412145510397, -0.552182074349399}, 0.0381517528444469},
               {{-0.828080150668687, -0.552182074349399, 0.0968412145510393}, 0.0381517528444469},
               {{-0.828080150668686, -0.552182074349399, -0.0968412145510396}, 0.0381517528444469},
               {{-0.828080150668686, 0.552182074349399, 0.0968412145510393}, 0.0381517528444469},
               {{-0.828080150668686, 0.552182074349399, -0.0968412145510396}, 0.0381517528444469},
               {{0.828080150668686, -0.5521820743494, 0.0968412145510393}, 0.0381517528444469},
               {{0.828080150668686, -0.5521820743494, -0.0968412145510396}, 0.0381517528444469},
               {{0.828080150668686, 0.552182074349399, 0.0968412145510393}, 0.0381517528444469},
               {{0.828080150668686, 0.552182074349399, -0.0968412145510396}, 0.0381517528444469},
               {{-0.552182074349399, -0.0968412145510393, 0.828080150668686}, 0.0381517528444469},
               {{-0.552182074349399, -0.0968412145510393, -0.828080150668686}, 0.0381517528444469},
               {{-0.552182074349399, 0.0968412145510394, 0.828080150668686}, 0.0381517528444469},
               {{-0.552182074349399, 0.0968412145510394, -0.828080150668686}, 0.0381517528444469},
               {{0.552182074349399, -0.0968412145510395, 0.828080150668686}, 0.0381517528444469},
               {{0.552182074349399, -0.0968412145510395, -0.828080150668686}, 0.0381517528444469},
               {{0.552182074349399, 0.0968412145510394, 0.828080150668686}, 0.0381517528444469},
               {{0.552182074349399, 0.0968412145510394, -0.828080150668686}, 0.0381517528444469},
               {{-0.552182074349399, -0.828080150668686, 0.0968412145510393}, 0.0381517528444469},
               {{-0.552182074349399, -0.828080150668686, -0.0968412145510396}, 0.0381517528444469},
               {{-0.552182074349399, 0.828080150668686, 0.0968412145510393}, 0.0381517528444469},
               {{-0.552182074349399, 0.828080150668686, -0.0968412145510396}, 0.0381517528444469},
               {{0.5521820743494, -0.828080150668686, 0.0968412145510393}, 0.0381517528444469},
               {{0.552182074349399, -0.828080150668686, -0.0968412145510396}, 0.0381517528444469},
               {{0.552182074349399, 0.828080150668686, 0.0968412145510393}, 0.0381517528444469},
               {{0.552182074349399, 0.828080150668686, -0.0968412145510396}, 0.0381517528444469},
               {{-0.183343464704166, -0.907465826530513, 0.378009189874487}, 0.0355903165670539},
               {{-0.183343464704166, -0.907465826530513, -0.378009189874487}, 0.0355903165670539},
               {{-0.183343464704166, 0.907465826530513, 0.378009189874487}, 0.0355903165670539},
               {{-0.183343464704166, 0.907465826530513, -0.378009189874487}, 0.0355903165670539},
               {{0.183343464704165, -0.907465826530513, 0.378009189874487}, 0.0355903165670539},
               {{0.183343464704165, -0.907465826530513, -0.378009189874487}, 0.0355903165670539},
               {{0.183343464704166, 0.907465826530513, 0.378009189874487}, 0.0355903165670539},
               {{0.183343464704166, 0.907465826530513, -0.378009189874487}, 0.0355903165670539},
               {{-0.183343464704166, -0.378009189874487, 0.907465826530513}, 0.0355903165670539},
               {{-0.183343464704166, -0.378009189874487, -0.907465826530513}, 0.0355903165670539},
               {{-0.183343464704166, 0.378009189874487, 0.907465826530513}, 0.0355903165670539},
               {{-0.183343464704166, 0.378009189874487, -0.907465826530513}, 0.0355903165670539},
               {{0.183343464704166, -0.378009189874487, 0.907465826530513}, 0.0355903165670539},
               {{0.183343464704166, -0.378009189874487, -0.907465826530513}, 0.0355903165670539},
               {{0.183343464704166, 0.378009189874487, 0.907465826530513}, 0.0355903165670539},
               {{0.183343464704166, 0.378009189874487, -0.907465826530513}, 0.0355903165670539},
               {{-0.907465826530513, -0.183343464704166, 0.378009189874487}, 0.0355903165670539},
               {{-0.907465826530513, -0.183343464704166, -0.378009189874487}, 0.0355903165670539},
               {{-0.907465826530513, 0.183343464704166, 0.378009189874487}, 0.0355903165670539},
               {{-0.907465826530513, 0.183343464704166, -0.378009189874487}, 0.0355903165670539},
               {{0.907465826530513, -0.183343464704166, 0.378009189874487}, 0.0355903165670539},
               {{0.907465826530513, -0.183343464704166, -0.378009189874487}, 0.0355903165670539},
               {{0.907465826530513, 0.183343464704166, 0.378009189874487}, 0.0355903165670539},
               {{0.907465826530513, 0.183343464704166, -0.378009189874487}, 0.0355903165670539},
               {{-0.907465826530513, -0.378009189874487, 0.183343464704166}, 0.0355903165670539},
               {{-0.907465826530513, -0.378009189874487, -0.183343464704166}, 0.0355903165670539},
               {{-0.907465826530513, 0.378009189874487, 0.183343464704166}, 0.0355903165670539},
               {{-0.907465826530513, 0.378009189874487, -0.183343464704166}, 0.0355903165670539},
               {{0.907465826530513, -0.378009189874486, 0.183343464704166}, 0.0355903165670539},
               {{0.907465826530513, -0.378009189874486, -0.183343464704166}, 0.0355903165670539},
               {{0.907465826530513, 0.378009189874487, 0.183343464704166}, 0.0355903165670539},
               {{0.907465826530513, 0.378009189874487, -0.183343464704166}, 0.0355903165670539},
               {{-0.378009189874487, -0.183343464704166, 0.907465826530513}, 0.0355903165670539},
               {{-0.378009189874487, -0.183343464704166, -0.907465826530513}, 0.0355903165670539},
               {{-0.378009189874487, 0.183343464704166, 0.907465826530513}, 0.0355903165670539},
               {{-0.378009189874487, 0.183343464704166, -0.907465826530513}, 0.0355903165670539},
               {{0.378009189874487, -0.183343464704166, 0.907465826530513}, 0.0355903165670539},
               {{0.378009189874486, -0.183343464704166, -0.907465826530513}, 0.0355903165670539},
               {{0.378009189874487, 0.183343464704166, 0.907465826530513}, 0.0355903165670539},
               {{0.378009189874487, 0.183343464704166, -0.907465826530513}, 0.0355903165670539},
               {{-0.378009189874486, -0.907465826530513, 0.183343464704166}, 0.0355903165670539},
               {{-0.378009189874486, -0.907465826530513, -0.183343464704166}, 0.0355903165670539},
               {{-0.378009189874487, 0.907465826530513, 0.183343464704166}, 0.0355903165670539},
               {{-0.378009189874487, 0.907465826530513, -0.183343464704166}, 0.0355903165670539},
               {{0.378009189874486, -0.907465826530513, 0.183343464704166}, 0.0355903165670539},
               {{0.378009189874486, -0.907465826530513, -0.183343464704166}, 0.0355903165670539},
               {{0.378009189874487, 0.907465826530513, 0.183343464704166}, 0.0355903165670539},
               {{0.378009189874487, 0.907465826530513, -0.183343464704166}, 0.0355903165670539}};
}


} // namespace internal
} // namespace Problems
} // namespace Hyperbolic
} // namespace GDT
} // namespace Dune
