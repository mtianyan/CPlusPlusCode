//
//  Coordinate.cpp
//  2-9-CoordinateClassList
//
//  Created by mtianyan on 2018/7/26.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include "Coordinate.h"
#include <iostream>
using namespace std;

Coordinate::Coordinate(int x, int y)
{
    m_iX = x;
    m_iY = y;
}
void Coordinate::printCoordinate()
{
    cout << "(" << m_iX << "," << m_iY << ")" << endl;
}

ostream &operator<<(ostream &out, Coordinate &coor)
{
    out << "(" << coor.m_iX << "," << coor.m_iY << ")" << endl;
    return out;
}
bool Coordinate::operator==(Coordinate &coor)
{
    if(this->m_iX == coor.m_iX && this->m_iY == coor.m_iY)
    {
        return true;
    }
    else
    {
        return false;
    }
}
