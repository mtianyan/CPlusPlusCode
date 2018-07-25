//
//  Customer.cpp
//  5-1-QueueCustomer
//
//  Created by mtianyan on 2018/7/25.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include <iostream>
#include "Customer.h"
using namespace std;

Customer::Customer(string name, int age)
{
    m_strName = name;
    m_iAge = age;
}

void Customer::printInfo() const
{
    cout << "姓名：" << m_strName << endl;
    cout << "年龄：" << m_iAge << endl;
    cout << endl;
}
