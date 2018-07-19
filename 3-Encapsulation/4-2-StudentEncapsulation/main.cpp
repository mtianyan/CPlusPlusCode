#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;
class Student {
public:

	string getName() const
	{
		return m_strName;
	}

	void setName(string _name)
	{
		m_strName = _name;
	}

	string getGender()
	{
		return m_strGender;
	}

	void setGender(string val)
	{
		m_strGender = val;
	}

	int getScore() {
		return m_iScore;
	}

	void study(int _score) {
		m_iScore += _score;
	}

	void initScore() {
		m_iScore = 0;
	}
private:
	string m_strName;
	string m_strGender;
	int m_iScore;

};

int main(void)
{
	Student stu;
	// stu.initScore();
	stu.setName("ÌìÑÄÃ÷ÔÂóÏ");
	stu.setGender("ÄĞ");
	stu.study(5);
	stu.study(3);

	cout << stu.getName() << " " << stu.getGender() << " " << stu.getScore() << endl;

	system("pause");
	return 0;
}