#include <iostream>
#include <string>
#include "Teacher.h"
using namespace std;

int main(void)
{
	Teacher teacher; //无参数实例化
	Teacher t2("merry", 15);//有参数实例化
	Teacher t3("james");//,构造函数有默认值20
	cout << teacher.getName() << " " << teacher.getAge() << endl;
	cout << t2.getName() << " " << t2.getAge() << endl;
	cout << t3.getName() << " " << t3.getAge() << endl;
	teacher.teach();
	system("pause");
	return 0;
}