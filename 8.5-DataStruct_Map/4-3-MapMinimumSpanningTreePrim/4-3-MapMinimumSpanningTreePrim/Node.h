//
//   Node.h
//  4-3-MapMinimumSpanningTreePrim
//
//  Created by mtianyan on 2018/7/28.
//  Copyright © 2018年 mtianyan. All rights reserved.
//
#ifndef NODE_H
#define NODE_H

class Node
{
public:
    Node(char data = 0);
    char m_cData;       //数据值
    bool m_bIsVisited;  //有没有被访问
};

#endif
