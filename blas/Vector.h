#pragma once
template <typename T>
class Vector
{
public:
	Vector(void);
	Vector(unsigned int);
	Vector(const Vector&);
	Vector(unsigned int, T, T);
	~Vector(void);

	T& operator[](unsigned int);
	T const& operator[](unsigned int) const;
	Vector<T>& operator=(const Vector<T>&);

	unsigned int size(void);

private:
	T* _array;
	unsigned int _size;
};

