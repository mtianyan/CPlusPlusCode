#ifndef BIRD_H
#define BIRD_H
#include "Flyable.h"
#include <string>
using namespace std;
class Bird :public Flyable
{
public:
	void foraging();
	void takeoff();
	void land();
};

#endif // !BIRD_H