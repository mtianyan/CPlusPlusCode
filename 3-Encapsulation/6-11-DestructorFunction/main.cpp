#include <stdlib.h>
#include <iostream>
#include <string>
#include "Teacher.h"
using namespace std;

void test(Teacher t) {

}

int main(void)
{
	Teacher t1;
	Teacher t2(t1);
	Teacher *p = new Teacher();
	delete p;
	p = NULL;
	system("pause");
	return 0;
}