#include <iostream>

int main()
{
	int val = 10;
	
	while (val >= 0)
	{
		std::cout << "The current val is "
				  << val << std::endl;
		--val;
	}
	std::cout << "End" << std::endl;
	return 0;
}