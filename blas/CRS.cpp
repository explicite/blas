#include "CRS.h"

template <typename T>
CRS<T>::CRS(void)
{
}

template <typename T>
CRS<T>::~CRS(void)
{
	delete[] this->_val;
	delete[] this->_col_ind;
	this->_val_size = 0;
	delete[] this->_row_ptr;
	this->_row_num = 0;
}

template CRS<double>;
template CRS<float>;
template CRS<int>;