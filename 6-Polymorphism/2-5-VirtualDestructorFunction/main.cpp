#include <iostream>
#include "Circle.h"
#include "Rect.h"
#include <stdlib.h>
using namespace std;

int main()
{
	Shape *shape2 = new Rect(3.0, 4.0);
	Shape *shape1 = new Circle(3.0);
	shape1->calcArea();
	shape2->calcArea();
	//�����಻���virtualʱ����ӡ�������ġ�
	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	system("pause");
	return 0;
}