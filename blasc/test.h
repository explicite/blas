#pragma once
#include "bool.h"

#ifdef PRECISION 
#else
#define PRECISION 10000.0
#endif

bool assert(const void* a, const void* b, const unsigned int s);

bool equal(const double d1, const double d2);
