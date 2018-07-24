#ifndef PERSON_H//假如没有定义
#define PERSON_H//定义

#include <string>
using namespace std;

class Person
{
public:
	Person(string name);
	virtual ~Person() {};
	virtual void work() = 0;
private:
	string m_strName;
};

#endif //结束符