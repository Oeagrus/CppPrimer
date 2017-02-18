#include <iostream>

/*

zhangwu 20161121
正确程序见 Ex_1_13_1.cpp

*/

int main()
{
	//int sum = 0))                //语法错误 syntax error
	int sum = 0;
	
	//sum = "error";                 //类型错误 type error
	
	//summm = 123;                   //声明错误 declaration error
	
	for (int i = 50; i <= 100; ++i)
		sum += i;
	
	std::cout << "Sum of 50 to 100 inclusive is "
			  << sum << std::endl;
	
	return 0;
}