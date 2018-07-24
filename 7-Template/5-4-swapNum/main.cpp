#include <iostream>
using namespace std;
#include <stdlib.h>
/**
* 定义模板函数swapNum
* 实现功能：交换两个数的位置
*/
template <typename T>
void swapNum(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main(void)
{
	float x = 10.1;
	float y = 20.0;
	// 调用模板函数
	swapNum<float>(x, y);
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	system("pause");
	return 0;
}