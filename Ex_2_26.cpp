#include <iostream>

int main()
{
	//const int buf;        //error 未初始化
	int cnt = 0;
	const int sz = cnt;           //right
	++cnt;                //right
	//++sz;                 //error 不能给常量赋值
	
	int i = 42;
	int &r1 = i;
	//const int &r2 = i;              //可通过 r1 修改，不能通过 r2 修改
	r1 = 0;
	
	std::cout << i << " " << r1 << " " << r2 << std::endl;
	
	return 0;
}