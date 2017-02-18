#include <iostream>

int main()
{
	//int i, *const cp;    //error *const 没有初始化
	//int *p1, *const p2;    //error
	//const int ic, &r = ic;      //error
	//const int *const p3;      //error
	const int *p;     //right
	return 0;
}