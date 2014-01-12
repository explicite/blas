#include "blas.h"

// Vector - Vector
double dvp(const double* v1, const double* v2, unsigned  n)
{
	double product = 0;

	register unsigned i;
	for (i = 0; i < n; i++)
		product += v1[i] * v2[i];

	return product;
}

double* cvp(const double* v1, const double* v2, unsigned  n)
{
	double* product = (double*)malloc(sizeof(double)*n);

	//TODO
	return product;
}


// Matrix - Vector
double* mvp(const double* mtx, const double* vec, unsigned m, unsigned n)
{
	double* _prd = (double*)malloc(sizeof(double)*m);

	register unsigned int i, j, nj;
	register double xj;
	register unsigned int i0, i1, i2;
	register double yi0, yi1, yi2;

	for (i = 0; i < m; i += 3)
	{
		i0 = i;
		i1 = i + 1;
		i2 = i + 2;

		yi0 = 0.0;
		yi1 = 0.0;
		yi2 = 0.0;

		for (j = 0; j < n; j++)
		{
			nj = n*j;
			xj = vec[j];
			yi0 += mtx[i0 + nj] * xj;
			yi1 += mtx[i1 + nj] * xj;
			yi2 += mtx[i2 + nj] * xj;
		}

		_prd[i0] = yi0;
		_prd[i1] = yi1;
		_prd[i2] = yi2;
	}

	return _prd;
}

// Matrix - Matrix
double* mmp(const double* mtx1, const double* mtx2, unsigned n)
{
	double* product = (double*)calloc(n*n, sizeof(double));

	register unsigned int i, j, k, ii, jj, BLSR, BLSC;

	BLSR = 4;
	BLSC = 2;

	if (n < 100)
		BLSR = 1;
	BLSC = 1;

	for (i = 0; i < n; i += BLSR)
	for (j = 0; j < n; j += BLSC)
	for (k = 0; k < n; k++)
	for (ii = i; ii < i + BLSR; ii++)
	for (jj = j; jj < j + BLSC; jj++)
		product[ii + jj*n] += mtx1[ii + k*n] * mtx2[k + jj*n];


	return product;
}

