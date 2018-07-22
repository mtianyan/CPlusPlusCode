#ifndef TIME_H
#define TIME_H
#include "Match.h"
#include <iostream>
using namespace std;

class Time
{
	friend void Match::printTime(Time &t);
	//重点,建议写在最外面。但是放在public，private都不影响。
public:
	Time(int hour, int min, int sec);

private:
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};
#endif