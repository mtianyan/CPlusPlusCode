#include <stdlib.h>
#include <iostream>
using namespace std;

int main(void)
{
	int a = 3;
	int *p = &a;
	int *&q = p;
	*q = 5;

	cout << a << endl;
	system("pause");
	return 0;
}