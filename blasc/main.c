#include "blas.h"
#include "test.h"
#include <stdio.h>

#define TEST
void test();

int main(int c, char** v, char** e)
{

#ifdef TEST 
	test();
#endif

	getchar();
	return 0;
}

void test()
{
	unsigned int s = 3;
	double* a = (double*)malloc(sizeof(double)*s);
	double* b = (double*)malloc(sizeof(double)*s);

	// Vector - Vector
	register unsigned int i;
	for (i = 0; i < s; i++)
	{
		a[i] = i;
		b[i] = i * i;
	}

	const double *c = (double*)dvp((void*)a, (void*)b, s);

	if (equal(9, *c));
		printf("Vector - Vecotor dot product ok\n");


	free(a);
	free(b);

	// Matrix - Vector

	// Matrix - Matrix
}