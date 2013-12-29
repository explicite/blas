#pragma once
#include "Vector.h"

template <typename T>
class Matrix
{
public:
	Matrix(void);
	Matrix(unsigned int, unsigned int);
	Matrix(const Matrix&);
	Matrix(unsigned int, unsigned int, T, T);
	~Matrix(void);

	T get(unsigned int, unsigned int);
	void set(T, unsigned int, unsigned int);
	Matrix<T>& operator=(const Matrix<T>&);

private:
	Vector<T>* _vector;
	unsigned int _column_size;
	unsigned int _row_size;
};

