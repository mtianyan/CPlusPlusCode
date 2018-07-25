//
//  main.cpp
//  5-1-QueueCustomer
//
//  Created by mtianyan on 2018/7/25.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include "MyQueue.h"
#include "Customer.h"//myqueue中包含过了
using namespace std;
int main()
{
    MyQueue *p = new MyQueue(4);
    
    // 插入custom对象类型
    Customer c1("mtianyan", 21);
    Customer c2("lisi", 30);
    Customer c3("wangwu", 40);
    p->EnQueue(c1);
    p->EnQueue(c2);
    p->EnQueue(c3);
    
    p->QueueTraverse();
    
    cout << "3 customer" << endl;
    
    Customer c4("", 0); // 临时变量用来存放被删除的值
    
    p->DeQueue(c4);
    c4.printInfo();
    cout << "c4 del" << endl;
    
    p->QueueTraverse();
    
    return 0;
}
