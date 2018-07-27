//
//  Coordinate.h
//  2-9-CoordinateClassList
//
//  Created by mtianyan on 2018/7/26.
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
    Coordinate(int x = 0, int y = 0);
    void printCoordinate();
    bool operator==(Coordinate &coor);
private:
    int m_iX;
    int m_iY;
};

#endif
