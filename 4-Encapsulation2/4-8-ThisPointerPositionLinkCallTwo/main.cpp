#include <iostream>
#include <stdlib.h>
#include "Array.h"
using namespace std;

int main(void)
{
	Array arr1(10);
	//��Ϊ��ʱthis�����˵�ǰ�������Կ���ʹ��"."
	arr1.printInfo().setLen(5).printInfo();
	system("pause");
	return 0;
}