#pragma once
#include "BLAS.h"

// Vector - Vector
float dvvpf(const float* vec1, const float* vec2, unsigned int n)
{
	float product = 0;

	register unsigned int i;
	for (i = 0; i < n; i++)
		product += vec1[i] * vec2[i];

	return product;
}

double dvvpd(const double* vec1, const double* vec2, unsigned int n)
{
	double product = 0;

	register unsigned int i;
	for (i = 0; i < n; i++)
		product += vec1[i] * vec2[i];

	return product;
}

float* cvvpf(const float* vec1, const float* vec2, unsigned int n)
{
	float* product = (float*)malloc(sizeof(float)*n);

	return product;
}

double* cvvpd(const double* vec1, const double* vec2, unsigned int n)
{
	double* product = (double*)malloc(sizeof(double)*n);

	return product;
}

// Matrix - Vector
float* mvpf(const float* mtx, const float* vec, unsigned int m, unsigned int n)
{
	float* product = (float*)malloc(sizeof(float)*m);

	register unsigned int i, j, nj;
	register float xj;
	register unsigned int i0, i1, i2;
	register float yi0, yi1, yi2;

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

		product[i0] = yi0;
		product[i1] = yi1;
		product[i2] = yi2;
	}

	return product;
}

double* mvpd(const double* mtx, const double* vec, unsigned int m, unsigned int n)
{
	double* product = (double*)malloc(sizeof(double)*m);

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

		product[i0] = yi0;
		product[i1] = yi1;
		product[i2] = yi2;
	}

	return product;
}

// Matrix - Matrix
float* mmpf(const float* mtx1, const float* mtx2, unsigned int n)
{
	float* product = (float*)malloc(sizeof(float)*n*n);

	register unsigned int i, j, k, ii, jj, BLS;

	//TODO compute BLS
	BLS = 2;

	for (i = 0; i < n; i += BLS){
		for (j = 0; j < n; j += BLS){
			for (k = 0; k < n; k++){
				for (jj = j; jj < jj + BLS; jj++){
					for (ii = i; ii < ii + BLS; ii++){
						product[ii + jj*n] = mtx1[ii + k*n] + mtx2[k + jj*n];
					}
				}
			}
		}
	}

	return product;
}

double* mmpd(const double* mtx1, const float* mtx2, unsigned int n)
{
	double* product = (double*)malloc(sizeof(double)*n*n);

	register unsigned int i, j, k, ii, jj, BLS;

	//TODO compute BLS
	BLS = 2;

	for (i = 0; i < n; i += BLS){
		for (j = 0; j < n; j += BLS){
			for (k = 0; k < n; k++){
				for (jj = j; jj < jj + BLS; jj++){
					for (ii = i; ii < ii + BLS; ii++){
						product[ii + jj*n] = mtx1[ii + k*n] + mtx2[k + jj*n];
					}
				}
			}
		}
	}
	
	return product;
}
