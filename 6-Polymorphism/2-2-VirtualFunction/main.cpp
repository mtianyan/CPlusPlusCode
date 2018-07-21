#include <iostream>
#include "Circle.h"
#include "Rect.h"
#include <stdlib.h>
using namespace std;

int main()
{
	Shape *shape1 = new Circle(3.0);
	Shape *shape2 = new Rect(3.0, 4.0);
	shape1->calcArea();
	shape2->calcArea();
	//当基类不添加virtual时。打印两遍基类的。
	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	system("pause");
	return 0;
}