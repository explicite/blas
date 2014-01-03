#pragma once

typedef struct
{
	void* val;
	int* row_ind;
	int val_size;

	int* col_ptr;
	int col_size;
} ccs;