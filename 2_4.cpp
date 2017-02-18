#include <iostream>

extern const int bufSize1 = 512;          //这样才可以共享
//extern const int bufSize1;              //其他文件中声明

int main()
{
	const int bufSize = 512;          //只在本文件中有效，编译过程中将代码中的bufSize替换为512
	//const int k;                    //const 对象必须初始化
	//k = 21;                         //不能给 const 对象赋值
		
	double dval = 3.14;
	const int i = dval;
	const int &r1 = dval;   
	//int &r2 = dval;    //error 引用类型不一致
	
	std::cout << dval << " " << i << " " << r1 << std::endl;
	
	const double pi = 3.14;
	//double *ptr = &pi;           //error 指针与所指对象类型不一致
	const double *cptr = &pi;      
	//*cptr = 42;                    //error 指向 const 对象
	cptr = &dval;         //right 允许常量指针指向非常量的对象
	
	int errNumb = 0;
	int *const curErr = &errNumb;         //curErr 一直指向errNumb
	const double pi2 = 3.1415926;
	const double *const pip = &pi2;       //pip 一直指向常量pi2
	
	
	return 0;
}