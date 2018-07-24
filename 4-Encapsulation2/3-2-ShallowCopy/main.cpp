#include <iostream>
#include <stdlib.h>
#include "Array.h"
using namespace std;

int main(void)
{
	Array arr1;
	arr1.setCount(5);

	Array arr2 = arr1;

	cout << "arr2,count:" << arr2.getCount() << endl;
	system("pause");
	return 0;
}