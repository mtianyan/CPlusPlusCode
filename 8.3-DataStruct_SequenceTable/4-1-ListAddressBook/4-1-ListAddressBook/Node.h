#ifndef NODE_H
#define NODE_H
#include "Person.h"

class Node
{
public:
    Person data;//数据域
    Node *next;//指针域指向下一个地点
    void printNode();
};

#endif
