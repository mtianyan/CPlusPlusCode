#include <stdlib.h>
#include <iostream>
using namespace std;

int main(void)
{
	//int *p = new int(20);//����ͬʱ��ʼ��

	int *p = new int;
	if (NULL == p)
	{
		system("pause");
		return 0;
	}

	*p = 20;
	cout << *p << endl;

	delete p;
	p = NULL;

	system("pause");
	return 0;
}