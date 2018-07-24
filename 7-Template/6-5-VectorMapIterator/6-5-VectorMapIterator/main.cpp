//
//  main.cpp
//  6-5-VectorMapIterator
//
//  Created by mtianyan on 2018/7/24.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include <vector>
#include <map>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
    // 使用vector存储数字：3、4、8、4
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(8);
    vec.push_back(4);
    //循环打印数字
    
    vector<int>::iterator itor1 = vec.begin();
    for(;itor1 != vec.end();itor1++)
    {
        cout << *itor1 <<endl;
    }
    
    // 使用map来存储字符串键值对
    map<string, string> m;
    pair<string, string> p1("S","Shang Hai");
    pair<string, string> p2("B","Bei Jing");
    pair<string, string> p3("G","Guang Zhou");
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    // 打印map中数据
    map<string, string>::iterator itor2 = m.begin();
    for(;itor2 != m.end();itor2++)
    {
        cout << itor2->first <<endl;
        cout << itor2->second <<endl;
    }
    return 0;
}
