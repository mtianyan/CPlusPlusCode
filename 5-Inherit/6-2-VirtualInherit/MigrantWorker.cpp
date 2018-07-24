#include "MigrantWorker.h"
#include <iostream>
using namespace std;

MigrantWorker::MigrantWorker(string name, string code, string color) : Farmer(name, color), Worker(code, color)
{
	cout << ":MigrantWorker()" << endl;
}

MigrantWorker::~MigrantWorker()
{
	cout << "~MigrantWorker()" << endl;
}