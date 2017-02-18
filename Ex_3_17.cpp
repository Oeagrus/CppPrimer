#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main()
{
	string word;
	vector<string> text;
	
	while (cin >> word)
		text.push_back(word);
	
	for(auto &s : text)
	{
		for(auto &c : s)
			c = toupper(c);    // 注意toupper的返回值为int，直接输出为数字
		cout << s << endl;
	}
	
	for (auto s : text)      
		cout << s << endl;
	
	return 0;
}