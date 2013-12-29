#include "Matrix.h"
#include "Random.h"

template <typename T>
Matrix<T>::Matrix(void) : _vector(Vector<T>()), _m(0), _n(0) {}

template <typename T>
Matrix<T>::Matrix(unsigned int row, unsigned int column) : _vector(Vector<T>(column * row)), _m(row), _n(column) {}

template <typename T>
Matrix<T>::Matrix(const Matrix& rhs) : _vector(Vector<T>(rhs._m * rhs._n)), _m(rhs._m), _n(rhs._n)
{
	register unsigned int i;
	for (i = 0; i < this->_vector.size(); i++)
		this->_vector[i] = rhs._vector[i];
}

template <typename T>
Matrix<T>::Matrix(unsigned int row, unsigned int column, T min, T max) : Matrix<T>(row, column)
{
	Random::init();

	register unsigned int i;
	for (i = 0; i < this->_vector.size(); i++)
		this->_vector[i] = Random::next<T>(min, max);
}

template <typename T>
Matrix<T>::~Matrix(void)
{
	this->_vector.~Vector();
	this->_m = 0;
	this->_n = 0;
}

template <typename T>
inline T Matrix<T>::get(unsigned int column, unsigned int row)
{
	return _vector[column + this->_n * row];
}

template <typename T>
inline void Matrix<T>::set(T val, unsigned int column, unsigned int row)
{
	this->_vector[column + this->_n * row] = val;
}

template <typename T>
Matrix<T>& Matrix<T>::operator=(const Matrix<T>& rhs)
{
	if (this != &rhs){
		_m = rhs._m;
		_n = rhs._n;
		_vector = rhs._vector;
	}

	return *this;
}


template Matrix<double>;
template Matrix<float>;
template Matrix<int>;
