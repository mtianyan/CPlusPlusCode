#include "Person.h"
#include <string>
using namespace std;

class  Soldier :public Person
{
public:
	Soldier(string name = "james", int age = 20);
	virtual ~Soldier();
	void work();

protected:
	string m_iAge;
};