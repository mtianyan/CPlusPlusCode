#include <iostream>
#include "Coordinate.h"
#include <stdlib.h>

using namespace std;

int main()
{
	// 使用对象指针指向内存，两种方法

	// 堆中实例化
	//Coordinate *p1 = NULL;
	//p1 = new Coordinate; //因为有默认构造函数，括号可写可不写
	//Coordinate *p2 = new Coordinate(); //方法2

	//p1->m_iX = 10;
	//p1->m_iY = 20; // 指针方式
	//(*p2).m_iX = 30; //*p2使p2变成了一个对象
	//(*p2).m_iY = 40;

	//cout << (*p1).m_iX + (*p2).m_iX << endl;
	//cout << p1->m_iY + p2->m_iY << endl;

	//delete p1;
	//p1 = NULL;
	//delete p2;
	//p2 = NULL;

	//栈中实例化
	Coordinate p1;
	Coordinate *p2 = &p1; //让p2指向p1的地址，p2可操作p1

	p2->m_iX = 10;
	p2->m_iY = 20;

	cout << p1.m_iX << "," << (*p2).m_iY << endl;

	system("pause");
	return 0;
}