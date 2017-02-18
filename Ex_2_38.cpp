#include <iostream>

int main()
{
	int i = 0;
	const int j = 1;
	int &k = i;
	
	auto a = i;           //int
	decltype(i) b = i;    //int
	
	auto c = k;           //int
	decltype(k) d = i;        //int &
	
	auto e = j;             //int
	e = 42;
	decltype(j) f = 4;            //const int
	
	return 0;
}