#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

class Time
{
	friend void printTime(Time &t);//÷ÿµ„
public:
	Time(int hour, int min, int sec);

private:
	int m_iHour;
	int m_iMinute;
	int m_iSecond;

};
#endif