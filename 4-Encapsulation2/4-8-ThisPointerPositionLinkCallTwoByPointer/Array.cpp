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

Array* Array::setLen(int len) {
	this->len = len;
	return this;
}
int Array::getLen() {
	return len;
}

Array* Array::printInfo() {
	cout << this << endl;
	return this;//this本身是一个指针,而加上*以后变成一个对象。
}