#ifndef COORDINATE_H
#define COORDINATE_H
#include <iostream>//包含了ostream
using namespace std;

class Coordinate
{
	friend Coordinate &operator-(Coordinate &c);
	friend Coordinate operator+(Coordinate c1, Coordinate c2);
	friend ostream &operator<<(ostream &output, Coordinate &coor);
public:
	Coordinate(int x, int y);
	Coordinate &operator++();//前置++
	Coordinate operator++(int);//后置++
							   //Coordinate operator+(Coordinate &c);
							   //其实里面有两个参数。
	int operator [](int index);
	int getX();
	int getY();
private:
	int m_iX;
	int m_iY;

};
#endif