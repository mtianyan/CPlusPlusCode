#include <iostream>
#include <stdlib.h>
#include "Time.h"
#include "Match.h"
using namespace std;

int main()
{
	Time t(6, 34, 35);
	Match m;
	m.printTime(t);
	system("pause");
	return 0;
}