//
//  main.cpp
//  4-1-CircleQueue
//
//  Created by mtianyan on 2018/7/24.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include "MyQueue.h"
using namespace std;
int main()
{
    MyQueue *p = new MyQueue(4);
    p->EnQueue(10);
    p->EnQueue(12);
    p->EnQueue(16);
    p->EnQueue(18);
    p->EnQueue(20);
    p->QueueTraverse();
    
    int e = 0;
    p->DeQueue(e);
    cout << endl;
    cout << e << endl;
    
    p->DeQueue(e);
    cout << e << endl;
    cout << "**** del 10 12" <<endl;
    p->QueueTraverse();
    
    p->ClearQueue();
    cout << "**** after clear" << endl;
    p->QueueTraverse();
    cout << endl;
    
    p->EnQueue(20);
    p->EnQueue(30);
    cout << "**** after enqueue 20 30"<<endl;
    p->QueueTraverse();
    
    delete p;
    p = NULL;
    
    return 0;
}




