#include "../../pblas.h"
#ifdef _WIN32
#include <Windows.h>

DWORD WINAPI pdvpf(void* context)
{
	//TODO
	return 0;
}

DWORD WINAPI pcvpf(void* context)
{
	//TODO
	return 0;
}

DWORD WINAPI pmvpf(void* context)
{
	//TODO
	return 0;
}

DWORD WINAPI pmmpf(void* context)
{
	//TODO
	return 0;
}
#elif __linux__
#include <pthread.h>

void* pdvpf(void* context)
{
	//TODO
	return 0;
}

void* pcvpf(void* context)
{
	//TODO
	return 0;
}

void* pmvpf(void* context)
{
	//TODO
	return 0;
}

void* pmmpf(void* context)
{
	//TODO
	return 0;
}

#else
#error Platform not supported
#endif

// Vector - Vector
void* pdvp(const void* v1, const void* v2, unsigned int n, unsigned int t)
{

#ifdef _WIN32
#elif __linux__
#else
#error Platform not supported
#endif

}

void* pcvp(const void* v1, const void* v2, unsigned int n, unsigned int t)
{

#ifdef _WIN32
#elif __linux__
#else
#error Platform not supported
#endif

}

// Matrix - Vector
void* pmvp(const void* mtx, const void* vec, unsigned int m, unsigned int n, unsigned int t)
{

#ifdef _WIN32
#elif __linux__
#else
#error Platform not supported
#endif

}

// Matrix - Matrix
void* pmmp(const void* mtx1, const void* mtx2, unsigned int n, unsigned int t)
{

#ifdef _WIN32
#elif __linux__
#else
#error Platform not supported
#endif

}
