#include <iostream>
using namespace std;

void fun( int &a,  int &b);  // ��������

int main(void)
{
	int x = 3;
	int y = 5;
	fun(x, y);
	cout << x << "," << y << endl;
	system("pause");
	return 0;
}

// ����ʵ��
void fun( int & a,  int & b)
{
	// ������Ϊ�����ֵΪconst�����ܽ����޸ġ�
	a = 10;
	b = 20;
}