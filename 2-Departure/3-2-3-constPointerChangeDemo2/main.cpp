#include <iostream>
using namespace std;
int main(void)
{
	int x = 3;
	int y = 5;
	int *const p = &x; // const修饰p
    // p = &y;  // p不能给常量赋值
	*p = 10;
	cout << x << endl;
	system("pause");
	return 0;
}