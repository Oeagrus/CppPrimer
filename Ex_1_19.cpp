#include <iostream>

int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;                    
	std::cin >> v1 >> v2;
	
	//交换
	if (v1 > v2) 
	{
		v1 = v1 + v2;
		v2 = v1 - v2;
		v1 = v1 - v2;
	}
	
	std::cout << v1 << " " << v2 << std::endl;
	
	std::cout << "The numbers between of " << v1 << " and " << v2 << " is: "; 
	while (v1 <= v2)
	{
		std::cout << v1 << " ";
		++v1;
	}
	std::cout << std::endl;
	std::cout << "End" << std::endl;
	
	return 0;
}