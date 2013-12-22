#include "Vector.h"
#include <iostream>

int main(void)
{
	Vector<double> v1= Vector<double>(10, 0.1, 3.2);
	Vector<double> v2 = v1;
	
	v1[2] = 3.0;

	register int i;
	for(i = 0; i < v1.size(); i++)
		std::cout << v1[i] << ", " << v2[i] << "\n";

	std::cin.get();
	return 0;
}