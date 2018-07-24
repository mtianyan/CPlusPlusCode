//
//  MyQueue.cpp
//  4-1-CircleQueue
//
//  Created by mtianyan on 2018/7/24.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include "MyQueue.h"
#include <iostream>
using namespace std;

MyQueue::MyQueue(int queueCapacity)
{
    m_iQueueCapacity = queueCapacity;//将容积传递
    ////初始化队头队尾
    //m_iHead = 0;
    //m_iTail = 0;
    ////队列元素个数初始化
    //m_iQueueLen = 0;
    //分配内存
    m_pQueue = new int[m_iQueueCapacity];
    ClearQueue();
}

MyQueue::~MyQueue()
{
    delete[]m_pQueue;
    m_pQueue = NULL;
}

void MyQueue::ClearQueue()
{
    //重置队头队尾
    m_iHead = 0;
    m_iTail = 0;
    //队列元素个数重置
    m_iQueueLen = 0;
}

bool MyQueue::QueueEmpty() const
{
    //长度为0为空，head和tail会移动。不一定等于0
    /*if (m_iQueueLen == 0)
     {
     return true;
     }
     else
     {
     return false;
     }*/
    return (m_iQueueLen == 0) ? true : false;
}

int MyQueue::QueueLength() const
{
    return m_iQueueLen;
}

bool MyQueue::QueueFull() const
{
    return (m_iQueueLen == m_iQueueCapacity) ? true : false;
}

bool MyQueue::EnQueue(int element)
{
    //先判断满
    if (QueueFull())
    {
        return false;
    }
    else
    {
        //插入尾部
        m_pQueue[m_iTail] = element;
        //队尾后移
        m_iTail++;
        m_iTail = m_iTail % m_iQueueCapacity;//循环
        //插入元素改变len
        m_iQueueLen++;
        return true;
    }
    
}

bool MyQueue::DeQueue(int &element)
{
    if (QueueEmpty())
    {
        return false;
    }
    else {
        element = m_pQueue[m_iHead];
        m_iHead++;
        m_iHead = m_iHead % m_iQueueCapacity;
        m_iQueueLen--;
        return true;
    }
}
//使用const函数是为了防止这个函数对数据成员进行改变，这个函数只可以读取数据成员，所以，当不希望函数对数据成员改变时就需要使用从const函数

void MyQueue::QueueTraverse()
{
    for (int i=m_iHead;i<m_iHead+m_iQueueLen;i++)
        //要加上头的数字。不然次数不够
        //当前i是3.len是满。则i++越界
    {
        cout << m_pQueue[i%m_iQueueCapacity] << endl;
    }
}


