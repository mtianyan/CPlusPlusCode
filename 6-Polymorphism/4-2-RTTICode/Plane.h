#ifndef PLANE_H
#define PLANE_H

#include <string>
#include "Flyable.h"
using namespace std;

class Plane :public Flyable
{
public:
	void carry();
	virtual void takeoff();
	virtual void land();
};

#endif