//
//  Link.h
//  4-1-ListAddressBook
//
//  Created by mtianyan on 2018/7/27.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#ifndef LIST_H
#define LIST_H
#include "Node.h"
class List
{
public:
    List();//相对于线性表，先放了头结点
    ~List();
    void ClearList();//得一个一个清空
    bool ListEmpty();
    int ListLength();
    bool GetElem(int i, Node *pNode);
    int LocateElem(Node *pNode);//给定节点的坐标
    bool PriorElem(Node *pCurrentElem, Node *pPreElem);//根据currentnode找到相应节点。将前驱或后继赋值给其他变量
    bool NextElem(Node *pCurrentElem, Node *pNextElem);
    void ListTraverse();//拿着头结点。
    bool ListInsert(int i, Node *pNode);//找到i-1个节点。指向该节点。该节点指向原来第i个。
    bool ListDelete(int i, Node *pNode);//找到第i个节点。上一个节点指向下一个节点
    bool ListInsertHead(Node *pNode);//从头开始插入。头结点指针域指向该节点。该节点指针域指向原来头结点指向的结点。
    bool ListInsertTail(Node *pNode);//从尾开始插入。只需要找到最后一个节点。该节点指针域为NulL。让插入节点指向null。
private:
    Node *m_pList;
    int m_iLength;
};

#endif
