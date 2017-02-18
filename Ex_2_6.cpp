#include <iostream>

int main()
{
	int month = 09, day = 7; //错误，8进制没有9
	std::cout << month << " " << day << std::endl;
	return 0;
}