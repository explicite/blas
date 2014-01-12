#pragma once

// Vector - Vector
double dvp(const double* v1, const double* v2, unsigned n);
double* cvp(const double* v1, const double* v2, unsigned n);

// Matrix - Vector
double* mvp(const double* mtx, const double* vec, unsigned  m, unsigned  n);

// Matrix - Matrix
double* mmp(const double* mtx1, const double* mtx2, unsigned  n);
