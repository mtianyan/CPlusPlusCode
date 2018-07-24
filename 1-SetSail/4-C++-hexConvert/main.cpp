#include<iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	cout << "请输入一个整数：" << endl;
	int x = 0; // 随用随定义
	cin >> x;
	cout << "八进制:" << oct << x << endl; // 八进制
	cout << "十进制:" << dec << x << endl; // 十进制
	cout << "十六进制:" << hex << x << endl; // 十六进制

	cout << "请输入一个布尔值(0或1):" << endl;
	bool y = false;
	cin >> y;
	cout << boolalpha << y << endl; // 布尔类型输出

	system("pause");
	return 0;
}