#include <string>
using namespace std;
#include "Person.h"
class Worker : virtual public Person
{
public:
	Worker(string code = "001", string color = "red");
	//ϣ��worker���Դ����ɫ��person
	virtual ~Worker();
	void carry();
protected:
	string m_strCode;
};