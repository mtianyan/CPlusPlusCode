#include <iostream>
#include "Circle.h"
#include <stdlib.h>
using namespace std;

int main()
{
	Shape shape;
	int *p = (int *)&shape;
	cout << (unsigned int)(*p) << endl;
	// �麯�����ַ

	Circle circle(100);
	int *q = (int *)&circle;
	q++;
	cout << (unsigned int)(*q) << endl;
	// ��ӡ���Ļ����麯�����ַ
	system("pause");
	return 0;
}