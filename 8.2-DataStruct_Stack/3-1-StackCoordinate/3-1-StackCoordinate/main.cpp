//
//  main.cpp
//  3-1-StackCoordinate
//
//  Created by mtianyan on 2018/7/25.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include "MyStack.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(void)
{
    MyStack *pStack = new MyStack(5);
    
    pStack->push(Coordinate(1,2));//底
    pStack->push(Coordinate(3, 4));
    
    pStack->stackTraverse(true);
    
    pStack->stackTraverse(false);
    
    cout << pStack->stackLength() << endl;
    
    delete pStack;
    pStack = NULL;
    return 0;
}

