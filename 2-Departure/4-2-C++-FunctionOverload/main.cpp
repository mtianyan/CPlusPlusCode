#include <stdlib.h>
#include <iostream>
using namespace std;

void fun(int i = 30, int j = 20, int k = 10);
void fun(double i = 30.0, double j = 40.0);
int main(void)
{
	// fun(); //“fun” : 对重载函数的调用不明确
	// 	有多个 重载函数 "fun" 实例与参数列表匹配


	fun(1, 2);
	fun(1.1, 2.2);

	system("pause");
	return 0;
}

void fun(int i, int j, int k)
{
	cout << i << "," << j << "," << k << endl;
}

void fun(double i, double j)
{
	cout << i << "," << j << endl;
}