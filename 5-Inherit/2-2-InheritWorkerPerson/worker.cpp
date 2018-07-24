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
	cout << "Work" << endl;
}