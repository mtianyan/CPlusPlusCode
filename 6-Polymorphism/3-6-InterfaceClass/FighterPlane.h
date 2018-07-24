#ifndef FIGHTERPLANE_H
#define FIGHTERPLANE_H

#include "Plane.h"
class FighterPlane :public Plane, public Flyable
{
public:
	FighterPlane(string code);
	virtual void takeoff();
	//因为plane已经实现过了，所以它可实现也可也不
	virtual void land();
};
#endif