//
//  Node.cpp
//  6-6-BinaryTreeArrayLinkedList
//
//  Created by mtianyan on 2018/7/27.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include "Node.h"
#include <iostream>
using namespace std;
Node::Node()
{
    index = 0;
    data = 0;
    pLChild = NULL;
    pRChild = NULL;
    pParent = NULL;
}

Node *Node::SearchNode(int nodeIndex)
{
    // 看自己是不是
    if (this->index == nodeIndex)
    {
        return this;
    }
    // 左右节点是不是
    Node *temp = NULL;
    if (this->pLChild != NULL)
    {
        if (this->pLChild->index == nodeIndex)
        {
            return this->pLChild;
        }
        // 注意没找到的情况继续往下找
        else
        {
            temp = this->pLChild->SearchNode(nodeIndex);
            if (temp != NULL)
            {
                return temp;
            }
        }
    }
    if (this->pRChild != NULL)
    {
        if (this->pRChild->index == nodeIndex)
        {
            return this->pRChild;
        }
        // 注意没找到的情况继续往下找
        else
        {
            temp = this->pRChild->SearchNode(nodeIndex);
            if (temp != NULL)
            {
                return temp;
            }
        }
        
    }
    
    return NULL;
}

void Node::DeleteNode()
{
    if (this->pLChild != NULL)
    {
        this->pLChild->DeleteNode();
    }
    if (this->pRChild != NULL)
    {
        this->pRChild->DeleteNode();
    }
    if (this->pParent != NULL)
    {
        // 判断自己是父节点的左孩子还是右孩子。
        if (this->pParent->pLChild == this)
        {
            this->pParent->pLChild = NULL;
        }
        if (this->pParent->pRChild == this)
        {
            this->pParent->pRChild = NULL;
        }
    }
    // 自杀
    delete this;
    
}
//先自己，然后左边然后右边
void Node::PreorderTraversal()
{
    cout << this->index << " " << this->data << endl;
    if (this->pLChild != NULL)
    {
        this->pLChild->PreorderTraversal();
    }
    if (this->pRChild != NULL)
    {
        this->pRChild->PreorderTraversal();
    }
}

void Node::InorderTraversal()
{
    
    if (this->pLChild != NULL)
    {
        this->pLChild->InorderTraversal();
    }
    cout << this->index << " " << this->data << endl;
    if (this->pRChild != NULL)
    {
        this->pRChild->InorderTraversal();
    }
}
void Node::PostorderTraversal()
//后序遍历
{
    if (this->pLChild != NULL)
    {
        this->pLChild->PostorderTraversal();
    }
    if (this->pRChild != NULL)
    {
        this->pRChild->PostorderTraversal();
    }
    cout << this->index << " " << this->data << endl;
}
