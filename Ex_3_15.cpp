#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string str;
	vector<string> svec;
	
	while (cin >> str)
		svec.push_back(str);
	
	for (auto ostr: svec)
		cout << ostr << endl;
	
	return 0;
}