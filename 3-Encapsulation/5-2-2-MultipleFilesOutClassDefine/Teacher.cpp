#include "Teacher.h"
#include <iostream>
#include <string>
using namespace std;

string Teacher::getName()
{
	return m_strName;
}
void Teacher::setName(string name)
{
	m_strName = name;
}
string Teacher::getGender()
{
	return m_strGender;
}
void Teacher::setGender(string val)
{
	m_strGender = val;
}
int Teacher::getAge() {
	return m_iAge;
}
void Teacher::setAge(int _age) {
	m_iAge = _age;
}
void Teacher::teach() {
	cout << "ÏÖÔÚÉÏ¿Î" << endl;
};