#include <iostream>

int main()
{
	//unsigned u = 10, u2 = 42;
	
	// std::cout << u2 - u << std::endl;    //32
	// std::cout << u - u2 << std::endl;    //10 - 42 + (2^32)
	std::cout << 4294967295 + 2 << std::endl;
	std::cout << 4294967296 + 1 << std::endl;
	std::cout << 3.1415926e10 << std::endl;
	
	// int i = 10, i2 = 42;
	// std::cout << i2 - i << std::endl;   // 32
	// std::cout << i - i2 << std::endl;   // -32
	// std::cout << i - u << std::endl;    // 0
	// std::cout << u - i << std::endl;    // 0
	
	return 0;
}