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

template Random<double>;
template Random<float>;
template Random<int>;

template <class T>
void Random<T>::init(void)
{
	srand(time(NULL));
}

template <class T>
T Random<T>::next(T min, T max)
{
	return (min + ( (T) rand() / (RAND_MAX / (max - min))));
}
