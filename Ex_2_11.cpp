#include <iostream>

int main()
{
	//extern int ix = 1024;                  //函数内部不能初始化 extern 的变量
	int iy;
	extern int iz;
	return 0;
}