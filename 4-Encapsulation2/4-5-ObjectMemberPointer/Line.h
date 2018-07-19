#include "Coordinate.h"

class Line {
public:
	Line(int x1, int y1, int x2, int y2);
	~Line();
	void setCoorA(int x, int y);
	void setCoorB(int x, int y);
	void printInfo();
private:
	Coordinate *m_pCoorA;
	Coordinate *m_pCoorB; //这里是一个指针而不是一个对象
};