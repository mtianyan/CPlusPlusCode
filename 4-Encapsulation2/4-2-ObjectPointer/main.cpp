#include <iostream>
#include "Coordinate.h"
#include <stdlib.h>

using namespace std;

int main()
{
	// ʹ�ö���ָ��ָ���ڴ棬���ַ���

	// ����ʵ����
	//Coordinate *p1 = NULL;
	//p1 = new Coordinate; //��Ϊ��Ĭ�Ϲ��캯�������ſ�д�ɲ�д
	//Coordinate *p2 = new Coordinate(); //����2

	//p1->m_iX = 10;
	//p1->m_iY = 20; // ָ�뷽ʽ
	//(*p2).m_iX = 30; //*p2ʹp2�����һ������
	//(*p2).m_iY = 40;

	//cout << (*p1).m_iX + (*p2).m_iX << endl;
	//cout << p1->m_iY + p2->m_iY << endl;

	//delete p1;
	//p1 = NULL;
	//delete p2;
	//p2 = NULL;

	//ջ��ʵ����
	Coordinate p1;
	Coordinate *p2 = &p1; //��p2ָ��p1�ĵ�ַ��p2�ɲ���p1

	p2->m_iX = 10;
	p2->m_iY = 20;

	cout << p1.m_iX << "," << (*p2).m_iY << endl;

	system("pause");
	return 0;
}