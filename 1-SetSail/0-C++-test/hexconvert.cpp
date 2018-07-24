#include<iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	cout << "请输入一个整数：" << endl;
	int x = 0;
	cin >> x;
	cout << oct << x << endl;
	cout << dec << x << endl;
	cout << hex << x << endl;

	cout << "请输入一个布尔值（0、1）:" << endl;
	bool y = false;
	cin >> y;
	cout << boolalpha << y << endl;

	system("pause");
	return 0;
}