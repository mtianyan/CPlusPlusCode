#include "Worker.h"
#include <iostream>
using namespace std;
Worker::Worker(string name, int age) :Person(name)
{
	m_iAge = age;
}

//void Worker::work()
//{
//	cout << "work()" << endl;
//}