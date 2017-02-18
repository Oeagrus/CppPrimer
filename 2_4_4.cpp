#include <iostream>

int main()
{
	constexpr int mf = 20;           //constexpr VS2013不支持
	
	constexpr int *np = nullptr;
	int j = 0;
	constexpr int i = 42;
	constexpr const int *p = &i;
	constexpr int *p1 = &j;
	
	return 0;
}