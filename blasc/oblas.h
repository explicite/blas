#pragma once

// Vector - Vector
void* odvp(const void* v1, const void* v2, unsigned int n);
void* ocvp(const void* v1, const void* v2, unsigned int n);

// Matrix - Vector
void* omvp(const void* mtx, const void* vec, unsigned int m, unsigned int n);

// Matrix - Matrix
void* ommp(const void* mtx1, const void* mtx2, unsigned int n);
