#include <stdlib.h>
#include <iostream>
#include <string>
#include "Line.h"
using namespace std;

int main(void)
{
	Line line(1, 2, 3, 4);
	line.printInfo();//调用的是普通的

	const Line line2(1, 2, 3, 4);
	line2.printInfo();//调用的是常成员函数

	system("pause");
	return 0;
}