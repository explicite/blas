#pragma once
#include "matrix.h"

typedef struct {
	double* v;
	unsigned size;
} vector;

vector* init_vec(unsigned);
vector* gen_vec(unsigned, double, double);
vector* vec_mtx_prod(const matrix*, const vector*); 

void print_vec(const vector*);