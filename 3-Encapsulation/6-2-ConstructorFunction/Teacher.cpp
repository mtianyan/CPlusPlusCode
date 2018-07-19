#include "Teacher.h"
#include <iostream>
#include <string>
using namespace std;

Teacher::Teacher() {
	m_strName = "jim";
	m_iAge = 5;
	cout << "Teacher()" << endl;
}

Teacher::Teacher(string name, int age) {
	m_strName = name;
	m_iAge = age;
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
void Teacher::teach() {
	cout << "ÏÖÔÚÉÏ¿Î" << endl;
};