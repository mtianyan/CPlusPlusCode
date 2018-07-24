#include <iostream>
#include "Infantry.h"

using namespace std;
Infantry::Infantry(string name /* = "jack" */, int age /* = 30 */)
{
	m_strName = name;
	m_iAge = age;
	cout << "Infantry()" << endl;
}
Infantry::~Infantry()
{
	cout << "~Infantry()" << endl;
}
void Infantry::attack() {
	cout << m_iAge << endl;
	cout << m_strName << endl;
	cout << "Infantry --attack" << endl;
}