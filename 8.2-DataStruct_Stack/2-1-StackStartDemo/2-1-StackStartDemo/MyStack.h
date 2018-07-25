//
//  MyStack.h
//  2-1-StackStartDemo
//
//  Created by mtianyan on 2018/7/25.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#ifndef MyStack_h
#define MyStack_h

class MyStack
{
public:
    MyStack(int size);              //分配内存初始化栈空间，设定栈容量，栈顶
    ~MyStack();                     //回收栈空间内存
    bool stackEmpty();              //判断栈是否为空 为空 true 非空false
    bool stackFull();               //判断栈是否为满 为满 true 不满 false
    void clearStack();              //清空栈
    int stackLength();              //栈中元素的个数
    bool push(char elem);           //将元素压入栈中，栈顶上升 判满
    bool pop(char &elem);           //将元素推出栈，栈顶下降 判空
    void stackTraverse(bool isFromButtom);    //遍历栈中元素并输出
private:
    int m_iTop;            //栈顶，同时可以反映栈中元素个数(栈底永远是0)
    int m_iSize;           //栈容量
    char *m_pBuffer;       //栈空间指针
};

#endif /* MyStack_h */
