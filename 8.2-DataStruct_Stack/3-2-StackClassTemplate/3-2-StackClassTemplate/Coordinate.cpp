//
//  Coordinate.cpp
//  3-2-StackClassTemplate
//
//  Created by mtianyan on 2018/7/25.
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
