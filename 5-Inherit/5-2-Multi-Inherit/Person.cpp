#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person(string name)
{
	m_strName = name;
	cout << "person()" << endl;

}
Person::~Person()
{
	cout << "~person()" << endl;
}

void Person::play()
{
	cout << "person - play()" << endl;
	cout << m_strName << endl;
}