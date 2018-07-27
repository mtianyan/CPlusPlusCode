//
//  main.cpp
//  3-2-SingleList
//
//  Created by mtianyan on 2018/7/27.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include <stdlib.h>
#include "List.h"
#include <iostream>

using namespace std;

int main()
{
    Node node1;
    node1.data = 3;
    Node node2;
    node2.data = 4;
    Node node3;
    node3.data = 5;
    Node node4;
    node4.data = 6;
    Node node5;
    node5.data = 7;
    Node temp;
    List *pList = new List();
    
    pList->ListInsertHead(&node1);
    pList->ListTraverse();
    pList->ListInsertHead(&node2);
    pList->ListTraverse();
    pList->ListInsertHead(&node3);
    pList->ListInsertHead(&node4);
    pList->ListTraverse();
    cout<<"head insert **********"<<endl;
    pList->ListInsertTail(&node1);
    pList->ListInsertTail(&node2);
    pList->ListInsertTail(&node3);
    pList->ListInsertTail(&node4);
    pList->ListTraverse();
    cout<<"tail insert **********"<<endl;
    pList->ListInsert(0,&node5);
    pList->ListInsert(3,&node5);
    cout << "length:" << pList->ListLength() <<endl;
    pList->ListInsert(10,&node5);
    pList->ListTraverse();
    cout<<"List insert **********"<<endl;
    
    pList->ListDelete(0,&temp);
    pList->ListDelete(3,&temp);
    cout << "length:" << pList->ListLength() <<endl;
    pList->ListDelete(9,&temp); //超过长度
    pList->ListDelete(8, &temp);
    pList->ListTraverse();
    cout<<"List del **********"<<endl;
    
    pList->GetElem(0, &temp);
    temp.printNode();
    pList->PriorElem(&node5, &temp);
    temp.printNode();
    pList->NextElem(&node5, &temp);
    temp.printNode();
    cout <<"********************" << endl;
    
    cout <<"temp:" <<temp.data << endl;
    
    delete pList;
    pList = NULL;
    return 0;
}


