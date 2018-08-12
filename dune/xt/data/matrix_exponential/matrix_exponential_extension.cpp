# include <complex>
# include <string>

using namespace std;

# include "matrix_exponential_extension.hpp"
# include "matrix_exponential.hpp"
# include "c8lib.hpp"
# include "r8lib.hpp"

double *r8mat_expm_integral ( int n, double a[], double t)

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_EXPM_INTEGRAL uses the Taylor series for the integral of the matrix exponential.
//
//  Discussion:
//
//    Formally,
//
//      \int_0^T exp ( A t ) dt= T(I + 1/2! AT + 1/3! (AT)^2 + 1/4! (AT)^3 + ...)
//
//    This function sums the series until a tolerance is satisfied.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 May 2017
//
//  Author:
//
//    Tobias Leibner
//    adapted from r8mat_expm2
//
//  Parameters:
//
//    Input, int N, the dimension of the matrix.
//
//    Input, double A[N*N], the matrix.
//
//    Output, double R8MAT_EXPM_INTEGRAL[N*N], the estimate for \int_0^T exp ( A t ) dt.
//
{
  double *a2;
  double *e;
  double *f;
  int k;
  const double one = 1.0;
  double s;

  a2 = r8mat_copy_new ( n, n, a );

  r8mat_scale (n, n, t, a2);

  e = r8mat_zeros_new ( n, n );

  f = r8mat_identity_new ( n );

  k = 2;

  while ( r8mat_significant ( n, n, e, f ) )
  {
    r8mat_add ( n, n, one, e, one, f, e );

    r8mat_mm ( n, n, n, a2, f, f );

    s = 1.0 / ( double ) ( k );

    r8mat_scale ( n, n, s, f );

    k = k + 1;
  }

  r8mat_scale(n, n, t, e);

  delete [] a2;
  delete [] f;

  return e;
}

