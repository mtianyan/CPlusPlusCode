//
//  Tree.h
//  3-2-BinaryTreeArray
//
//  Created by mtianyan on 2018/7/27.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#ifndef TREE_H
#define TREE_H
class Tree
{
public:
    Tree(int size,int *pRoot);//创建树
    ~Tree();//销毁树
    int *SearchNode(int nodeIndex);//根据索引寻找节点
    bool AddNode(int nodeIndex, int direction, int *pNode);//添加节点
    bool DeleteNode(int nodeIndex, int *pNode); //删除节点
    void TreeTraverse();//遍历节点
private:
    int *m_pTree;
    int m_iSize;
};
#endif
