#include <iostream>
#include <stdlib.h>
#include "Array.h"
using namespace std;

int main(void)
{
	Array arr1(10);

	arr1.printInfo();
	cout << &arr1 << endl;
	system("pause");
	return 0;
}