#include <iostream>
#include <stdlib.h>
#include "Time.h"
#include "Match.h"
using namespace std;

int main()
{
	Match m(6, 30, 50);
	m.testTime();
	//无法访问 private 成员
	system("pause");
	return 0;
}