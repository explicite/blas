#include <stdio.h>
#include "blas.h"
#include "pblas.h"
#include "oblas.h"
#include "test.h"


void test();

int main(int c, char** v, char** e)
{
	test();

	getchar();
	return 0;
}

void test()
{
	unsigned int s = 3;
	double* a = (double*)malloc(sizeof(double)*s);
	double* b = (double*)malloc(sizeof(double)*s);

	// Vector - Vector
	register unsigned int i, j;
	for (i = 0; i < s; i++)
	{
		a[i] = i;
		b[i] = i * i;
	}

	double* dc = (double*)dvp((void*)a, (void*)b, s);


	if (equal(9, *dc))
		printf("Vector - Vector dot product ok\n");

	//openMp
	double* oc = (double*)odvp((void*)a, (void*)b, s);
	if (equal(*oc, *dc))
		printf("OpenMp: Vector - Vector dot product ok\n");

	free(a);
	free(b);

	// Matrix - Vector
	a = (double*)malloc(sizeof(double)*s);
	b = (double*)malloc(sizeof(double)*s*s);

	for (i = 0; i < s; i++){
		a[i] = 1.0;
		for (j = 0; j < s; j++){
			b[i + j*s] = 1.0;
		}
	}

	double* c = (double*)malloc(sizeof(double)*s);
	c = (double*)mvp((void*)b, (void*)a, s, s);

	double* d = (double*)malloc(sizeof(double)*s);
	d[0] = 3.0;
	d[1] = 3.0;
	d[2] = 3.0;

	if (assert((void*)c, (void*)d, s))
		printf("Matrix - Vector product ok\n");

	//openMp
	oc = (double*)malloc(sizeof(double)*s);
	oc = (double*)omvp((void*)b, (void*)a, s, s);

	if (assert((void*)oc, (void*)d, s))
		printf("OpenMp: Matrix - Vector product ok\n");

	free(a);
	free(b);
	free(c);
	free(oc);
	free(d);

	// Matrix - Matrix
	a = (double*)malloc(sizeof(double)*s*s);
	b = (double*)malloc(sizeof(double)*s*s);
	d = (double*)malloc(sizeof(double)*s*s);
	d[0] = 30.0; d[3] = 66.0; d[6] = 102.0;
	d[1] = 36.0; d[4] = 81.0; d[7] = 126.0;
	d[2] = 42.0; d[5] = 96.0; d[8] = 150.0;

	for (i = 1; i < (s*s) + 1; i++)
	{
		a[i - 1] = i;
		b[i - 1] = i;
	}
	c = mmp(a, b, s);

	if (assert((void*)c, (void*)d, s*s))
		printf("Matrix - Matrix product ok\n");

	//openMp
	oc = ommp(a, b, s);
	
	if (assert((void*)oc, (void*)d, s*s))
		printf("OpenMp: Matrix - Matrix product ok\n");

	free(a);
	free(b);
	free(c);
	free(oc);
	free(d);
}