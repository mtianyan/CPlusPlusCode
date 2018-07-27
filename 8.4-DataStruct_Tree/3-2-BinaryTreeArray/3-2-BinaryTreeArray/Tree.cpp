//
//  Tree.cpp
//  3-2-BinaryTreeArray
//
//  Created by mtianyan on 2018/7/27.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include"Tree.h"
#include<iostream>
using namespace std;

Tree::Tree(int size, int *pRoot)
{
    m_iSize = size;
    m_pTree = new int[size];
    for (int i = 0; i < size; i++)
    {
        m_pTree[i] = 0;
    }
    m_pTree[0] = *pRoot;
}

Tree::~Tree()
{
    delete[]m_pTree;
    m_pTree = NULL;
}

int *Tree::SearchNode(int nodeindex)
{
    if (nodeindex < 0 || nodeindex >= m_iSize)
    {
        return NULL;
    }
    if (m_pTree[nodeindex] == 0)
    {
        return NULL;
    }
    return &m_pTree[nodeindex];//由索引取值后取地址
}

bool Tree::AddNode(int nodeindex, int direction, int *pNode)
// direction决定往左插，还是往右插。
{
    if (nodeindex < 0 || nodeindex >= m_iSize || m_pTree[nodeindex] == 0)
        //节点合法性
    {
        return false;
    }
    switch (direction)
    {
            // 0值定义为左孩子
        case 0:
            // 不等于0，说明插入过了，这里我们的处理是，如果插过了，不允许替换。
            if (nodeindex * 2 + 1 >= m_iSize || m_pTree[nodeindex * 2 + 1] != 0)
            {
                return false;
            }
            m_pTree[nodeindex * 2 + 1] = *pNode;
            break;
        case 1:
            if (nodeindex * 2 + 2 >= m_iSize || m_pTree[nodeindex * 2 + 2] != 0)
            {
                return false;
            }
            m_pTree[nodeindex * 2 + 2] = *pNode;
            break;
    }
    return true;
}

bool Tree::DeleteNode(int nodeindex, int * pNode)
{
    if (nodeindex < 0 || nodeindex >= m_iSize)
    {
        return false;
    }
    if (m_pTree[nodeindex] == 0)
    {
        return false;
    }
    *pNode = m_pTree[nodeindex];
    m_pTree[nodeindex] = 0;
    
    return true;
}

void Tree::TreeTraverse()
{
    for (int i =0;i<m_iSize;i++)
    {
        cout << m_pTree[i] << " ";
    }
}


