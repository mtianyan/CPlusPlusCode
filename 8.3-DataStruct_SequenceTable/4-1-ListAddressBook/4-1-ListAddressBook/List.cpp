//
//  List.cpp
//  4-1-ListAddressBook
//
//  Created by mtianyan on 2018/7/27.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include "List.h"
#include <iostream>
using namespace std;

List::List()
{
    m_pList = new Node;
    //m_pList->data = 0;
    
    m_pList->next = NULL;
    m_iLength = 0;
}

List::~List()
{
    ClearList();
    delete m_pList;
    m_pList = NULL;
}
void List::ClearList()
//顺藤摸瓜。
{
    Node *currentNode = m_pList->next;
    while (currentNode != NULL)
    {
        Node * temp = currentNode->next;
        delete currentNode;
        currentNode = temp;
    }
    m_pList->next = NULL;
    m_iLength = 0;
}
bool List::ListEmpty()
{
    if (m_iLength == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int List::ListLength()
{
    return m_iLength;
}

bool List::ListInsertHead(Node *pNode)
{
    Node *temp = m_pList->next;
    Node *newNode = new Node;
    if (newNode == NULL)
    {
        return false;
    }
    newNode->data = pNode->data;
    m_pList->next = newNode;
    newNode->next = temp;
    m_iLength++;
    return true;
}

bool List::ListInsertTail(Node *pNode)
{
    Node *currentNode = m_pList;
    while (currentNode->next != NULL)
    {
        currentNode = currentNode->next;
    }
    Node *newNode = new Node;
    if (newNode == NULL)
    {
        return false;
    }
    currentNode->next = newNode;
    newNode->data = pNode->data;
    newNode->next = NULL;
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
    for (int k=0;k<i;k++)
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
    //原来currentnode的下一个节点变成了newnode的下一个节点
    
    currentNode->next = newNode;
    //newnode变成了currentnode的下一个节点
    //带入两个极端情况来验证
    return true;
}

bool List::ListDelete(int i, Node *pNode)
{
    if (i<0 || i>= m_iLength)
    {
        return false;
    }
    Node *currentNode = m_pList;
    //找到当前节点的上一个节点
    Node *currentNodeBefore = NULL;
    for (int k = 0; k <= i; k++)
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
    //找第i个节点
    Node *currentNode = m_pList;
    //找到当前节点的上一个节点
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
            return count;//第一个节点
        }
        count++;
        //第一次拿到的head是头结点并不算第0号元素。
    }
    
    return -1;
}

bool List::PriorElem(Node *pCurrentElem, Node *pPreElem)
{
    Node *currentNode = m_pList;
    Node *tempNode = NULL;
    while (currentNode->next != NULL)
    {
        tempNode = currentNode;
        currentNode = currentNode->next;
        if (currentNode->data == pCurrentElem->data)
        {
            if (tempNode == m_pList)//如果是头结点
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
