#include <iostream>
#include <stdlib.h>
using namespace std;

namespace myNum           //��д�����ռ�Ĺؼ���
{
	int x = 105;
}

int main()
{
	// ʹ��bool���Ͷ���isOdd����Ϊ״̬λ
	bool   isOdd = false;

	if (myNum::x % 2 == 0)
	{
		//�ı�״̬λ��ֵ��ʹ��Ϊfalse
		isOdd = false;
	}
	else
	{
		//�ı�״̬λ��ֵ��ʹ��Ϊtrue
		isOdd = true;
	}
	// �ж�״̬λ��ֵ
	if (isOdd)
	{
		// ���״̬λ��ֵΪtrue�����ӡ����x������
		cout << myNum::x << "������" << endl;
	}
	else
	{
		// ���״̬λ��ֵΪfalse�����ӡ����x��ż��
		cout << myNum::x << "��ż��" << endl;
	}
	system("pause");
	return 0;
}