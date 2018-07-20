#include "MigrantWorker.h"
#include <iostream>
using namespace std;

MigrantWorker::MigrantWorker(string name, string code) : Farmer(name), Worker(code)
{
	cout << ":MigrantWorker()" << endl;
}

MigrantWorker::~MigrantWorker()
{
	cout << "~MigrantWorker()" << endl;
}