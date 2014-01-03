#include "../test.h"

bool assert(void* a, void* b, unsigned int s)
{
	double* _a = (double*)a;
	double* _b = (double*)b;

	register unsigned int i;
	for (i = 0; i < s; i++)
	if (_a[i] != _b[i])
		return false;

	return true;
}

bool equal(double d1, double d2)
{
	if ((((int)(d1 * PRECISION)) / PRECISION) == (((int)(d2 * PRECISION)) / PRECISION))
		return true;
	else
		return false;
}