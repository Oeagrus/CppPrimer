#include <iostream>

int main()
{
	int i;
	const int ic = 0;
	int *p1;
	const int *const p3 = &ic;
	int *const p2 = &i;
	
	i = ic;                //right
	//p1 = p3;               //error
	//p1 = &ic;              //error
	//p3 = &ic;              //error
	//p2 = p1;               //error
	//ic = *p3;              //error
	
	return 0;
}