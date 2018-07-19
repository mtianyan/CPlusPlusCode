#include <stdlib.h>
#include <iostream>
#include <string>
#include "Line.h"

using namespace std;

int main(void)
{
	Line *p = new Line();

	delete p;
	p = NULL;
	system("pause");
	return 0;
}