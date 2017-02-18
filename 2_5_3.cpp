#include <iostream>

int main()
{
	const int ci = 0, &cj = ci;
	decltype(ci) x = 0;  //const int
	decltype(cj) y = x;     //cosnt int&, 将y绑定到x
	
	int i = 42, *p = &i, &r = i;
	decltype(r + 0) b;      //int
	decltype(*p) c = i;         //int & 需要初始化
	decltype(i) d;    //int
	
	int j = 0;
	decltype((i)) e = j; //int & 变量加括号后被作为表达式，返回的应为 int&，需要初始化
	
	return 0;
}