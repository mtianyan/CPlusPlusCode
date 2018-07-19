#include <stdlib.h>
#include <iostream>
#include <string>
#include "Teacher.h"
using namespace std;

int main(void)
{
	Teacher teacher("merry", 12, 150);
	cout << teacher.getName() << " " << teacher.getAge() << " " << teacher.getMax() << endl;
	system("pause");
	return 0;
}