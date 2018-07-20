#include "Worker.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void)
{
	/*Worker *p = new Worker();
	p->m_strName = "mtianyan";
	p->m_iAge = 21;
	p->eat();
	p->m_iSalary = 10000;
	p->work();
	delete p;
	p = NULL;*/

	// Õ»ÖĞÉêÇëÄÚ´æ
	Worker worker;
	worker.m_strName = "Jim";
	worker.m_iAge = 10;
	worker.eat();
	worker.m_iSalary = 1000;
	worker.work();

	system("pause");
	return 0;
}