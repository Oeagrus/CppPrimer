#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total;
	
	if (std::cin >> total)
	{
		Sales_item trans;
		
		while (std::cin >> trans)
		{
			if (total.isbn() == trans.isbn())
				total += trans;
			else
			{
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl;        //打印最后一本书的销售结果
		return 0;
	}
	else
	{
		//没有输入，警告读者！
		std::cerr << "No Data?!" << std::endl;
		return -1;
	}
}