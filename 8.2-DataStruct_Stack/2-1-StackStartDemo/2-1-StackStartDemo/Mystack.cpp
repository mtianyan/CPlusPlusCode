//
//  Mystack.cpp
//  2-1-StackStartDemo
//
//  Created by mtianyan on 2018/7/25.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include "MyStack.h"
#include <iostream>
using namespace std;

MyStack::MyStack(int size)
{
    m_iSize = size;
    m_pBuffer = new char[size]; //申请内存
    m_iTop = 0; // 初始化栈顶
}
MyStack::~MyStack()
{
    delete[]m_pBuffer;
    m_pBuffer = NULL;
}
bool MyStack::stackEmpty()
{
    if (m_iTop == 0) // 小技巧: if(0 == m_iTop) 写成一个等号会报错
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool MyStack::stackFull()
{
    if ( m_iTop == m_iSize) // >=
    {
        return true;
    }
    else
    {
        return false;
    }
}

void MyStack::clearStack()
{
    m_iTop = 0; //原栈中所有值无效，通过栈顶标记有没有该元素。
}

int MyStack::stackLength()
{
    return m_iTop; // 空栈 0 放一个元素加1
}

bool MyStack::push(char elem) //将当前元素一定得放入栈顶
{
    if(stackFull())
    {
        return false; // 或抛出异常，外层代码接收
    }
    m_pBuffer[m_iTop] = elem;
    m_iTop++;
    return true;
}

// 引用可以接收
bool MyStack::pop(char &elem)
{
    if(stackEmpty())
    {
        return false;
    }
    m_iTop--; //因为入栈时做了++，使栈顶指向下一个空位置。减减才能到有值的位置
    elem = m_pBuffer[m_iTop];
    return true;
}

//char MyStack::pop()
//{
//    if(stackEmpty())
//    {
//        throw 1;
//    }
//    else
//    {
//        m_iTop--;
//        return m_pBuffer[m_iTop];
//    }
//}


// 参数: visti()函数指针，对象元素栈得传入专有的函数处理。
void MyStack::stackTraverse(bool isFromButtom)
{
    if (isFromButtom)
    {
        // 从栈底开始遍历
        for (int i = 0; i < m_iTop; i++)
        {
            cout << m_pBuffer[i] << ",";
        }
    }
    else
    {
        // 从栈顶开始
        for (int i = m_iTop - 1; i >= 0; i--)
        {
            cout << m_pBuffer[i] << ",";
        }
    }
    
}
