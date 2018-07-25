//
//  MyStack.cpp
//  3-1-StackCoordinate
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
    m_pBuffer = new Coordinate[size];
    m_iTop = 0;
}
MyStack::~MyStack()
{
    delete[]m_pBuffer;
    m_pBuffer = NULL;
    
}
bool MyStack::stackEmpty()
{
    if (m_iTop == 0)//if(0 == m_iTop)
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
    if ( m_iTop == m_iSize)//>=
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
    m_iTop = 0;//原栈中所有值无效
}

int MyStack::stackLength()
{
    return m_iTop;
}

bool MyStack::push(Coordinate elem)//放入栈顶
{
    if (stackFull())
    {
        return false;
    }
    m_pBuffer[m_iTop] = elem;
    //因为这里的coordinate是一个简单的复制。所以使用默认拷贝函数就可以了
    m_iTop++;
    return true;
}
bool MyStack::pop(Coordinate &elem)
{
    if (stackEmpty())
    {
        return false;
    }
    m_iTop--;//因为入栈时做了++，使栈顶指向下一个空位置
    elem = m_pBuffer[m_iTop];
    return true;
}

//char MyStack::pop()
//{
//    if (stackEmpty())
//    {
//        throw 1;
//    }
//    else
//    {
//        m_iTop--;
//        return m_pBuffer[m_iTop];
//    }
//}

void MyStack::stackTraverse(bool isFromButtom)
{
    if (isFromButtom)
    {
        for (int i = 0; i < m_iTop; i++)
        {
            //cout << m_pBuffer[i] << ",";
            m_pBuffer[i].printCoordinate();
        }
    }
    else
    {
        for (int i = m_iTop - 1; i >= 0; i--)
        {
            //cout << m_pBuffer[i] << ",";
            m_pBuffer[i].printCoordinate();
        }
    }
    
}
