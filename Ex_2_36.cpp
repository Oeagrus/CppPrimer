#include <iostream>

int main()
{
	int a = 3, b = 4;
	decltype (a) c = a;   //int
	decltype ((a)) d = a;   //int &
	++c;
	++d;
	
	std::cout << a << " " << b << " " << c << " " << d << std::endl;  //4 4 4 4
	return 0;
}