#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s, s_add = "";
	while (cin >> s)
		s_add += s + " ";
	
	cout << s_add << endl;
	return 0;
}