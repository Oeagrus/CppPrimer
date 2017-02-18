#include <iostream>

int main()
{
	int i = 0;
	
	//double *dp = &i;             //error
	//int *ip = i;                 //error  不能把 int 赋给 int*
	//int *ip = 0;                    //right
	//int *ip = 1;                     //error
	int *ip = (int *)1;          //输出时崩溃
	int *p = &i;
	
	std::cout << *ip << std::endl;          
	
	return 0;
}