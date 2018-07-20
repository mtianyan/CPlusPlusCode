#include "Person.h"

// 要求采用公有继承
class Worker :public Person
{
public:
	Worker();
	~Worker();
	void work();
	int m_iSalary;
};