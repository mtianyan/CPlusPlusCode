#include "Soldier.h"
#include <iostream>
using namespace std;

Soldier::Soldier()
{}
// ��Ӳ���
void Soldier::play(int x) {
	cout << m_strName << endl;//��ӡ������soldier�µ�
	cout << Person::m_strName << endl;//��ӡ�����
	cout << "soldier - play()" << endl;
}

void Soldier::work() {
	m_strName = "solider"; //ֻ�ܸ�ֵ��soldier�µ�m_strname
	Person::m_strName = "Person";
	cout << "soldier - work()" << endl;
}