//
//  List.h
//  2-9-CoordinateClassList
//
//  Created by mtianyan on 2018/7/26.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#ifndef LIST_H
#define LIST_H

#include "Coordinate.h"

class List
{
public:
    List(int size);
    ~List();
    void ClearList();
    bool ListEmpty();
    int ListLength();
    bool GetElem(int i, Coordinate *e);
    int LocateElem(Coordinate *e);
    bool PriorElem(Coordinate *currentElem, Coordinate *preElem);
    bool NextElem(Coordinate *currentElem, Coordinate *nextElem);
    void ListTraverse();
    bool ListInsert(int i , Coordinate *e);
    bool ListDelete(int i , Coordinate *e);
private:
    Coordinate *m_pList;
    int m_iSize;
    int m_iLength;
};

#endif
