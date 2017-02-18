#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		if (s1.size() > s2.size())
			cout << s1 << endl;
		else if (s1.size() < s2.size())
			cout << s2 << endl;
		else
			cout << "Size Equal" << endl;
	}
	return 0;
}