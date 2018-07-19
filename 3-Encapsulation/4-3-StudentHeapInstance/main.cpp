#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

/**
* 定义类：Student
* 数据成员：m_strName
* 数据成员的封装函数：setName()、getName()
*/
class Student
{
public:
	// 定义数据成员封装函数setName()
	void setName(string _name)
	{
		m_strName = _name;
	}


	// 定义数据成员封装函数getName()
	string getName() const
	{
		return m_strName;
	}

	//定义Student类私有数据成员m_strName
private:
	string m_strName;

};

int main()
{
	// 使用new关键字，实例化对象
	Student *str = new Student();
	// 设置对象的数据成员
	str->setName("mtianyan");
	// 使用cout打印对象str的数据成员
	cout << str->getName() << endl;
	// 将对象str的内存释放，并将其置空
	delete str;
	str = NULL;
	system("pause");
	return 0;
}