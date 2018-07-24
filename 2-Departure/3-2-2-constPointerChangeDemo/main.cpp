#include <iostream>
using namespace std;
int main(void)
{
	int x = 3;
	int y = 4;
	int const *p = &x; // const int *p = &x等价
    // 都是修饰*p的

    //*p = 5;
	x = 5;
	p = &y;
	cout << *p << endl;
	system("pause");
	return 0;
}