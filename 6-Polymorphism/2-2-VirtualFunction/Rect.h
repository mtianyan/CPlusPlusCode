#ifndef RECT_H
#define RECT_H

#include "Shape.h"
class Rect : public Shape
{
public:
	Rect(double width, double height);
	~Rect();
	double calcArea();

protected:
	double m_dwidth;
	double m_dHeight;
};

#endif // RECT_H