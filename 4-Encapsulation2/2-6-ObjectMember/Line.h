#include "Coordinate.h"

class Line {
public:
	Line();
	~Line();
	void setCoorA(int x, int y);
	void setCoorB(int x, int y);
	void printInfo();
private:
	Coordinate m_coorA;
	Coordinate m_coorB;
};