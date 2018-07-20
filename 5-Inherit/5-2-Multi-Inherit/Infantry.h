#include "Soldier.h"

class Infantry :public Soldier {
public:
	Infantry(string name = "jack", int age = 30);
	~Infantry();
	void attack();
};