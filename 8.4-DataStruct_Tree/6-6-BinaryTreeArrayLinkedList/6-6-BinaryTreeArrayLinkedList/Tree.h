//
//  Tree.h
//  6-6-BinaryTreeArrayLinkedList
//
//  Created by mtianyan on 2018/7/27.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#ifndef TREE_H
#define TREE_H
#include "Node.h"

class Tree
{
public:
    Tree(); //创建树
    ~Tree();//销毁树 del node 删除最根节点即可
    Node *SearchNode(int nodeIndex); //搜索节点
    bool AddNode(int nodeIndex, int direction, Node *pNode);//搜索节点基础上添加
    bool DeleteNode(int nodeIndex, Node *pNode);//删除结点
    void PreorderTraversal();   //前序遍历
    void InorderTraversal();    //中序遍历
    void PostorderTraversal();  //后序遍历
    
private:
    Node *m_pRoot;
};

#endif

