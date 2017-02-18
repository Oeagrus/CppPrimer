#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	// vector<int> v{1,2,3,4,5,6,7,8,9};
	
	// for (auto &i: v)
		// i *= i;
	
	// for (auto i: v)
		// cout << i << " ";
	// cout << endl;
	
	vector<int> grades(11,0);
	unsigned score;
	
	while (cin >> score)
		if (score <= 100)
			++grades[score/10]; 
	
	for (auto n : grades)
		cout << n << " ";
	cout << endl;

	return 0;
}