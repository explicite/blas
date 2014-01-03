#pragma once
#include "bool.h"

#ifdef PRECISION 
#else
#define PRECISION 10000.0
#endif

bool assert(void* a, void* b, unsigned int s);

bool equal(double d1, double d2);
