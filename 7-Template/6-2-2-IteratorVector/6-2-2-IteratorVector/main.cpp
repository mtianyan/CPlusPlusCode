#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main()
{
    vector<int> vec;
    
    vec.push_back(3);//从尾部去插入
    vec.push_back(4);
    vec.push_back(6);
    //迭代器
    vector<int>::iterator itor = vec.begin();
    //cout << *itor << endl;
    for (;itor != vec.end();itor++)
    {
        cout << *itor << endl;
    }
    cout << "end iterator" << endl;
    cout << vec.front() << endl;//第一个元素
    cout << vec.back() << endl;//最后一个元素
    
    return 0;
}
