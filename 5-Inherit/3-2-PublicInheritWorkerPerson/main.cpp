#include "Worker.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void)
{
	//// 栈中申请内存
	//Worker worker;
	//worker.m_strName = "Jim";
	//worker.m_iAge = 10;
	//worker.eat();
	//worker.m_iSalary = 1000;
	//worker.work();

	//Person person;
	//person.eat(); // 可以正常访问
	// person.m_strName = "mtianyan666"; //无法访问 protected 成员
	// person.m_iAge = 21; //无法访问 private 成员

	Worker worker;
	worker.work();

	system("pause");
	return 0;
}