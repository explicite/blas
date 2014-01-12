#pragma once

// Vector - Vector
double odvp(const double* v1, const double* v2, unsigned n);
double* ocvp(const double* v1, const double* v2, unsigned n);

// Matrix - Vector
double* omvp(const double* mtx, const double* vec, unsigned m, unsigned n);

// Matrix - Matrix
double* ommp(const double* mtx1, const double* mtx2, unsigned n);
