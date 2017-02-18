#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
	string s = "hello,world!";
	
	for (char &c : s)
		if (isalpha(c))
			c = 'X';
	cout << s << endl;
	return 0;
} 