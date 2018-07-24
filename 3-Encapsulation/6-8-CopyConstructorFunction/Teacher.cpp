#include "Teacher.h"
#include <iostream>
#include <string>
using namespace std;

Teacher::Teacher(string name, int age, int m) :m_strName(name), m_iAge(age)
{
	cout << "Teacher(string name, int age)" << endl;
}
Teacher::Teacher(const Teacher& tea) {
	cout << "Teacher(const Teacher &tea)" << endl;
}
string Teacher::getName()
{
	return m_strName;
}
void Teacher::setName(string name)
{
	m_strName = name;
}
int Teacher::getAge() {
	return m_iAge;
}
void Teacher::setAge(int _age) {
	m_iAge = _age;
}