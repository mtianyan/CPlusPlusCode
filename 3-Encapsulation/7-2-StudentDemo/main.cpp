#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
/**
* �����ࣺStudent
* ���ݳ�Ա��m_strName
* �޲ι��캯����Student()
* �вι��캯����Student(string _name)
* �������캯����Student(const Student& stu)
* ����������~Student()
* ���ݳ�Ա������setName(string _name)��getName()
*/
class Student {
public:
	Student() {
		m_strName = "";
	};
	Student(string _name) {
		m_strName = _name;
	};
	Student(const Student& stu) {

	};
	~Student() {

	};
	void setName(string _name) {
		m_strName = _name;
	};
	string getName() {
		return m_strName;
	};
private:
	string m_strName;
};

int main(void)
{
	// ͨ��new��ʽʵ��������*stu
	Student *stu = new Student();
	// ���Ķ�������ݳ�ԱΪ��mtianyan��
	stu->setName("mtianyan");
	// ��ӡ��������ݳ�Ա
	cout << stu->getName() << endl;
	delete stu;
	stu = NULL;
	system("pause");
	return 0;
}