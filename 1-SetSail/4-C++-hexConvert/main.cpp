#include<iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	cout << "������һ��������" << endl;
	int x = 0; // �����涨��
	cin >> x;
	cout << "�˽���:" << oct << x << endl; // �˽���
	cout << "ʮ����:" << dec << x << endl; // ʮ����
	cout << "ʮ������:" << hex << x << endl; // ʮ������

	cout << "������һ������ֵ(0��1):" << endl;
	bool y = false;
	cin >> y;
	cout << boolalpha << y << endl; // �����������

	system("pause");
	return 0;
}