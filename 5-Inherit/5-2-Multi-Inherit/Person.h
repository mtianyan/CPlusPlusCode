#include <string>
using namespace std;

class Person
{
public:
	Person(string name = "jim");
	virtual ~Person();// �������������ɼ̳С�soldier�ڵ�Ҳ������ġ�
	void play();
protected:
	string m_strName;
};