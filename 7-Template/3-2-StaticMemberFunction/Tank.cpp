#include <iostream>
#include "Tank.h"
using namespace std;

int Tank::s_iCount = 10;//������ʼ��

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
//����ʱ���static������ʱ��ͨ
{
	return s_iCount;
}