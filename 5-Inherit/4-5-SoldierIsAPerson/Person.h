#include <string>
using namespace std;

class Person
{
public:
	Person(string name = "Person_jim");
	virtual ~Person();// �������������ɼ̳С�soldier�ڵ�Ҳ������ġ�
	void play();
protected:
	string m_strName;
};