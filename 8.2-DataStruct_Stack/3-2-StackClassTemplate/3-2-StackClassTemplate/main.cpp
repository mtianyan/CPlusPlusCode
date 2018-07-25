//
//  main.cpp
//  3-2-StackClassTemplate
//
//  Created by mtianyan on 2018/7/25.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include "MyStack.h"
#include <iostream>
#include <stdlib.h>
#include "Coordinate.h"
using namespace std;
int main(void)
{
    MyStack<Coordinate> *pStack = new MyStack<Coordinate>(5);
    
    pStack->push(Coordinate(1,2));//底
    pStack->push(Coordinate(3, 4));
    
    pStack->stackTraverse(true);
    
    pStack->stackTraverse(false);
    
    cout << pStack->stackLength() << endl;
    MyStack<char> *pStack2 = new MyStack<char>(5);
    
    pStack2->push('h');//底
    pStack2->push('e');
    pStack2->push('l');
    pStack2->push('l');
    pStack2->push('o');//顶
    
    pStack2->stackTraverse(true);
    delete pStack;
    pStack = NULL;
    return 0;
}
