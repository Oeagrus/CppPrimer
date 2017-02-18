#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;

int main()
{
	vector<vector<int>> ivec;
	//vector<string> svec = ivec;        //error 初始化错误
	vector<string> svec(10,"null");
	return 0;
}