#include "Soldier.h"
#include <iostream>
using namespace std;

Soldier::Soldier()
{}
// 添加参数
void Soldier::play(int x) {
	cout << m_strName << endl;//打印出的是soldier下的
	cout << Person::m_strName << endl;//打印父类的
	cout << "soldier - play()" << endl;
}

void Soldier::work() {
	m_strName = "solider"; //只能赋值给soldier下的m_strname
	Person::m_strName = "Person";
	cout << "soldier - work()" << endl;
}