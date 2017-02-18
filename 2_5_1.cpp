#include <iostream>

int main()
{
	typedef double wages;
	typedef wages base, *p;
	using DP = p;
	
	wages dval = 3.14;
	DP dp = &dval;
	
	std::cout << dval << " " << dp << " " << *dp << std::endl;
	
	typedef char *pstring;
	const pstring cstr = 0;            //相当于 char *const cstr = 0;
	const pstring *ps;
	
	int ival (3.14);
	
	std::cout << ival << std::endl;
	
	auto item = 2 + 3.14;
	std::cout << item << std::endl;
	
	return 0;
}