//
//  Node.h
//  6-6-BinaryTreeArrayLinkedList
//
//  Created by mtianyan on 2018/7/27.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#ifndef NODE_H
#define NODE_H

class Node
{
public:
    Node();
    Node *SearchNode(int nodeIndex);
    // 杀完孩子之后自己判断自己是左是右，然后自杀
    void DeleteNode();
    void PreorderTraversal();   // 前序遍历
    void InorderTraversal();    // 中序遍历
    void PostorderTraversal();  // 后序遍历
    int index; //索引
    int data; // 数据
    Node *pLChild; // 左孩子指针
    Node *pRChild; // 右孩子指针
    Node *pParent; // 父节点指针
};

#endif
