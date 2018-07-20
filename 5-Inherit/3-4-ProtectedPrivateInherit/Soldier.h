#include "Person.h"

class  Soldier :private Person
{
public:
	Soldier();
	void work();

private:
	int m_iAge;
};