#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
	m_strName = "mtianyan";

}

void Person::play()
{
	cout << "person - play()" << endl;
	cout << m_strName << endl;
}