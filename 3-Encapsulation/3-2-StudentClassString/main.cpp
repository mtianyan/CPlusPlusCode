#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

/**
* �����ࣺStudent
* ���ݳ�Ա�����֡�����
*/
class Student
{
public:
	// �������ݳ�Ա���� m_strName ������ m_iAge
	string m_strName;
	int m_iAge;
};

int main()
{
	// ʵ����һ��Student����stu
	Student stu;
	// ���ö�������ݳ�Ա
	stu.m_strName = "mtianyan";
	stu.m_iAge = 21;

	// ͨ��cout��ӡstu��������ݳ�Ա
	cout << stu.m_strName << " " << stu.m_iAge << endl;
	system("pause");
	return 0;
}