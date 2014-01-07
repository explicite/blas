#include "../test.h"

#ifdef _DEBUG
#include <stdio.h>
#endif

bool assert(const void* a, const void* b, const unsigned int s)
{
#ifdef _DEBUG
	printf("assert arrays: %d and %d -> %d long\n", &a, &b, s);
#endif
	if (a == b)
		return true;

	double* _a = (double*)a;
	double* _b = (double*)b;

	register unsigned int i;
	for (i = 0; i < s; i++)
	{
		if (!equal(_a[i], _b[i]))
		{
#ifdef _DEBUG
			printf("assert arrays: NOT EQUAL in %d\n", i);
#endif
			return false;
		}
	}

#ifdef _DEBUG
	printf("assert arrays: EQUAL\n");
#endif

	return true;
}

bool equal(const double d1, const double d2)
{
	if ((((int)(d1 * PRECISION)) / PRECISION) == (((int)(d2 * PRECISION)) / PRECISION))
	{
#ifdef _DEBUG
		printf("%f == %f\n", d1, d2);
#endif
		return true;
	}
	else
	{
#ifdef _DEBUG
		printf("%f != %f\n", d1, d2);
#endif
		return false;
	}
}