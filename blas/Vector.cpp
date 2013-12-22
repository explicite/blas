#include "Vector.h"
#include "Random.h"

template Vector<double>;
template Vector<float>;
template Vector<int>;

template <class T> 
Vector<T>::Vector(const Vector& rhs) : _size(rhs._size), _array(new T[rhs._size])
{
	register int i;
	for(i = 0; i < this->_size; i++)
		this->_array[i] = rhs._array[i];
}

template <class T> 
Vector<T>::Vector(unsigned int size, T min, T max) : _size(size), _array(new T[size])
{
	Random<T>::init();
	register int i;
	for(i = 0; i < this->_size; i++)
		this->_array[i] = Random<T>::next(min, max);
}

template <class T>
Vector<T>::~Vector(void)
{
	delete[] this->_array;
}

template <class T> 
T& Vector<T>::operator[](unsigned int index)
{
	return(this->_array[index]);		
}

template <class T> 
T const& Vector<T>::operator[](unsigned int index) const
{
	return(this->_array[index]);
}

template <class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& rhs)
{
	if(this != &rhs){ 	
		_size = rhs._size;
		_array = rhs._array;
	}

	return *this;
}

template <class T>
int Vector<T>::size(void)
{
	return _size;
}