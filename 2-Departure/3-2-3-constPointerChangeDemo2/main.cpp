#include <iostream>
using namespace std;
int main(void)
{
	int x = 3;
	int y = 5;
	int *const p = &x; // const����p
    // p = &y;  // p���ܸ�������ֵ
	*p = 10;
	cout << x << endl;
	system("pause");
	return 0;
}