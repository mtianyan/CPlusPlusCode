#include "Worker.h"
#include <iostream>
using namespace std;
Worker::Worker(string code)
{
	m_strCode = code;
	cout << "worker()" << endl;
}

Worker::~Worker()
{
	cout << "~worker" << endl;
}
void Worker::carry()
{
	cout << m_strCode << endl;
	cout << "worker -- carry()" << endl;
}