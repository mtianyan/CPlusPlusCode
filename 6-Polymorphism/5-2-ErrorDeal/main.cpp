#include <iostream>
#include <stdlib.h>
#include "IndexException.h"
using namespace std;
void test()
{
	throw IndexException();
}
int main(void)
{
	try
	{
		test();
	}
	catch (IndexException &e)
	{
		e.printException();
	}
	system("pause");
	return 0;
}