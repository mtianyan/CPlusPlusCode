#include <stdlib.h>
#include <iostream>
#include <string>
#include "Line.h"
using namespace std;

int main(void)
{
	Line line(1, 2, 3, 4);
	line.printInfo();//���õ�����ͨ��

	const Line line2(1, 2, 3, 4);
	line2.printInfo();//���õ��ǳ���Ա����

	system("pause");
	return 0;
}