#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::cout;
using std::endl;

int main()
{
	string s = "hello,world!";
	string s2 = "";
	
	for (auto c : s)
		if (!ispunct(c))
			s2 += c;
		
	cout << s2 << endl;
	
	return 0;
	
};