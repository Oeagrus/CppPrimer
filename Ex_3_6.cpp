#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string s("hello,world!");
	
	for (auto &c : s)
		if (isalpha(c))
			c = 'X';
	cout << s << endl;
		
	return 0;
}