#ifndef FIGHTERPLANE_H
#define FIGHTERPLANE_H

#include "Plane.h"
class FighterPlane :public Plane, public Flyable
{
public:
	FighterPlane(string code);
	virtual void takeoff();
	//��Ϊplane�Ѿ�ʵ�ֹ��ˣ���������ʵ��Ҳ��Ҳ��
	virtual void land();
};
#endif