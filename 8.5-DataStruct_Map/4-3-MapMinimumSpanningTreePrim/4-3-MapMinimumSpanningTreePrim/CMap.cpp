//
//  CMap.cpp
//  4-3-MapMinimumSpanningTreePrim
//
//  Created by mtianyan on 2018/7/28.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include "CMap.h"
#include <iostream>
#include <vector>
#include "Node.h"
using namespace std;

CMap::CMap(int capacity)
{
    m_iCapacity = capacity;
    m_iNodeCount = 0;
    m_pNodeArray = new Node[m_iCapacity];
    m_pMatrix = new int[m_iCapacity * m_iCapacity];//邻接矩阵size乘size
    //邻接矩阵初始化为全0
    //memset(m_pMatrix, 0, m_iCapacity * m_iCapacity * sizeof(int));
    //将s所指向的某一块内存中的前n个 字节的内容全部设置为ch指定的ASCII值， 第一个值为指定的内存地址，块的大小由第三个参数指定
    for (int i=0;i<m_iCapacity*m_iCapacity;i++)
    {
        m_pMatrix[i] = 0;
    }
    
    m_pEdge = new Edge[m_iCapacity - 1]; // 为边申请内存
    
}

CMap::~CMap()
{
    delete []m_pNodeArray;
    delete[]m_pMatrix;
}

bool CMap::addNode(Node *pNode)
{
    if (pNode == NULL)
    {
        return false;
    }
    //保存节点数据
    m_pNodeArray[m_iNodeCount].m_cData = pNode->m_cData;
    m_iNodeCount++;
    return true;
}

void CMap::resetNode()
{
    for (int i = 0; i < m_iNodeCount; i++)
    {
        m_pNodeArray[i].m_bIsVisited = false;
    }
}

bool CMap::setValueToMatrixForDirectedGraph(int row, int col, int val)
{
    if (row <0 || row >= m_iCapacity)
    {
        return false;
    }
    if (col < 0 || col >= m_iCapacity)
    {
        return false;
    }
    m_pMatrix[row*m_iCapacity + col] = val;
    return true;
}

bool CMap::setValueToMatrixForUndirectedGraph(int row, int col, int val)
{
    if (row < 0 || row >= m_iCapacity)
    {
        return false;
    }
    if (col < 0 || col >= m_iCapacity)
    {
        return false;
    }
    m_pMatrix[row*m_iCapacity + col] = val;
    m_pMatrix[col*m_iCapacity + row] = val;
    return true;
}
bool CMap::getValueFromMatrix(int row, int col, int &val)
{
    if (row < 0 || row >= m_iCapacity)
    {
        return false;
    }
    if (col < 0 || col >= m_iCapacity)
    {
        return false;
    }
    val = m_pMatrix[row * m_iCapacity + col];
    return true;
}

void CMap::printMatrix()
{
    //两重循环（i行k列）
    for (int i=0;i<m_iCapacity;i++)
    {
        for (int k=0;k<m_iCapacity;k++)
        {
            cout << m_pMatrix[i*m_iCapacity + k] << " ";
        }
        cout << endl;
    }
}

//深度优先
void CMap::depthFirstTraverse(int nodeIndex)
{
    //访问根左右。与先序遍历类似。把子树延展的所有节点访问完回到根
    int value = 0;
    
    cout << m_pNodeArray[nodeIndex].m_cData << " ";
    m_pNodeArray[nodeIndex].m_bIsVisited = true;
    
    //通过邻接矩阵判断是否与其他的顶点有连接
    
    for (int i=0;i<m_iCapacity;i++)
    {
        //取出相应的弧
        getValueFromMatrix(nodeIndex, i, value);
        if (value !=0)//判断有弧连接其他顶点
        {
            if (m_pNodeArray[i].m_bIsVisited)
            {
                continue;
            }
            else
            {
                depthFirstTraverse(i);
            }
        }
        else
        {
            continue;
        }
    }
}
//每一层放在一个数组中
void CMap::breadthFirstTraverse(int nodeIndex)
{
    cout << m_pNodeArray[nodeIndex].m_cData << " ";
    m_pNodeArray[nodeIndex].m_bIsVisited = true;
    
    //将节点索引保存到数组中
    vector<int> curVec;
    curVec.push_back(nodeIndex);
    
    breadthFirstTraverseImpl(curVec);
    
}

void CMap::breadthFirstTraverseImpl(vector<int> preVec)
{
    int value = 0;
    vector<int> curVec;
    
    //prevec为上一层节点
    for (int j = 0; j < (int)preVec.size(); j++)
    {
        for (int i=0;i<m_iCapacity;i++)
        {
            getValueFromMatrix(preVec[j], i, value);
            if (value != 0)
            {
                if (m_pNodeArray[i].m_bIsVisited)
                {
                    continue;
                }
                else
                {
                    cout << m_pNodeArray[i].m_cData << " ";
                    m_pNodeArray[i].m_bIsVisited = true;
                    
                    curVec.push_back(i);
                }
            }
        }
    }
    if (curVec.size() == 0)
    {
        return;
    }
    else
    {
        breadthFirstTraverseImpl(curVec);
    }
    
}

// 普利姆生成树
void CMap::primTree(int nodeIndex) {
    //取边存权值
    int value = 0;
    int edgeCount = 0;
    
    vector<int> nodeVec;
    vector<Edge> edgeVec;
    
    cout << m_pNodeArray[nodeIndex].m_cData << endl;
    
    nodeVec.push_back(nodeIndex); // nodeIndex
    m_pNodeArray[nodeIndex].m_bIsVisited = true;
    // 什么时候停下来，边数等于点数-1时，edgeCount计数边
    while (edgeCount < m_iCapacity - 1)
    {
        int temp = nodeVec.back();
        // 从数组中取出最尾部的元素
        
        // 寻找与该节点连接的所有边
        for (int i=0;i<m_iCapacity;i++)
        {
            // 取相应的边，temp是
            getValueFromMatrix(temp, i, value);
            if (value != 0)
            {
                if (m_pNodeArray[i].m_bIsVisited)
                {
                    continue;
                }
                else
                {
                    // 没被访问过放入备选边
                    Edge edge(temp, i, value);
                    edgeVec.push_back(edge);
                }
            }
        }
        
        // 才可选边集合中找出最小的边
        int edgeIndex = getMinEdge(edgeVec);
        edgeVec[edgeIndex].m_bSelected = true;
        
        cout << edgeVec[edgeIndex].m_iNodeIndexA <<"-----"<<edgeVec[edgeIndex].m_iNodeIndexB<<"  ";
        cout << edgeVec[edgeIndex].m_iWeightValue << endl;
        
        // 放入最小生成树边的集合
        m_pEdge[edgeCount] = edgeVec[edgeIndex];
        edgeCount++;
        
        // 找到与当前边连接的点
        int nextNodeIndex = edgeVec[edgeIndex].m_iNodeIndexB;
        
        // 放入点集合
        nodeVec.push_back(nextNodeIndex);
        m_pNodeArray[nextNodeIndex].m_bIsVisited = true;
        
        cout << m_pNodeArray[nextNodeIndex].m_cData << endl;
    }
}

int CMap::getMinEdge(vector<Edge> edgeVec)
{
    // 找到第一条边而且是没有被选出去的边
    int minWeight = 0;
    int edgeIndex = 0;
    int i = 0;
    for ( ;i<edgeVec.size();i++)
    {
        if (!edgeVec[i].m_bSelected)
        {
            //该边还没有被选过
            minWeight = edgeVec[i].m_iWeightValue;
            edgeIndex = i;
            break;//找到第一条边迅速跳出循环
        }
    }
    
    if (minWeight == 0)
    {
        return -1;
    }
    
    for ( ;i<edgeVec.size();i++)
    {
        if (edgeVec[i].m_bSelected)
        {
            continue;
        }
        else
        {
            if (minWeight >edgeVec[i].m_iWeightValue)
            {
                minWeight = edgeVec[i].m_iWeightValue;
                edgeIndex = i;
            }
        }
    }
    return edgeIndex;
}
