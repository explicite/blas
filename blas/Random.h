#pragma once
class Random
{
public:
	template <typename T>
	static T next(T, T);
	static void init(void);
};

