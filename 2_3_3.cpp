#include <iostream>

int main()
{
	int ival = 1024;
	int *pi = &ival;
	int **ppi = &pi;
	
	std::cout << "The value of ival\n"
			  << "direct value: " << ival << "\n"
			  << "indirect value: " << *pi << "\n"
			  << "doubly indirect value: " << **ppi 
			  << std::endl;
			  
	int i = 42;
	int *p;
	int *&r = p;           //指向指针的引用
	
	r = &i;
	*r = 0;
	
	std::cout << i << " " << *p << " " << *r << std::endl;
	std::cout << p << " " << r << std::endl;
	
	return 0;
}