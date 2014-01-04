#pragma once
// Vector - Vector
void* pdvp(const void* v1, const void* v2, unsigned int n, unsigned int t);
void* pcvp(const void* v1, const void* v2, unsigned int n, unsigned int t);

// Matrix - Vector
void* pmvp(const void* mtx, const void* vec, unsigned int m, unsigned int n, unsigned int t);

// Matrix - Matrix
void* pmmp(const void* mtx1, const void* mtx2, unsigned int n, unsigned int t);
