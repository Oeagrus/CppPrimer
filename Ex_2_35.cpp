#include <iostream>

int main()
{
	const int i = 42;
	auto j = i;    //int
	const auto &k = i;    //const int 引用
	auto *p = &i;   //cont int *
	const auto j2 = i, &k2 = i;  // const int , const int 引用
	
	j = 42;
	k = 42;  //error
	
	int l = 24;
	const int m = 24;
	
	p = &l; 
	p = &m;
	j2 = 42; //error
	k2 = 42; //error
	
	return 0;
}