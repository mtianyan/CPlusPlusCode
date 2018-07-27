//
//  Tree.cpp
//  6-6-BinaryTreeArrayLinkedList
//
//  Created by mtianyan on 2018/7/27.
//  Copyright © 2018年 mtianyan. All rights reserved.
//
#include "Tree.h"
#include <iostream>
using namespace std;
Tree::Tree()
{
    m_pRoot = new Node();// 第一个节点
}

Tree::~Tree()
{
    DeleteNode(0, NULL);
    //m_pRoot->DeleteNode();
}

//删除结点为头结点。整棵树销毁
//删除和添加都需要找到节点

Node *Tree::SearchNode(int nodeIndex)
{
    return m_pRoot->SearchNode(nodeIndex);
}


bool Tree::AddNode(int nodeIndex, int direction, Node *pnode) {
    Node *temp = SearchNode(nodeIndex);
    // 挂载节点不存在
    if (temp == NULL)
    {
        return false;
    }
    
    Node *node = new Node();
    if (node == NULL)
    {
        return false;
    }
    // 要把pnode值保存下来。
    node->index = pnode->index;
    node->data = pnode->data;
    node->pParent = temp;//注意，要在添加时把父节点也记着
    
    //0挂左，1挂右
    if (direction == 0)
    {
        temp->pLChild = node;
    }
    if (direction == 1)
    {
        temp->pRChild = node;
    }
    
    return true;
};

// 删除节点(级联删除子节点)& 析构函数

bool Tree::DeleteNode(int nodeIndex, Node *pNode)
{
    Node *temp = SearchNode(nodeIndex);
    if (temp == NULL)
    {
        return false;
    }
    if (pNode != NULL)
    {
        pNode->data = temp->data;
    }
    // 把树中删除节点的操作下移到node中来解决
    temp->DeleteNode();
    return true;
    
}

void Tree::PreorderTraversal()
{
    m_pRoot->PreorderTraversal();
}
void Tree::InorderTraversal()
{
    m_pRoot->InorderTraversal();
}
void Tree::PostorderTraversal()
{
    m_pRoot->PostorderTraversal();
}



