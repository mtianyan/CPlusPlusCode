#include "Person.h"
#include <iostream>

using namespace std;

Person::Person()
{
	cout << "Person()" << endl;

}

Person::~Person()
{
	cout << "~Person()" << endl;

}

void Person::eat() {
	m_strName = "mtianyan";
	m_iAge = 21;
	cout << "eat()" << endl;
}