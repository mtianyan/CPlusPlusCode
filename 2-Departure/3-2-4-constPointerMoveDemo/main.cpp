#include <iostream>
using namespace std;
int main(void)
{
	int x = 3;
	int y = 5;
	int const *p = &x;
	cout << *p << endl;
	p = &y;
	// *p = 10; // p ���ܸ�������ֵ 
	cout << *p << endl;
	system("pause");
	return 0;
}