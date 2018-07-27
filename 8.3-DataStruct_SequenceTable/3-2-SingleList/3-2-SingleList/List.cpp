//
//  List.cpp
//  3-2-SingleList
//
//  Created by mtianyan on 2018/7/27.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include "List.h"
#include <iostream>
using namespace std;

List::List()
{
    m_pList = new Node; //堆中申请内存
    m_pList->data = 0;
    m_pList->next = NULL; //初始化时头结点指向NULL
    m_iLength = 0; // 头结点不算在链表的长度中
}

List::~List()
{
    ClearList();
    delete m_pList;
    m_pList = NULL;
}
void List::ClearList()
//顺藤摸瓜，敌人之间单线联系。
{
    Node *currentNode = m_pList->next;
    while(currentNode != NULL) //审讯犯人
    {
        Node * temp = currentNode->next; // 将他下线地址保存
        delete currentNode; // 他已经没有利用价值了，删除
        currentNode = temp;
    }
    m_pList->next = NULL;
    m_iLength = 0;
}
bool List::ListEmpty()
{
    return m_iLength==0?true:false;
}

int List::ListLength()
{
    return m_iLength;
}

bool List::ListInsertHead(Node *pNode)
{
    Node *temp = m_pList->next;
    Node *newNode = new Node;
    // 判断申请内存是否成功
    if(newNode == NULL)
    {
        return false;
    }
    newNode->data = pNode->data;
    m_pList->next = newNode;
    newNode->next = temp; //指向头结点原本指向的。
    m_iLength++;
    return true;
}

bool List::ListInsertTail(Node *pNode)
{
    Node *currentNode = m_pList;
    while(currentNode->next != NULL)
    {
        currentNode = currentNode->next;
    }
    Node *newNode = new Node;
    if (newNode == NULL)
    {
        return false;
    }
    newNode->data = pNode->data;
    newNode->next = NULL;
    currentNode->next = newNode; //老的尾节点指向新插入节点。
    m_iLength++;
    return true;
}
bool List::ListInsert(int i, Node *pNode)
{
    if (i<0 || i>m_iLength)
    {
        return false;
    }
    Node *currentNode = m_pList;
    for (int k=0;k<i;k++)//找到的是i位置前一个
    {
        currentNode = currentNode->next;
    }
    Node *newNode = new Node;
    if (newNode == NULL)
    {
        return false;
    }
    newNode->data = pNode->data;
    newNode->next = currentNode->next;
    m_iLength++;
    // 原来currentnode的下一个节点变成了newnode的下一个节点
    
    currentNode->next = newNode;
    // newnode变成了currentnode的下一个节点
    // 带入两个极端情况来验证，0位置插入，for循环一次都不执行。currentNode就是头结点。然后新Node的next指向头结点原本指向的节点。
    // 如果我们最后一个节点位置插入，原本最后一个节点指向NUll，赋值给新节点的Next
    return true;
}

bool List::ListDelete(int i, Node *pNode)
{
    if (i<0 || i>= m_iLength) //删除不能=
    {
        return false;
    }
    Node *currentNode = m_pList;
    // 找到当前节点的上一个节点
    Node *currentNodeBefore = NULL;
    for (int k = 0; k <= i; k++)//删除就要i位置的
    {
        currentNodeBefore = currentNode;
        currentNode = currentNode->next;
    }
    
    currentNodeBefore->next = currentNode->next;
    pNode->data = currentNode->data;
    delete currentNode;
    currentNode = NULL;
    m_iLength--;
    return true;
}

bool List::GetElem(int i, Node *pNode)
{
    if (i < 0 || i >= m_iLength)
    {
        return false;
    }
    // 找第i个节点
    Node *currentNode = m_pList;
    // 找到当前节点的上一个节点
    Node *currentNodeBefore = NULL;
    for (int k = 0; k <= i; k++)
    {
        currentNodeBefore = currentNode;
        currentNode = currentNode->next;
    }
    pNode->data = currentNode->data;
    return true;
}

int List::LocateElem(Node *pNode)
{
    Node *currentNode = m_pList;
    int count = 0;
    while (currentNode->next != NULL)
    {
        currentNode = currentNode->next;
        if (currentNode->data == pNode->data)
        {
            return count;// 第一个节点，返回的是第一个节点，因此后面有相同会被忽略
        }
        count++;
        // 第一次拿到的head是头结点并不算第0号元素。
    }
    
    return -1;
}

bool List::PriorElem(Node *pCurrentElem, Node *pPreElem)
{
    Node *currentNode = m_pList;
    Node *tempNode = NULL; // 定义当前节点的上一个节点
    while (currentNode->next != NULL)
    {
        tempNode = currentNode;
        currentNode = currentNode->next;
        
        if (currentNode->data == pCurrentElem->data)
        {
            if (tempNode == m_pList)// 如果是头结点
            {
                return false;
            }
            pPreElem->data = tempNode->data;
            return true;
        }
    }
    return false;
    
}

bool List::NextElem(Node *pCurrentElem, Node *pNextElem)
{
    Node *currentNode = m_pList;
    while (currentNode->next != NULL)
    {
        currentNode = currentNode->next;
        if (currentNode->data == pCurrentElem->data)
        {
            if (currentNode->next == NULL)//如果是尾节点
            {
                return false;
            }
            pNextElem->data = currentNode->next->data;
            return true;
        }
    }
    return false;
    
}

void List::ListTraverse()
{
    Node *currentNode = m_pList;
    while (currentNode->next != NULL)
    {
        currentNode = currentNode->next;
        currentNode->printNode();
    }
}


