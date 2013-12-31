// Vector - Vector
float dvvpf(const float* vec1, const float* vec2, unsigned int n);
double dvvpd(const double* vec1, const double* vec2, unsigned int n);
float* cvvpf(const float* vec1, const float* vec2, unsigned int n);
double* cvvpd(const double* vec1, const double* vec2, unsigned int n);

// Matrix - Vector
float* mvpf(const float* mtx, const float* vec, unsigned int m, unsigned int n);
double* mvpd(const double* mtx, const double* vec, unsigned int m, unsigned int n);

// Matrix - Matrix
float* mmpf(const float* mtx1, const float* mtx2, unsigned int n);
double* mmpd(const double* mtx1, const float* mtx2, unsigned int n);
