#include <iostream>

int main()
{
	std::cout << "hello,"
				"world!" << std::endl;                     //字符串可换行
	std::cout << "Hi \x4dO\115!\n";           //\x4d 和 \115 都表示字符M
	std::cout << 1E-3F << std::endl;
	std::cout << 10. << std::endl;
	return 0;
}