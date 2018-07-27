//
//  Edge.cpp
//  4-3-MapMinimumSpanningTreePrim
//
//  Created by mtianyan on 2018/7/28.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include "Edge.h"

Edge::Edge(int nodeIndexA, int nodeIndexB, int weightValue)
{
    m_iNodeIndexA = nodeIndexA;
    m_iNodeIndexB = nodeIndexB;
    m_iWeightValue = weightValue;
    m_bSelected = false;
}
