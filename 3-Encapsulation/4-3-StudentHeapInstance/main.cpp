#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

/**
* �����ࣺStudent
* ���ݳ�Ա��m_strName
* ���ݳ�Ա�ķ�װ������setName()��getName()
*/
class Student
{
public:
	// �������ݳ�Ա��װ����setName()
	void setName(string _name)
	{
		m_strName = _name;
	}


	// �������ݳ�Ա��װ����getName()
	string getName() const
	{
		return m_strName;
	}

	//����Student��˽�����ݳ�Աm_strName
private:
	string m_strName;

};

int main()
{
	// ʹ��new�ؼ��֣�ʵ��������
	Student *str = new Student();
	// ���ö�������ݳ�Ա
	str->setName("mtianyan");
	// ʹ��cout��ӡ����str�����ݳ�Ա
	cout << str->getName() << endl;
	// ������str���ڴ��ͷţ��������ÿ�
	delete str;
	str = NULL;
	system("pause");
	return 0;
}