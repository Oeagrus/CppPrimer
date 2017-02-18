#include <iostream>

int main()
{
	int i = 0, &r = i;
	auto a = r;           //int
	
	const int ci = i, &cr = ci;
	auto b = ci;    //int
	auto c = cr;    //int
	auto d = &i;    //int *
	auto e = &ci;   //const int *
	const auto f = ci;     //const int
	auto &g = ci;          //const int
	//auto &h = 42;        //error 字面值不能引用，除非 const
	const auto &j = 42;        //right
	auto k = ci, &l = i;       //k: int l: int的引用
	auto &m = ci, *p = &ci;    //m: const int引用 p: const int *  
	//auto &n = i, *p2 = &ci;   //error n: int引用 p2: const int *
	a = 42;  //right 
	b = 42;  //right
	c = 42;  //right
	// d = 42;  //error 
	// e = 42;  //error
	// g = 42;  //error
	
	std::cout << a << " " << b << " " << c << std::endl;
	//std::cout << d << " " << e << " " << g << std::endl; 
 	
	
	
	return 0;
}