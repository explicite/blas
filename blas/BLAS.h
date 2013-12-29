// Vector - Vector
float* vvpf(const float* vec1, const float* vec2, unsigned int m);
double* vvpd(const double* vec1, const double* vec2, unsigned int m);

// Matrix - Vector
float* mvpf(const float* mtx, const float* vec, unsigned int m, unsigned int n);
double* mvpd(const double* mtx, const double* vec, unsigned int m, unsigned int n);

// Matrix - Matrix
float* mmpf(const float* mtx1, const float* mtx2, unsigned int n);
double* mmpd(const double* mtx1, const float* mtx2, unsigned int n);
