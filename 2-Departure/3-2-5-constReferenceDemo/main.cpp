#include <iostream>
using namespace std;
int main(void)
{
	int x = 3;
	int y = 5;

	int const &z = x;
	// z = 10;  // z不能被改变
	x = 20;
	cout << x << endl;
	system("pause");
	return 0;
}