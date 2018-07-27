//
//  Edge.h
//  4-3-MapMinimumSpanningTreePrim
//
//  Created by mtianyan on 2018/7/28.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#ifndef EDGE_H
#define EDGE_H

class Edge
{
public:
    Edge(int nodeIndexA = 0, int nodeIndexB = 0,int weightValue = 0);
    int m_iNodeIndexA; // 边的两个顶点
    int m_iNodeIndexB;
    
    int m_iWeightValue; // 边上权值
    
    // 标记已经挑出来的边
    bool m_bSelected;
};

#endif
