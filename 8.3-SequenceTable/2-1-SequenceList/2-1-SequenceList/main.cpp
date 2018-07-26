//
//  main.cpp
//  2-1-SequenceList
//
//  Created by mtianyan on 2018/7/26.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include "List.h"
#include <iostream>
using namespace std;
#include <stdlib.h>

int main()
{
    // 3 5 7 2 9 1 8
    int e1 = 3;
    int e2 = 5;
    int e3 = 7;
    int e4 = 2;
    int e5 = 9;
    int e6 = 1;
    int e7 = 8;
    List *list1 = new List(7);
    
    list1->ListInsert(0, &e1);
    list1->ListInsert(1, &e2);
    list1->ListInsert(2, &e3);
    list1->ListInsert(3, &e4);
    list1->ListInsert(4, &e5);
    list1->ListInsert(5, &e6);
    list1->ListInsert(6, &e7);

   
    // 打印长度
    cout << "length: "<<list1->ListLength()<< endl;
    int insertFirst= 11;
    list1->ListInsert(0,&insertFirst);
    int insertEnd = 99;
    list1->ListInsert(6,&insertEnd);
    int insertOutRange = 666;
    list1->ListInsert(7,&insertOutRange);
    
    list1->ListTraverse();
    cout << "*************" << endl;
    
    // 满list中间插入元素
    int insertMiddle = 55;
    list1->ListInsert(3,&insertMiddle);
    
 
    list1->ListTraverse();
    cout << ">>>>>>>>>>>>>" << endl;
    
    // 满List删除元素
    int delMidlle= 0;
    list1->ListDelete(3, &delMidlle);
    list1->ListInsert(3,&insertMiddle);
    int delFirst= 0;
    list1->ListDelete(0,&delFirst);
    int delEnd = 0;
    list1->ListDelete(6,&delEnd);
    int delOutRange = 0;
    list1->ListDelete(7,&delOutRange);
    list1->ListTraverse();
    cout << "<<<<<<<<<<<<<<" << endl;
    
    // 未满队删除
    list1->ListDelete(0,&delFirst);
    list1->ListDelete(2,&delMidlle);
    list1->ListDelete(2,&delEnd);
    
    list1->ListTraverse();
    cout << "ooooooooooooooo" << endl;
    
    // 未满队添加
    insertFirst = 21;
    insertMiddle = 22;
    insertEnd = 23;
    list1->ListInsert(0,&insertFirst);
    list1->ListInsert(2,&insertMiddle);
    list1->ListInsert(4,&insertEnd);
    list1->ListTraverse();
    cout << "ttttttttttttttt" << endl;
    
    list1->ClearList();
    list1->ListTraverse();
     cout << "nnnnnnnnnnnnnnn" << endl;
    
    delete list1;
    return 0;
}


