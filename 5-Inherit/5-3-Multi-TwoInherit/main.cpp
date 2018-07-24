#include <iostream>
#include "MigrantWorker.h"
#include <stdlib.h>

int main()
{
	MigrantWorker *p = new MigrantWorker("jim", "100");
	p->carry();
	p->sow();
	delete p;
	p = NULL;
	system("pause");
	return 0;
}