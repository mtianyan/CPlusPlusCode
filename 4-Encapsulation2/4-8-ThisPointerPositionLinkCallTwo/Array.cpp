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

Array& Array::setLen(int len) {
	this->len = len;
	return *this;
}
int Array::getLen() {
	return len;
}

//�������֮�����arr1
Array& Array::printInfo() {
	cout << "len:" << len << endl;
	return *this;//this������һ��ָ�룬������*�Ժ���һ������
}