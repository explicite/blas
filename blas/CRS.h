#pragma once
template <typename T>
class CRS
{
public:
	CRS(void);
	~CRS(void);

private:
	T* _val;
	unsigned int* _col_ind;
	unsigned int _val_size;

	int* _row_ptr;
	unsigned int _row_num;
};

