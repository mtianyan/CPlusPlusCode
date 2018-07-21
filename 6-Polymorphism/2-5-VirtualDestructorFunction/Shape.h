#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape
{
public:
	Shape();
	virtual ~Shape();
	virtual double calcArea();
};

#endif