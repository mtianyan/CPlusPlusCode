#include "Person.h"

class  Soldier :public Person
{
public:
	Soldier();
	void play(int x);
	void work();

protected:
	string m_strName;
};