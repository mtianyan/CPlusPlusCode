#include <iostream>
using namespace std;
#include <stdlib.h>
/**
* ����ģ�庯��swapNum
* ʵ�ֹ��ܣ�������������λ��
*/
template <typename T>
void swapNum(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main(void)
{
	float x = 10.1;
	float y = 20.0;
	// ����ģ�庯��
	swapNum<float>(x, y);
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	system("pause");
	return 0;
}