#include <iostream>

int main()
{
	//int units_sold = 0;
	//int units_sold(0);
	int units_sold{0};
	//int units_sold = {0};
	std::cout << units_sold << std::endl;
	
	long double ld = 3.1415926536;
    //int a{ld}, b = {ld};       //用初始化列表的方式进行初始化时，丢失信息编译器会报错
	int c(ld), d = ld;
 	
	
	return 0;
}