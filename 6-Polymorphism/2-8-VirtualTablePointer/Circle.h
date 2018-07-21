#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle :public Shape
{
public:
	Circle(int r);
	~Circle();
protected:
	int  m_iR;
};

#endif