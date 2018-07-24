#include <iostream>
#include "Circle.h"
#include <stdlib.h>
using namespace std;

int main()
{
	Shape shape;
	int *p = (int *)&shape;
	cout << (unsigned int)(*p) << endl;
	// 虚函数表地址

	Circle circle(100);
	int *q = (int *)&circle;
	q++;
	cout << (unsigned int)(*q) << endl;
	// 打印出的还是虚函数表地址
	system("pause");
	return 0;
}