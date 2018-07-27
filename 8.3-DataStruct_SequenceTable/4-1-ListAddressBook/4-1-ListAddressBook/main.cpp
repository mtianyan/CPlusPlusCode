//
//  main.cpp
//  4-1-ListAddressBook
//
//  Created by mtianyan on 2018/7/27.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include "List.h"
using namespace std;
/*线性表*/
int menu()
{
    cout << "功能菜单" << endl;
    cout << "1 新建联系人" << endl;
    cout << "2 删除联系人" << endl;
    cout << "3 浏览通讯录" << endl;
    cout << "4 退出通讯录" << endl;
    cout << "请输入：";
    int order = 0;
    cin >> order;
    return order;
}
//创建联系人方法
void creatperson(List *pList)
{
    Node node;
    Person person;
    cout << "输入用户姓名：";
    cin >> person.name;
    cout << "输入电话号码：";
    cin >> person.phone;
    node.data = person;
    pList->ListInsertTail(&node);
}
void deleteperson(List *pList)
{
    cout << "开发中"<<endl;
}

int main()
{
    int userorder = 0;
    List *pList = new List();
    // 用户可以重复输命令使用菜单。
    while (userorder != 4)
    {
        userorder = menu();
        switch (userorder)
        {
            case 1:
                cout << "用户指令>>>>>>>>>>>新建联系人" << endl;
                creatperson(pList);
                break;
            case 2:
                cout << "用户指令>>>>>>>>>>>删除联系人" << endl;
                deleteperson(pList);
                break;
            case 3:
                cout << "用户指令>>>>>>>>>>>浏览通讯录" << endl;
                pList->ListTraverse();
                cout << "command has been execute" << endl;
                break;
            case 4:
                cout << "用户指令>>>>>>>>>>>退出通讯录" << endl;
                break;
        }
    }
    
    delete pList;
    pList = NULL;
    return 0;
}
