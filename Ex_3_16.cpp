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
	
	cout << v1.size() << endl;
	for (auto n : v2)
		cout << n << " ";
	cout << endl;
	for (auto n : v3)
		cout << n << " ";
	cout << endl;
	for (auto n : v4)
		cout << n << " ";
	cout << endl;
	for (auto n : v5)
		cout << n << " ";
	cout << endl;
	for (auto str : v6)
		cout << str << " ";
	cout << endl;
	for (auto str : v7)
		cout << str << " ";
	cout << endl;
	
	for (decltype(v7.size()) i = 0; i < v7.size(); ++i)
		cout << v7[i] << " ";
	cout << endl;
	
	return 0;
}