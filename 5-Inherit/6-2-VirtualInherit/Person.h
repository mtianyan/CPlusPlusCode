#ifndef PERSON_H//假如没有定义
#define PERSON_H//定义

#include <string>
using namespace std;

class Person
{
public:
	Person(string color = "blue");
	virtual ~Person();
	void printColor();
protected:
	string m_strColor;
};

#endif //结束符