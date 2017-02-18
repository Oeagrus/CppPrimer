#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item sum_item, item;
	if (std::cin >> sum_item)
	{
		while (cin >> item)
			if (item.isbn() == sum_item.isbn())
				sum_item += item;
			
		std::cout << sum_item << std::endl;
		return 0;
	}
	else
		return -1;
}