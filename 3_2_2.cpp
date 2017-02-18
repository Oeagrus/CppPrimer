#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// int main()
// {
	// string s;
	// cin >> s;
	// cout << s << endl;
	// return 0;
// }

// int main()
// {
	// string word;
	// while (cin >> word)
		// cout << word;
	
	// return 0;
// }

// int main()
// {
	// string line;
	// while (getline(cin,line))
		// if (line.size() > 20)
		// if (!line.empty())
			// cout << line << endl;
	// return 0;
// }

int main()
{
	string str = "Hello";
	string phrase = "Hello World";
	string slang = "Hiya";
	
	if (str < phrase)
		cout << "1111" << endl;
	if (slang > phrase)
		cout << "2222" << endl;
	
	cout << "%%%" + (" " + str + "|||" + phrase + "|||")<< endl;
	
	return 0;
}





