#include <iostream>
using namespace std;

void fun( int &a,  int &b);  // 函数声明

int main(void)
{
	int x = 3;
	int y = 5;
	fun(x, y);
	cout << x << "," << y << endl;
	system("pause");
	return 0;
}

// 函数实现
void fun( int & a,  int & b)
{
	// 错误因为传入的值为const。不能进行修改。
	a = 10;
	b = 20;
}