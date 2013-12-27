#include "Vector.h"
#include "Random.h"

template <typename T>
Vector<T>::Vector(const Vector& rhs) : _size(rhs._size), _array(new T[rhs._size])
{
	register unsigned int i;
	for (i = 0; i < this->_size; i++)
		this->_array[i] = rhs._array[i];
}

template <typename T>
Vector<T>::Vector(unsigned int size, T min, T max) : _size(size), _array(new T[size])
{
	Random::init();
	register unsigned int i;
	for (i = 0; i < this->_size; i++)
		this->_array[i] = Random::next<T>(min, max);
}

template <typename T>
Vector<T>::~Vector(void)
{
	delete[] this->_array;
}

template <typename T>
T& Vector<T>::operator[](unsigned int index)
{
	return(this->_array[index]);
}

template <typename T>
T const& Vector<T>::operator[](unsigned int index) const
{
	return(this->_array[index]);
}

template <typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& rhs)
{
	if (this != &rhs){
		_size = rhs._size;
		_array = rhs._array;
	}

	return *this;
}

template <typename T>
int Vector<T>::size(void)
{
	return _size;
}

template Vector<double>;
template Vector<float>;
template Vector<int>;