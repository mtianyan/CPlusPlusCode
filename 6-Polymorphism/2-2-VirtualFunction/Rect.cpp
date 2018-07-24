#include "Rect.h"

Rect::Rect(double m_dwidth, double m_dHeight)
{
	cout << "Rect()" << endl;
	this->m_dHeight = m_dHeight;
	this->m_dwidth = m_dwidth;
}

Rect::~Rect()
{
	cout << "~Rect()" << endl;
}

double Rect::calcArea()
{
	cout << "Rect::calcArea()" << endl;
	return m_dwidth * m_dHeight;
}