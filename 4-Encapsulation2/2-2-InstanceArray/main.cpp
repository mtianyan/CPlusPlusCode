#include <stdlib.h>
#include <iostream>
#include <string>
#include "Coordinate.h"
using namespace std;

int main(void)
{
	Coordinate coor[3];
	coor[0].m_iX = 3;
	coor[0].m_iY = 5;

	Coordinate *p = new Coordinate[3];
	p->m_iX = 7;
	p[0].m_iY = 9;

	p++;
	p->m_iX = 11;
	p[0].m_iY = 13;//��ʱ��Ϊ����p++��p�Ѿ�ָ��ڶ�����ַ��

	p[1].m_iX = 15;//��ʱpָ�������Ԫ��

	p++;
	p->m_iY = 17;//��ʱpָ�������Ԫ��

	for (int i = 0; i < 3; i++)
	{
		cout << coor[i].m_iX << " coor x&y " << coor[i].m_iY << endl;

	}
	for (int j = 0; j < 3; j++)
	{
		//cout << "p_x" << p[j].m_iX << endl;
		//cout << "p_y" << p[j].m_iY << endl;
		cout << "p_x" << p->m_iX << endl;
		cout << "p_y" << p->m_iY << endl;
		p--;
	}

	p++;//��Ϊ����p=-1ʱ���˳���ѭ��������ͷ�ʱ�Ѿ�����ԭ���Ƕ��ڴ��ˡ�

	delete []p;
	p = NULL;
	system("pause");
	return 0;
}