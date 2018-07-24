//
//  main.cpp
//  6-3-2-StringMap
//
//  Created by mtianyan on 2018/7/24.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string,string> m;
    pair<string,string> p1("H","hello");
    pair<string,string> p2("W","world");
    //m.push_back(p1);//错误
    m.insert(p1);
    m.insert(p2);
    
    cout << m["H"] << endl;
    cout << m["W"] << endl;
    
    map<string,string>::iterator itor = m.begin();
    for (;itor != m.end();itor++)
    {
        //cout << *itor << endl;//错误，每个都包含keyvalue
        cout << itor->first << endl;
        cout << itor->second << endl;
    }
    
    return 0;
}
