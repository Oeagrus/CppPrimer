#include <iostream>

int main()
{
	//unsigned u = 10;
	//int i = -42;
	
	//std::cout << i + i << std::endl;
	//std::cout << u + i << std::endl;
	
	unsigned u1 = 42, u2 = 10;
	std::cout << u1 - u2 << std::endl;
	std::cout << u2 - u1 << std::endl;
	
	for (unsigned int i = 10; i > 0; --i)
		std::cout << i << std::endl;
	
	unsigned u = 11;
	while (u > 0)
	{
		--u;
		std::cout << u << std::endl;
	}
	
	return 0;
}