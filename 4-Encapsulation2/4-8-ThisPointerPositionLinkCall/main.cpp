#include <iostream>
#include <stdlib.h>
#include "Array.h"
using namespace std;

int main(void)
{
	Array arr1(10);
	arr1.printInfo().setLen(5);
	cout << "len_after_set:" << arr1.getLen() << endl;
	system("pause");
	return 0;
}