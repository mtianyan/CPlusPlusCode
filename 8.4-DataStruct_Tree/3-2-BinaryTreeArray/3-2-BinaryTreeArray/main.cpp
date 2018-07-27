//
//  main.cpp
//  3-2-BinaryTreeArray
//
//  Created by mtianyan on 2018/7/27.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include "Tree.h"
using namespace std;
/********************************************************************
              数组---树  Tree【】=3 5 8 2 6 9 7
              3(0)                                左孩子小标=父节点下标*2+1
    5(1)               8(2)                       右孩子小标=父节点下标*2+2
 2(3)      6(4)  9(5)        7(6)
 
 **********************************************************************/
int main()
{
    int root = 3;
    Tree *pTree = new Tree(10, &root);
    int node1 = 5;
    int node2 = 8;
    //0号节点插入左孩子。
    pTree->AddNode(0, 0, &node1);
    //0号节点插入右孩子。
    pTree->AddNode(0, 1, &node2);
    
    int node3 = 2;
    int node4 = 6;
    int node5 = 9;
    int node6 = 7;
    pTree->AddNode(1, 0, &node3);
    pTree->AddNode(1, 1, &node4);
    pTree->AddNode(2, 0, &node5);
    pTree->AddNode(2, 1, &node6);
    
    pTree->TreeTraverse();
    
    // 传入节点值，找到index
    int *p = pTree->SearchNode(2);
    cout << endl;
    cout << "***************"<<endl;
    cout << "index:" << *p<<endl;
    cout << "***************"<<endl;
    // 删除传入index
    int temp;
    pTree->DeleteNode(6, &temp);
    cout << endl;
    cout << "delete node=" << temp << endl;
    
    pTree->TreeTraverse();
    cout << endl;
    delete pTree;
    pTree = NULL;
    
    return 0;
}

