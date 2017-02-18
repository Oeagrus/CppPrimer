#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::cerr;

struct Sales_data 
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	Sales_data data1, data2;
	
	double price = 0;
	cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;
	cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;
	
	if (data1.bookNo == data2.bookNo) 
	{
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		
		//输出 ISBN 总销售量 总销售额 平均销售价格
		cout << data1.bookNo << " " << totalCnt
		          << " " << totalRevenue << " ";
		if (totalCnt != 0)
			cout << totalRevenue/totalCnt << endl;
		else
			cout << "(no sales)" << endl;
		return 0;
	}
	else
	{
		cerr << "Data must refer to the same "
		     << endl;
		return -1;
	}
}

// int main()
// {
	// int sum = 0, val = 50;
	// while (val <= 100)
	// {
		// sum += val;
		// ++val;
	// }
	
	// cout << "Sum of 50 to 100 inclusive is "
		 // << sum << endl;

	// int val = 10;
	
	// while (val >= 0)
	// {
		// cout << "The current val is "
		     // << val << endl;
		// --val;
	// }
	// cout << "End" << endl;		 
	
	// cout << "Enter two numbers:" << endl;
	// int v1 = 0, v2 = 0;                    
	// cin >> v1 >> v2;

	// cout << "The numbers between of " << v1 << " and " << v2 << " is: "; 
	// while (v1 <= v2)
	// {
		// cout << v1 << " ";
		// ++v1;
	// }
	// cout << endl;
	// cout << "End" << endl;
	
	// return 0;
// }