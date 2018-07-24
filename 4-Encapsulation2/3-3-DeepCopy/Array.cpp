#include <iostream>
#include "Array.h"
using namespace std;

Array::Array(int count)
{
	m_iCount = count;
	m_pArr = new int[m_iCount];
	for (int i = 0; i < m_iCount; i++)
	{
		m_pArr[i] = i;
	}
	cout << "Array()" << endl;
}

Array::Array(const Array& arr) {
	m_iCount = arr.m_iCount;
	m_pArr = new int[m_iCount]; //Ê¹ÓÃÉî¿½±´
	for (int i = 0; i < m_iCount; i++)
	{
		m_pArr[i] = arr.m_pArr[i];
	}

	cout << "Array(&)" << endl;
}

Array::~Array() {
	delete[]m_pArr;
	m_pArr = NULL;
	cout << "~Array()" << endl;
}

void Array::setCount(int c) {
	m_iCount = c;
}
int Array::getCount() {
	return m_iCount;
}
void Array::printAddr() {
	cout << "m_pArr:" << m_pArr << endl;
};
void Array::printArr() {
	for (int i = 0; i < m_iCount; i++)
	{
		cout << m_pArr[i] << endl;
	}
}