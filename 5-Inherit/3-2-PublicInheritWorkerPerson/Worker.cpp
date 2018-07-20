#include "Worker.h"
#include <iostream>

using namespace std;

Worker::Worker()
{
	cout << "Worker()" << endl;

}
Worker::~Worker()
{
	cout << "~Worker()" << endl;

}

void Worker::work()
{
	m_iAge = 21;
	m_strName = "mtianyan";
	cout << "Work" << endl;
}