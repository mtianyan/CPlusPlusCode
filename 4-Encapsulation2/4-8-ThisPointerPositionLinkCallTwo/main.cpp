#include <iostream>
#include <stdlib.h>
#include "Array.h"
using namespace std;

int main(void)
{
	Array arr1(10);
	//因为此时this返回了当前对象。所以可以使用"."
	arr1.printInfo().setLen(5).printInfo();
	system("pause");
	return 0;
}