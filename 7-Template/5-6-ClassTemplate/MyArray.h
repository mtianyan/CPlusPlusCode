#ifndef MYARRAY_H
#define MYARRAY_H

#include <iostream>
using namespace std;

template <typename T, int Ksize, int KVal>//模板参数列表
class MyArray
{
public:
	MyArray();
	~MyArray()
	{
		delete[]m_pArr;
		m_pArr = NULL;
	}//写在类内部的函数不需要注意什么。
	void display();

private:
	T *m_pArr;
};

template <typename T, int KSize, int KVal>
MyArray<T, KSize, KVal>::MyArray()
{
	m_pArr = new T[KSize];
	for (int i = 0; i < KSize; i++)
	{
		m_pArr[i] = KVal;
	}
}

template <typename T, int KSize, int KVal>
void MyArray<T, KSize, KVal>::display()
{
	for (int i = 0; i < KSize; i++)
	{
		cout << m_pArr[i] << endl;
	}
}

#endif