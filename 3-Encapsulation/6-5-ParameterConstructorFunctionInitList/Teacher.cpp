#include "Teacher.h"
#include <iostream>
#include <string>
using namespace std;

Teacher::Teacher(string name, int age, int m) :m_strName(name), m_iAge(age), m_iMax(m)
{
	cout << "Teacher(string name, int age)" << endl;
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
int Teacher::getMax() {
	return m_iMax;
}
void Teacher::setMax(int m_iMax) {
	m_iMax = m_iMax;
}