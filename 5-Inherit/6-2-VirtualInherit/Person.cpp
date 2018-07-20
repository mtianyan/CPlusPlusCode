#include <iostream>
#include "Person.h"
using namespace std;

Person::Person(string color)
{
	m_strColor = color;
	cout << "person()" << endl;
}

Person::~Person()
{
	cout << "~Person()" << endl;
}

void Person::printColor()
{
	cout << m_strColor << endl;
	cout << "Person -- printColor" << endl;
}