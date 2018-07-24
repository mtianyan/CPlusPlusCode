#include <iostream>
#include "MigrantWorker.h"
#include <stdlib.h>

int main()
{
	MigrantWorker *p = new MigrantWorker("merry", "200", "yellow");
	p->Farmer::printColor();
	p->Worker::printColor();
	p = NULL;
	system("pause");
	return 0;
}