//
//  Person.cpp
//  4-1-ListAddressBook
//
//  Created by mtianyan on 2018/7/27.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include "Person.h"

Person &Person::operator=(Person &person)
{
    this->name = person.name;
    this->phone = person.phone;
    
    return *this;
}
bool Person::operator==(Person &person)
{
    if (this->name == person.name && this->phone == person.phone)
    {
        return true;
    }
    return false;
}

ostream &operator<<(ostream &out, Person &person)
{
    out << person.name <<"---------"<< person.phone << endl;
    return out;
}
