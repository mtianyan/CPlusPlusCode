#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
	int a = 10;
	int &b = a; // ����һ������(����)
				// int &b = NULL; ������ᱨ��, ��ʼ�� �޷��� int ת��Ϊ int &

	b = 20;
	cout << a << endl;

	a = 30;
	cout << b << endl;
	system("pause");
	return 0;
}