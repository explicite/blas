#pragma once

template <class T>
class Random
{
public:
	static T next(T, T);
	static void init(void);
};

