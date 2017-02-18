#include <iostream>

int main()
{
	//int i = -1, &r = 0;              //error 不能引用字面值
	//int i2 = 5,*const p2 = &i2;      //right
	//const int i = -1, &r = 0;        //right 常量引用可以引用字面值
	//const int *const p3 = &i2;       //right 但不能通过 *p3 改变 i2 的值
	//const int *p1 = &i2;             //right
	//const int &const r2;             //error *const 没有初始化
	const int i2 = i, &r = i;        //right
	return 0;
}