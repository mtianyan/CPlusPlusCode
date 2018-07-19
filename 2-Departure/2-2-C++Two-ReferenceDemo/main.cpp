#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
	int a = 10;
	int &b = a; // 定义一个引用(别名)
				// int &b = NULL; 计算机会报错, 初始化 无法从 int 转换为 int &

	b = 20;
	cout << a << endl;

	a = 30;
	cout << b << endl;
	system("pause");
	return 0;
}