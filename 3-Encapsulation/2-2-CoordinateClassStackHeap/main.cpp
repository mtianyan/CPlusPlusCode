#include <stdlib.h>
#include <iostream>
using namespace std;

class Coordinate {
public:
	int x;
	int y;
	void printx() {
		cout << x << endl;
	}
	void printy() {
		cout << y << endl;
	}
};
int main(void)
{
	Coordinate coor;
	coor.x = 10;
	coor.y = 20;
	coor.printx();
	coor.printy();

	Coordinate *p = new Coordinate();
	if (NULL == p) {
		//failed
		return 0;
	}
	p->x = 100;
	p->y = 200;
	p->printx();
	p->printy();

	delete p;
	p = NULL;

	system("pause");
	return 0;
}