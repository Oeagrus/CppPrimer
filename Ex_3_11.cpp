#include <iostream>
#include <string>
using std::string;
using std::endl;
using std::cout;

int main()
{
	const string s = "Keep out!";
	
	for (auto &c : s)
	{
		cout << c;  //const &
	}
	return 0;
}