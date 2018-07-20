#include <string>
using namespace std;
#include "Person.h"
class Worker : virtual public Person
{
public:
	Worker(string code = "001", string color = "red");
	//希望worker可以传入肤色给person
	virtual ~Worker();
	void carry();
protected:
	string m_strCode;
};