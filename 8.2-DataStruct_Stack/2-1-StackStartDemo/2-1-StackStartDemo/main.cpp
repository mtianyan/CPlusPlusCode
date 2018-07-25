//
//  main.cpp
//  2-1-StackStartDemo
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
    
    pStack->push('h');//栈底
    pStack->push('e');
    pStack->push('l');
    pStack->push('l');
    pStack->push('o');//栈顶
    
    pStack->stackTraverse(true);
    cout << endl;
    
    char elem = 0;
    pStack->pop(elem);
    
    cout << "pop elem" <<endl;
    cout << elem << endl;
    
    //pStack->clearStack();
    pStack->stackTraverse(false);
    
    cout << endl;
    cout << "len:" << pStack->stackLength() << endl;
    
    if (pStack->stackEmpty())
    {
        cout << "栈为空" << endl;
    }
    if (pStack->stackFull())
    {
        cout << "栈为满" << endl;
    }
    
    delete pStack;
    pStack = NULL;
    return 0;
}
