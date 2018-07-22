#include <string>
using namespace std;
#include "Person.h"
class Worker :public Person
{
public:
	Worker(string name, int  age);
	//virtual void work();
	virtual ~Worker() {};
private:
	int  m_iAge;
};