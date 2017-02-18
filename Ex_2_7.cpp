#include <iostream>

int main()
{
	std::cout << "Who goes with F\145rgus?\012" << std::endl;        //0145 = 0x65 = 'e'
	std::cout << 3.14e1L << " " << " " << 3.14L << std::endl;
	//std::cout << 1024f << std::endl;    //报错，f为浮点数类型后缀，不能用于整型字面值
	
	return 0;
}