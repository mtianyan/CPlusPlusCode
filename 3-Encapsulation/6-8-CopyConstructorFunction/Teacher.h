#include <string>
using namespace std;

class Teacher {
public:
	Teacher(string name = "mtianyan", int age = 21, int m = 100);
	Teacher(const Teacher& tea); //¿½±´¹¹Ôìº¯Êý
	void setName(string name);
	string getName();
	void setAge(int _age);
	int getAge();
private:
	string m_strName;
	int m_iAge;
};