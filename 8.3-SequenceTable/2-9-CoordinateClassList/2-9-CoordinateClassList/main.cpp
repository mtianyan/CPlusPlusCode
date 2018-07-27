//
//  main.cpp
//  2-9-CoordinateClassList
//
//  Created by mtianyan on 2018/7/26.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include "List.h"
#include <iostream>
using namespace std;

int main()
{
    //3 5 7 2 9 1 8
    Coordinate e1(3,5);
    Coordinate e2(5,7);
    Coordinate e3(6,8);
    Coordinate temp(0,0);
    List *list1 = new List(10);
    cout <<"length:"<<list1->ListLength()<<endl;
    list1->ListInsert(0, &e1);
    cout << "length:" << list1->ListLength() << endl;
    list1->ListInsert(1, &e2);
    list1->ListInsert(2, &e3);
    list1->ListTraverse();
    
    delete list1;
    return 0;
}
