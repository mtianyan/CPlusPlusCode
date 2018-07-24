#include <iostream>
#include "Array.h"
using namespace std;

Array::Array(int len)
{
	this->len = len;
	cout << "Array()" << endl;
}
Array::~Array() {
	cout << "~Array()" << endl;
}

void Array::setLen(int len) {
	this->len = len;
}
int Array::getLen() {
	return len;
}

void Array::printInfo() {

}