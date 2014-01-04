#include "../../pblas.h"
#ifdef _WIN32
#include <Windows.h>
DWORD WINAPI pdvpf(void* d)
{
	//TODO
	return 0;
}

DWORD WINAPI pcvpf(void* d)
{
	//TODO
	return 0;
}

DWORD WINAPI pmvpf(void* d)
{
	//TODO
	return 0;
}

DWORD WINAPI pmmpf(void* d)
{
	//TODO
	return 0;
}
#elif __linux__
#include <pthread.h>
#else
#error Platform not supported
#endif

// Vector - Vector
void* pdvp(const void* v1, const void* v2, unsigned int n, unsigned int t)
{

}

void* pcvp(const void* v1, const void* v2, unsigned int n, unsigned int t)
{

}

// Matrix - Vector
void* pmvp(const void* mtx, const void* vec, unsigned int m, unsigned int n, unsigned int t)
{

}

// Matrix - Matrix
void* pmmp(const void* mtx1, const void* mtx2, unsigned int n, unsigned int t)
{

}
