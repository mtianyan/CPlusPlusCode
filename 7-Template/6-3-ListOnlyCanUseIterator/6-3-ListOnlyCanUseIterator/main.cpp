//
//  main.cpp
//  6-3-ListOnlyCanUseIterator
//
//  Created by mtianyan on 2018/7/24.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main()
{
    list<int> list1;
    list1.push_back(4);
    list1.push_back(7);
    list1.push_back(10);
    
    //     for (int i=0;i<list1.size();i++)
    //     {
    //         cout << list1[i] << endl;//错误
    
    //     }
    list<int>::iterator itor = list1.begin();
    for (;itor != list1.end();itor++)
    {
        cout << *itor << endl;
    }
    return 0;
}
