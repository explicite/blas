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
	return 0;
}

void test()
{
	printf("test/n");
}