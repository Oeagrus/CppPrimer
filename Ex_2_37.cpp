#include <iostream>

int main()
{
	int a = 3, b = 4;    
	decltype(a) c = a;       //int
	decltype(a = b) d = a;    // int &
	
	d = 5;
	std::cout << a << " " << b << " " << c << " " << d << std::endl;
	
	return 0;
}