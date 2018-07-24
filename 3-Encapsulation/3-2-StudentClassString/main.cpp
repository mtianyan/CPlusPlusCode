#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

/**
* 定义类：Student
* 数据成员：名字、年龄
*/
class Student
{
public:
	// 定义数据成员名字 m_strName 和年龄 m_iAge
	string m_strName;
	int m_iAge;
};

int main()
{
	// 实例化一个Student对象stu
	Student stu;
	// 设置对象的数据成员
	stu.m_strName = "mtianyan";
	stu.m_iAge = 21;

	// 通过cout打印stu对象的数据成员
	cout << stu.m_strName << " " << stu.m_iAge << endl;
	system("pause");
	return 0;
}