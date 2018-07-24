//
//  MyQueue.h
//  4-1-CircleQueue
//
//  Created by mtianyan on 2018/7/24.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#ifndef MyQueue_h
#define MyQueue_h

class MyQueue
{
public:
    MyQueue(int queueCapacity);   //InitQueue(&Q)创建队列
    virtual ~MyQueue();           //DestroyQueue(&Q)销毁队列
    void ClearQueue();            //ClearQueue(&Q)清空队列
    bool QueueEmpty() const;      //QueueEmpty(Q)判空队列
    bool QueueFull() const;       //判断满
    int  QueueLength() const;     //QueueLength(Q) 队列长度
    bool EnQueue(int element);    //EnQueue(&Q，&element) 新元素加入
    bool DeQueue(int &element);   //DeQueue(&Q,&element) 首元素出队
    void QueueTraverse();         //QueueTraverse(Q,visit()) 遍历队列
    //简单类型不需要实现visit方法。
private:
    int *m_pQueue;             //队列数组指针
    int m_iQueueLen;           //队列元素个数
    int m_iQueueCapacity;      //队列数组容量
    int m_iHead;               //数组的下标：队头
    int m_iTail;               //数组的下标： 队尾
};

#endif /* MyQueue_h */
