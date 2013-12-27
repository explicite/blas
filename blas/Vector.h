#pragma once
template <typename T>
class Vector
{
public:
	Vector(const Vector&);
	Vector(unsigned int, T, T);
	~Vector(void);

	T& operator[](unsigned int);
	T const& operator[](unsigned int) const;
	Vector<T>& operator=(const Vector<T>&);

	int size(void);

private:
	T* _array;
	unsigned int _size;
};

