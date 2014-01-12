#pragma once

typedef struct
{
	double* val;
	unsigned* row_ind;
	unsigned val_size;

	unsigned* col_ptr;
	unsigned col_size;
} ccs;