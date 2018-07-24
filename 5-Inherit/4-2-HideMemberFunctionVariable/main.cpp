#include <iostream>
#include <stdlib.h>
#include "Soldier.h"
int main()
{
	Soldier soldier;
	soldier.work();
	soldier.play(7);
	soldier.Person::play();
	system("pause");
	return 0;
}