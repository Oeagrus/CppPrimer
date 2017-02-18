#include <iostream>
#include <string>
#include <cctype>

using std::endl;
using std::cout;
using std::cin;
using std::string;

int main()
{
	string s = "hello,world!";
	// decltype(s.size()) n = 0;
	// while (n < s.size())
	// {
		// if (isalpha(s[n]))
		// {
			// s[n] = 'X';
		// }
		// ++n;
	// }
	// cout << s << endl;
	
	for (decltype(s.size()) index = 0; index != s.size(); ++index)
		if (isalpha(s[index]))
			s[index] = 'X';
	cout << s << endl;
	
	return 0;
}