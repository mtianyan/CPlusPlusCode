//
//  Customer.h
//  5-1-QueueCustomer
//
//  Created by mtianyan on 2018/7/25.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#ifndef Customer_h
#define Customer_h
#include <string>
using namespace std;

class Customer
{
public:
    Customer(string name=" ", int age=0);
    void printInfo() const;
private:
    string m_strName;
    int m_iAge;
};



#endif /* Customer_h */
