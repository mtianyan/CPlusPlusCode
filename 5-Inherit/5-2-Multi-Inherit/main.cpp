#include <iostream>
#include <stdlib.h>
#include "Infantry.h"

void test1(Person p)
{
	p.play();
}
void test2(Person &p)
{
	p.play();
}
void test3(Person *p)
{
	p->play();
}

int main()
{
	Infantry infantry;
	test1(infantry);
	test2(infantry);
	test3(&infantry);
	system("pause");
	return 0;
}