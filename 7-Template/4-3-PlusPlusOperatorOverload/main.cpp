#include "Coordinate.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	Coordinate coor1(1, 3);
	cout << coor1.getX() << "," << coor1.getY() << endl;
	++coor1;
	cout << coor1.getX() << "," << coor1.getY() << endl;
	-coor1; //coor1.operator-()
	cout << coor1.getX() << "," << coor1.getY() << endl;
	cout << (coor1++).getX() << ",";
	cout << (coor1++).getY() << endl;
	cout << coor1.getX() << "," << coor1.getY() << endl;
	//上面两个分号所以coor1++执行了两次。
	//到上一行打印的时候已经是x，y都加了2了。
	system("pause");
	return 0;
}