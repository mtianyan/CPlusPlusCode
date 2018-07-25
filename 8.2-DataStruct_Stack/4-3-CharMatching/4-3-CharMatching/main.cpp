//
//  main.cpp
//  4-3-CharMatching
//
//  Created by mtianyan on 2018/7/25.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include "Mystack.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
    MyStack<char> *pStack = new MyStack<char>(30);   //已存入的字符
    
    MyStack<char> *pNeedStack = new MyStack<char>(30);//需要的字符。
    
    char str[] = "[()[()]]";
    char currentNeed = 0;
    
    for (int i=0;i<strlen(str);i++)
    {
        if (str[i] != currentNeed)//如果此时扫描到的字符不是我们所需要的。
        {
            pStack->push(str[i]);//那么将这个字符存入“已存入字符”
            switch (str[i])//对于这个字符，生成它的currentneed
            {
                case '[':
                    if (currentNeed !=0)//如果currentneed已经有值，不为初值。
                    {
                        pNeedStack->push(currentNeed);//将当前的需要字符入栈。
                    }
                    currentNeed = ']';//生成当前需要。
                    break;
                case  '(':
                    if (currentNeed != 0)
                    {
                        pNeedStack->push(currentNeed);
                    }
                    currentNeed = ')';
                    break;
                default:
                    cout << str <<endl;
                    cout << "字符串不匹配: 您输入了孤立的右括号或非括号字符" << endl;
                    return 0;
                    
            }
        }
        // 当前字符正好是需要的
        else
        {
            char elem;
            pStack->pop(elem);
            // 新的栈顶应该有新的currentNeed
            if(!pNeedStack->pop(currentNeed))
            {
                // 这里的判断很重要,不然已经没有可以出栈的，仍保持上次currentNeed。这时正好来一个，就出bug
                currentNeed = 0;
            }

        }
        
    }
    if (pStack->stackEmpty())
    {
        cout << str <<endl;
        cout << "字符串括号匹配" << endl;
    }
    else{
        cout << str <<endl;
        cout << "字符串不匹配: 括号不匹配" << endl;
    }
    delete pStack;
    pStack = NULL;
    delete pNeedStack;
    pNeedStack = NULL;
    return 0;
}

