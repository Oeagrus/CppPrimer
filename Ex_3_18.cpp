#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main()
{
	vector<int> ivec;
	//ivec[0] = 42;   //程序编译成功，运行崩溃
	ivec.push_back(42);
	cout << ivec[0];
	return 0;
}