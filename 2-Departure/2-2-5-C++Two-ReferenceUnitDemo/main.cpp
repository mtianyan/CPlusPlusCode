#include <stdlib.h>
#include <iostream>
using namespace std;

int main(void)
{
	int x = 3;
	//�������ã�y��x������
	int &y = x;
	//��ӡx��y��ֵ
	cout << x << endl;
	cout << y << endl;
	//�޸�y��ֵ
	y = 5;
	//�ٴδ�ӡx��y��ֵ
	cout << "After Change Y:" << endl;
	cout << x << "," << y << endl;
	system("pause");
	return 0;
}