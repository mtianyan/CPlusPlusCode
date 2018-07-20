#include <string>
using namespace std;

class Person
{
public:
	Person(string name = "jim");
	virtual ~Person();// 虚析构函数，可继承。soldier内的也会是虚的。
	void play();
protected:
	string m_strName;
};