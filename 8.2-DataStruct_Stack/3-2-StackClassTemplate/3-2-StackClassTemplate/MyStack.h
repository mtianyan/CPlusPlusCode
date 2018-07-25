//
//  MyStack.h
//  3-2-StackClassTemplate
//
//  Created by mtianyan on 2018/7/25.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#ifndef MYSTACK_H
#define MYSTACK_H
#include <iostream>
using namespace std;
template <typename T>
class MyStack
{
public:
    MyStack(int size);          //分配内存初始化栈空间，设定栈容量，栈顶
    ~MyStack();                      //回收栈空间内存
    bool stackEmpty();          //判断栈是否为空
    bool stackFull();            //判断栈是否为满
    void clearStack();          //清空栈
    int stackLength();      //栈中元素的个数
    bool push(T elem);    //将元素压入栈中，栈顶上升
    bool pop(T &elem);    //将元素推出栈，栈顶下降
    void stackTraverse(bool isFromButtom);    //遍历栈中元素并输出
private:
    int m_iTop;         //栈顶，栈中元素个数
    int m_iSize;              //栈容量
    T *m_pBuffer;            //栈空间指针
};

template <typename T>
MyStack<T>::MyStack(int size)
{
    m_iSize = size;
    m_pBuffer = new T[size];
    m_iTop = 0;
}
template <typename T>
MyStack<T>::~MyStack()
{
    delete[]m_pBuffer;
    m_pBuffer = NULL;
    
}
template <typename T>
bool MyStack<T>::stackEmpty()
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
template <typename T>
bool MyStack<T>::stackFull()
{
    if (m_iTop == m_iSize)//>=
    {
        return true;
    }
    else
    {
        return false;
    }
}
template <typename T>
void MyStack<T>::clearStack()
{
    m_iTop = 0;//原栈中所有值无效
}
template <typename T>
int MyStack<T>::stackLength()
{
    return m_iTop;
}
template <typename T>
bool MyStack<T>::push(T elem)//放入栈顶
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
template <typename T>
bool MyStack<T>::pop(T &elem)
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
template <typename T>
void MyStack<T>::stackTraverse(bool isFromButtom)
{
    if (isFromButtom)
    {
        for (int i = 0; i < m_iTop; i++)
        {
            cout << m_pBuffer[i];
            //m_pBuffer[i].printCoordinate();
        }
    }
    else
    {
        for (int i = m_iTop - 1; i >= 0; i--)
        {
            cout << m_pBuffer[i];
            //m_pBuffer[i].printCoordinate();
        }
    }
    
}

#endif
