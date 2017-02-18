#include <iostream>

int main()
{
	///*错误注释/*嵌套的错误*/语法报错*/
	//std::cout << "/*";    //正确
	//std::cout << "*/";    //正确
	//std::cout << /* "*/" */;               //错误
	std::cout << /* "*/" */";               //修改
	//std::cout << /* "*/" /* "/*" */;       //正确
		
	return 0;
}