#pragma once

// Vector - Vector
void* dvp(const void* v1, const void* v2, unsigned int n);
void* cvp(const void* v1, const void* v2, unsigned int n);

// Matrix - Vector
void* mvp(const void* mtx, const void* vec, unsigned int m, unsigned int n);

// Matrix - Matrix
void* mmp(const void* mtx1, const void* mtx2, unsigned int n);
