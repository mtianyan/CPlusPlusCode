#include "Plane.h"
#include <iostream>
using namespace std;
Plane::Plane(string code)
{
	m_strCode = code;
}
void Plane::printCode()
{
	cout << m_strCode << endl;
}