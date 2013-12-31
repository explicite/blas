#include "test.h"


bool assert(double* a, double* b, unsigned int s)
{
	register unsigned int i;
	for (i = 0; i < s; i++)
	if (a[i] != b[i])
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