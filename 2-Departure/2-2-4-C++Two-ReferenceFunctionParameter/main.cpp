#include <stdlib.h>
#include <iostream>
using namespace std;
void fun(int &a, int &b);
int main(void)
{
	int x = 10;
	int y = 20;

	cout << x << endl;
	cout << y << endl;
	fun(x, y);
	cout << "½»»»ºó:" << endl;
	cout << x << endl;
	cout << y << endl;
	system("pause");
	return 0;
}

void fun(int &a, int &b)
{
	int c = 0;
	c = a;
	a = b;
	b = c;
}