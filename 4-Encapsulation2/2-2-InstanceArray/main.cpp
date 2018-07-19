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
	p[0].m_iY = 13;//此时因为上面p++。p已经指向第二个地址了

	p[1].m_iX = 15;//此时p指向第三个元素

	p++;
	p->m_iY = 17;//此时p指向第三个元素

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

	p++;//因为上面p=-1时才退出了循环。因此释放时已经不是原来那段内存了。

	delete []p;
	p = NULL;
	system("pause");
	return 0;
}