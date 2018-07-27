//
//  Person.h
//  4-1-ListAddressBook
//
//  Created by mtianyan on 2018/7/27.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <ostream>
using namespace std;

class Person
{
    friend ostream &operator<<(ostream &out, Person &person);
public:
    string name;
    string phone;
    // 重载赋值运算符
    Person &operator=(Person &person);
    bool operator==(Person &person);
};


#endif
