#include <stdlib.h>
#include <iostream>
#include <string>
#include "Teacher.h"
using namespace std;

void test(Teacher t) {

}

int main(void)
{
	Teacher teacher;
	Teacher t2 = teacher;
	Teacher t3(t2);  // ��������ʹ��t2����teacher��ֻ����ÿ������캯��
	test(teacher); //����ʹ����ʵ�����Ķ���ʱ���á�
	cout << teacher.getName() << " " << teacher.getAge() << endl;
	system("pause");
	return 0;
}