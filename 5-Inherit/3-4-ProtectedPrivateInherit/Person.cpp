#include <iostream>
#include "Person.h"
using namespace std;

Person::Person()
{
	m_strName = "merry";
}

void Person::play() {
	cout << "person - play" << endl;
	cout << m_strName << endl;
}