#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

using std::cout;
using std::cin;
using std::endl;

int main()
{
	vector<int> v1;     //0
	vector<int> v2(10);   //10个0
	vector<int> v3(10,42);    //10个24
	vector<int> v4{10};        //1个10
	vector<int> v5{10,42};     //10，42
	vector<string> v6{10};       //10个""
	vector<string> v7{10,"hi"};   //10个"hi"
	
	cout << v6.size() << v6[0] << endl;
	for(auto &str : v7) 
		cout << str;
	
	
	return 0;
}