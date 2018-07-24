#include <string>
using namespace std;

class Teacher {
public:
	void setName(string name);
	string getName();

	void setGender(std::string val);
	string getGender();

	void setAge(int _age);
	int getAge();

	void teach();
private:
	string m_strName;
	string m_strGender;
	int m_iAge;
};