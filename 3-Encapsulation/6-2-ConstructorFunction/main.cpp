#include <iostream>
#include <string>
#include "Teacher.h"
using namespace std;

int main(void)
{
	Teacher teacher; //�޲���ʵ����
	Teacher t2("merry", 15);//�в���ʵ����
	Teacher t3("james");//,���캯����Ĭ��ֵ20
	cout << teacher.getName() << " " << teacher.getAge() << endl;
	cout << t2.getName() << " " << t2.getAge() << endl;
	cout << t3.getName() << " " << t3.getAge() << endl;
	teacher.teach();
	system("pause");
	return 0;
}