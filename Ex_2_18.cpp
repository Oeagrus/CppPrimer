#include <iostream>

int main()
{
	int n = 5, *p = &n;
	
	n = 2;
	std::cout << n << " " << *p << " " << p << std::endl;
	
	(*p) = 10;
	std::cout << n << " " << *p << " " << p << std::endl;
	
	p++;
	std::cout << n << " " << *p << " " << p << std::endl;

	return 0;
}