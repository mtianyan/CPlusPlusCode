#include <iostream>
#include <stdlib.h>
#include "Time.h"
using namespace std;

void printTime(Time &t);
int main()
{
	Time t(6, 34, 35);
	printTime(t);
	system("pause");
	return 0;
}

void printTime(Time & t)
{
	cout << t.m_iHour << endl;
	//Time::m_iHour”: 无法访问 private 成员(在“Time”类中声明)
	cout << t.m_iMinute << endl;
	cout << t.m_iSecond << endl;
}