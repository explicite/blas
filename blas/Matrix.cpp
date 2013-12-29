#include "Matrix.h"

template <typename T>
Matrix<T>::Matrix(void) : _vector(&Vector<T>()), _column_size(0), _row_size(0)
{
	//Default constructor
}

template <typename T>
Matrix<T>::Matrix(unsigned int row, unsigned int column)
{
	//TODO
}

template <typename T>
Matrix<T>::Matrix(const Matrix& rhs) : _vector(&Vector<T>(rhs._column_size * rhs._row_size)), _column_size(rhs._column_size), _row_size(rhs._row_size)
{
	//TODO
}

template <typename T>
Matrix<T>::Matrix(unsigned int row, unsigned int column, T min, T max) : Matrix(row, column)
{
	//TODO
}

template <typename T>
Matrix<T>::~Matrix(void)
{
	delete[] this->_vector;
	this->_column_size = 0;
	this->_row_size = 0;
}

template <typename T>
T Matrix<T>::get(unsigned int column, unsigned int row)
{
	//TODO
	return 0;
}

template <typename T>
void Matrix<T>::set(T val, unsigned int column, unsigned int row)
{
	//TODO
}

template <typename T>
Matrix<T>& Matrix<T>::operator=(const Matrix<T>& rhs)
{
	//TODO
}


template Matrix<double>;
template Matrix<float>;
template Matrix<int>;
