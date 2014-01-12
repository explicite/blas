#pragma once
#include "vector.h"

typedef struct
{
	double* val;
	unsigned* col_ind;
	unsigned val_size;

	unsigned* row_ptr;
	unsigned row_num;
} crs;

vector* crs_vec_prod(const crs*, const vector*);
vector* omp_crs_vec_prod(const crs*, const vector*);
vector* pthread_crs_vec_prod(const crs*, const vector*);
