#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
	// string str("some string");
	// for (auto c : str)
		// cout << c << endl;
	
	/* 统计字符串中的标点符号个数 */
	// string s("Hello World!!!");
	// decltype (s.size()) punct_cnt = 0;
	// for (auto c : s)
		// if (ispunct(c))
			// ++punct_cnt;
	// cout << punct_cnt << endl;
	
	/* 小写字母转换为大写 */
	// for (auto &c : s)
		// c = toupper(c);
	// cout << s << endl;
	
	// string str;
	// while (getline(cin,str))
	// {
		// for (auto &c : str)
		// {
			// c = toupper(c);
			// if (ispunct(c))
				// c = ' ';
		// }
		// cout << str;
	// }
	
	/* 将一部分转换为十六进制 */
	// string s = "hello world!";
	// for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index )
		// s[index] = toupper(s[index]);
	// cout << s << endl;
	
	/* 转换为十六进制 */
	const string hexdigits = "0123456789ABCDE";
	cout << "Enter a series of numbers between 0 and 15"
	     << " sparated by spaces. Hit ENTER when finished: "
		 << endl;
	
	string result;
	string::size_type n;
	
	while (cin >> n)
		if (n < hexdigits.size())
			result += hexdigits[n];
	cout << result << endl;
	
	return 0;
}