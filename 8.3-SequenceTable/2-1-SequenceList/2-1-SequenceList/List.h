//
//  List.h
//  2-1-SequenceList
//
//  Created by mtianyan on 2018/7/26.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#ifndef LIST_H
#define LIST_H

class List
{
public:
    List(int size);   //InitList 传入线性表长度
    ~List();          //DestroyList
    void ClearList();
    bool ListEmpty(); // 大写是c语言中没有bool类型使用宏定义
    int ListLength();
    bool GetElem(int i, int *e);
    int LocateElem(int *e);
    bool PriorElem( int *currentElem,int *preElem);
    bool NextElem(int *currentElem, int *nextElem);
    void ListTraverse();
    bool ListInsert(int i ,int *e);
    bool ListDelete(int i ,int *e);
private:
    int *m_pList; // 指向一段内存
    int m_iSize;  // 大小
    int m_iLength;// 线性表当前长度
};

#endif
