#include <string.h>
#include <iostream>
using namespace std;
int main(void)
{
	//�ڶ�������100��char���͵��ڴ�
	char *str = new char[100];
	if (NULL == str)
	{
		system("pause");
		return 0;
	}
	//����Hello C++�ַ���������Ķ��е��ڴ���
	strcpy_s(str,100,"Hello C++");
	//��ӡ�ַ���
	cout << str << endl;
	//�ͷ��ڴ�
	delete[]str;
	str = NULL;
	system("pause");
	return 0;
}