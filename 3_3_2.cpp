#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::cout;
using std::cin;
using std::endl;

using std::string;

int main()
{
	vector<int> v2;
	for (int i = 0; i < 100; ++i)
		v2.push_back(i);
	
	for(auto n: v2)
		cout << n << endl;
	
	string word;
	vector<string> text;
	
	while (cin >> word)
		text.push_back(word);
	

	return 0;	
}