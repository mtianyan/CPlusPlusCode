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
    
    vec.pop_back();//从尾部去除一个
    
    for (int i=0;i<vec.size();i++)
    {
        cout << vec[i] << endl;
    }
    cout << "end for" << endl;
    cout << vec.size() << endl;
    return 0;
}

