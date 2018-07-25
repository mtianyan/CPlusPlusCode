//
//  main.cpp
//  4-1-StackBinaryOctonary
//
//  Created by mtianyan on 2018/7/25.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include "MyStack.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

#define BINARY 2
#define OCTONARY 8
#define HEXADECIMAL 16

int main(void)
{
    char num[] = "0123456789ABCDEF"; //栈中出现了10 访问到的就是AA
    MyStack<char> *pStack = new MyStack<char>(30);
    int N = 2018;
    int mod = 0;
    while (N !=0)
    {
        mod = N % HEXADECIMAL;
        pStack->push(num[mod]);
        N = N / HEXADECIMAL;
    }
    pStack->stackTraverse(false);
    cout << endl;
    
//    char elem = 0;
//    while (!pStack->stackEmpty())
//    {
//        pStack->pop(elem);
//        cout << num[elem];
//    }
    
    delete pStack;
    pStack = NULL;
    return 0;
}
