#include "Tank.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	cout << Tank::getCount() << endl;
	//����ʵ����֮ǰ����ʹ��
	Tank t1('A');
	cout << Tank::getCount() << endl;
	//���11
	cout << t1.getCount() << endl;
	Tank *p = new Tank('B');
	cout << Tank::getCount() << endl;
	Tank *q = new Tank('C');
	cout << q->getCount() << endl;

	delete p;
	delete q;

	cout << Tank::getCount() << endl;
	system("pause");
	return 0;
}