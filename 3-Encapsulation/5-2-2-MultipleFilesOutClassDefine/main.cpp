#include <stdlib.h>
#include <iostream>
#include <string>
#include "Teacher.h"
using namespace std;

int main(void)
{
	Teacher teacher;
	teacher.setAge(21);
	teacher.setName("mtianyanMultiple");
	teacher.setGender("ÄÐ");
	cout << teacher.getName() << " " << teacher.getGender() << " " << teacher.getAge() << endl;
	teacher.teach();
	system("pause");
	return 0;
}