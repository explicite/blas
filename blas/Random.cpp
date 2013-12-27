#include "Random.h"
#ifdef _WIN32
#include <cstdlib>
#include <ctime>
#elif __linux__
#include <stdlib.h>
#include <time.h>
#else
#error Plaftorm not supported
#endif

void Random::init(void)
{
	srand((unsigned int) time(NULL));
}

template <typename T> 
static T Random::next(T min, T max)
{
	return (min + ((T) rand() / (RAND_MAX / (max - min))));
}

template int Random::next<int>(int, int);
template float Random::next<float>(float, float);
template double Random::next<double>(double, double);