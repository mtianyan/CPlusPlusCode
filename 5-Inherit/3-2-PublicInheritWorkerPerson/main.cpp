#include "Worker.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void)
{
	//// ջ�������ڴ�
	//Worker worker;
	//worker.m_strName = "Jim";
	//worker.m_iAge = 10;
	//worker.eat();
	//worker.m_iSalary = 1000;
	//worker.work();

	//Person person;
	//person.eat(); // ������������
	// person.m_strName = "mtianyan666"; //�޷����� protected ��Ա
	// person.m_iAge = 21; //�޷����� private ��Ա

	Worker worker;
	worker.work();

	system("pause");
	return 0;
}