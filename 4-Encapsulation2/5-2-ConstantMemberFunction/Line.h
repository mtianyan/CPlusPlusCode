#include "Coordinate.h"

class Line {
public:
	Line(int x1, int y1, int x2, int y2);
	~Line();
	void setCoorA(int x, int y);
	void setCoorB(int x, int y);
	void printInfo();
	void printInfo() const;//ЛЅЮЊжиди

private:
	const Coordinate m_coorA; // Coordinate const m_coorA;
	Coordinate m_coorB;
};