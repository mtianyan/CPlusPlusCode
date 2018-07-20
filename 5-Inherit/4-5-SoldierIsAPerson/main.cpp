#include <iostream>
#include <stdlib.h>
#include "Soldier.h"

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
	Person p;
	Soldier s;
	test3(&p);
	test3(&s);

	system("pause");
	return 0;
}