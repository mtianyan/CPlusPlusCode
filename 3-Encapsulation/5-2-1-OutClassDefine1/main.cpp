#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;
class Teacher {
public:
	void setName(string name);
	string getName();

	void setGender(std::string val);
	string getGender();

	void setAge(int _age);
	int getAge();

	void teach();
private:
	string m_strName;
	string m_strGender;
	int m_iAge;
};

string Teacher::getName()
{
	return m_strName;
}
void Teacher::setName(string name)
{
	m_strName = name;
}
string Teacher::getGender()
{
	return m_strGender;
}
void Teacher::setGender(string val)
{
	m_strGender = val;
}
int Teacher::getAge() {
	return m_iAge;
}
void Teacher::setAge(int _age) {
	m_iAge = _age;
}
void Teacher::teach() {
	cout << "ÏÖÔÚÉÏ¿Î" << endl;
};
int main(void)
{
	Teacher teacher;
	teacher.setAge(21);
	teacher.setName("mtianyan");
	teacher.setGender("ÄÐ");
	cout << teacher.getName() << " " << teacher.getGender() << " " << teacher.getAge() << endl;
	teacher.teach();
	system("pause");
	return 0;
}