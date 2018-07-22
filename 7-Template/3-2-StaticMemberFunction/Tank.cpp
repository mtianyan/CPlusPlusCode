#include <iostream>
#include "Tank.h"
using namespace std;

int Tank::s_iCount = 10;//单独初始化

Tank::Tank(char code)
{
	m_cCode = code;
	s_iCount++;
	cout << "tank" << endl;

}
Tank::~Tank()
{
	s_iCount--;
	cout << "~Tank()" << endl;
}

void Tank::fire()
{
	cout << "Tank--fire" << endl;
}
int Tank::getCount()
//声明时添加static。定义时普通
{
	return s_iCount;
}