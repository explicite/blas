#include "../test.h"

bool assert(const void* a, const void* b, const unsigned int s)
{
	if (a != b)
		return false;

	double* _a = (double*)a;
	double* _b = (double*)b;

	register unsigned int i;
	for (i = 0; i < s; i++)
	if (_a[i] != _b[i])
		return false;

	return true;
}

bool equal(const double d1, const double d2)
{
	if ((((int)(d1 * PRECISION)) / PRECISION) == (((int)(d2 * PRECISION)) / PRECISION))
		return true;
	else
		return false;
}