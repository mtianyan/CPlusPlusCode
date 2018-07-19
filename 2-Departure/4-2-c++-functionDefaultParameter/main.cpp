#include <stdlib.h>
#include <iostream>
using namespace std;

void fun(int i = 30, int j = 20, int k = 10);

int main(void)
{
	fun();
	fun(100);
	fun(100, 200);
	fun(100, 200, 300);
	system("pause");
	return 0;
}

void fun(int i, int j, int k)
{
	cout << i << "," << j << "," << k << endl;
}