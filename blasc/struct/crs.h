#pragma once

typedef struct
{
	void* val;
	int* col_ind;
	int val_size;

	int* row_ptr;
	int row_num;
} crs;