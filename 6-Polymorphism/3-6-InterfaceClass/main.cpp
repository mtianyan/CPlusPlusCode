#include <iostream>
using namespace std;
#include <stdlib.h>
#include "FighterPlane.h"

void flyMatch(Plane *f1, Plane *f2)
{
	f1->printCode();
	f2->printCode();
}

int main(void)
{
	FighterPlane p1("001");
	FighterPlane p2("002");

	flyMatch(&p1, &p2);

	system("pause");
	return 0;
}