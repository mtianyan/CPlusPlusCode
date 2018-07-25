//
//  Coordinate.h
//  3-2-StackClassTemplate
//
//  Created by mtianyan on 2018/7/25.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#ifndef COORDINATE_H
#define COORDINATE_H
#include <ostream>
using namespace std;
class Coordinate
{
    friend ostream &operator<<(ostream &out, Coordinate &coor);
public:
    Coordinate(int x=0,int y=0);
    void printCoordinate();
private:
    int m_iX;
    int m_iY;
};
#endif
