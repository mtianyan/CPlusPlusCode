#include <string>
using namespace std;

class Teacher {
public:
	Teacher(string name = "hi", int age = 1, int m = 100); // 有参默认构造函数
	void setName(string name);
	string getName();

	void setAge(int _age);
	int getAge();

	int getMax();
	void setMax(int m_iMax);
private:
	string m_strName;
	int m_iAge;
	const int m_iMax;

};