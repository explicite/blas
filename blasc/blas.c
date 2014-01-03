#pragma once
#include "blas.h"

// Vector - Vector
void* dvp(const void* v1, const void* v2, unsigned int n)
{
	double product = 0;
	double* _v1 = (double*)v1;
	double* _v2 = (double*)v2;

	register unsigned int i;
	for (i = 0; i < n; i++)
		product += _v1[i] * _v2[i];

	return &product;
}

void* cvp(const void* v1, const void* v2, unsigned int n)
{
	double* product = (double*)malloc(sizeof(double)*n);
	double* _v1 = (double*)v1;
	double* _v2 = (double*)v2;
	//TODO
	return (void*)product;
}


// Matrix - Vector
void* mvp(const void* mtx, const void* vec, unsigned int m, unsigned int n)
{
	double* product = (double*)malloc(sizeof(double)*m);
	double* _mtx = (double*)mtx;
	double* _vec = (double*)vec;

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
			xj = _vec[j];
			yi0 += _mtx[i0 + nj] * xj;
			yi1 += _mtx[i1 + nj] * xj;
			yi2 += _mtx[i2 + nj] * xj;
		}

		product[i0] = yi0;
		product[i1] = yi1;
		product[i2] = yi2;
	}

	return (void*)product;
}

// Matrix - Matrix
void* mmpf(const void* mtx1, const void* mtx2, unsigned int n)
{
	double* product = (double*)malloc(sizeof(double)*n*n);
	double* _mtx1 = (double*)mtx1;
	double* _mtx2 = (double*)mtx2;

	register unsigned int i, j, k, ii, jj, BLS;

	//TODO compute BLS
	BLS = 2;

	for (i = 0; i < n; i += BLS){
		for (j = 0; j < n; j += BLS){
			for (k = 0; k < n; k++){
				for (jj = j; jj < jj + BLS; jj++){
					for (ii = i; ii < ii + BLS; ii++){
						product[ii + jj*n] = _mtx1[ii + k*n] + _mtx2[k + jj*n];
					}
				}
			}
		}
	}

	return (void*)product;
}

