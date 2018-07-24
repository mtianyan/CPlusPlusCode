#ifndef COORDINATE_H
#define COORDINATE_H
#include <iostream>

using namespace std;

class Coordinate
{
public:
	Coordinate(int x, int y);
	~Coordinate();
private:
	int m_iX;
	int m_iY;
};

#endif