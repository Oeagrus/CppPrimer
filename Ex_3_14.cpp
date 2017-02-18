#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<int> ivec;
	int in;
	
	while (cin >> in)
		ivec.push_back(in);
	//for (int i = 0; i < 100; i = 2*i)
		//ivec.push_back(i);
	
	for(int n: ivec)
		cout << n << " ";
	cout << endl;
	return 0;
}