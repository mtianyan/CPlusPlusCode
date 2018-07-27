//
//  List.cpp
//  2-9-CoordinateClassList
//
//  Created by mtianyan on 2018/7/26.
//  Copyright © 2018年 mtianyan. All rights reserved.
//

#include "List.h"
#include <iostream>
using namespace std;
#include "Coordinate.h"

List::List(int size)
{
    m_iSize = size; // 容量
    m_pList = new Coordinate[m_iSize];
    m_iLength = 0;
}

List::~List()
{
    delete []m_pList;
    m_pList = NULL;
}

void List::ClearList()
{
    m_iLength = 0;
}
bool List::ListEmpty()
{
    return m_iLength == 0?true:false;
}

int List::ListLength()
{
    return m_iLength;
}

// 判断越界
bool List::GetElem(int i, Coordinate *e)
{
    if (i<0 || i >= m_iSize)
    {
        return false;
    }
    *e = m_pList[i];
    return true;
}

// 定位一个元素，找到返回下标值。
int List::LocateElem(Coordinate *e)
{
    for(int i=0;i<m_iLength;i++)
    {
        // 对于对象成员，比较运算符并不认识
        if (m_pList[i] == *e)
        {
            return i;
        }
    }
    // 找不到
    return -1;
}

// 获取指定元素前驱
bool List::PriorElem(Coordinate *currentElem, Coordinate *preElem)
{
    int temp = LocateElem(currentElem);
    // 情况1 无法定位到，也就是根本没有这个元素
    if (temp == -1 )
    {
        return false;
    }
    else
    { // 情况2 定位到了，这是队首元素，没有前驱
        if (temp == 0)
        {
            return false;
        }
        else
            // 正常的一般情况
        {
            *preElem = m_pList[--temp];
            return true;
        }
    }
    
}

// 寻找指定元素后继
bool List::NextElem(Coordinate *currentElem, Coordinate *nextElem)
{
    int temp = LocateElem(currentElem);
    if (temp == -1)
    {
        return false;
    }
    else
    {
        // 当前的位置索引是从0开始，length是从1开始，两者比较要统一起跑线。
        if (temp == --m_iLength)
        {
            return false;
        }
        else
        {
            *nextElem = m_pList[++temp];
            return true;
        }
    }
}

// 遍历整张线性表
void List::ListTraverse()
{
    for (int i=0;i<m_iLength;i++)
    {
        cout << m_pList[i] << endl;
        // m_plist.printCoord
    }
}

// 插入元素e作为数组的第i个元素，要记得后移其他元素。i从0开始。
bool List::ListInsert(int i, Coordinate *e)
{
    // 判断插入位置的合法性，因为i是索引所以不能等于
    if (i<0 || i >= m_iSize)
    {
        cout << "Warning: 插入未完成，请输入合法的下标" << endl;
        return false;
    }
    // 先把i及之后的先移动
    // for (int k = i;k<m_iLength;k++) //这样会导致覆盖掉,2移到3，3的值再移到4时，已经移动的是2的值了。
    // 这样写就得每次都备份原本位置数据，所以采用下面从后向前移动。
    // m_ilength-1是当前表中最后一个元素的下标。而k与i的比较加不加等于看下面的临界点验证。
    // 插入之后，长度未满时变长，满长不变。
    for(int k = m_iLength-1; k>=i; k--)
    {
        m_pList[k + 1] = m_pList[k]; // 后一个位置等于前一个位置的值，即整体后移。三个数，插第一个要移动三次。
    }
    
    // 后移之后插入我们要插的元素
    m_pList[i] = *e;
    
    // 插入判满
    if (m_iLength >= m_iSize)
    {
        cout << "Warning:插入成功，容量有限，最后的元素被抛弃" << endl;
        
    }else{
        m_iLength++;
    }
    
    return true;
}


bool List::ListDelete(int i, Coordinate *e)
{
    // i 位置的合法性判断 因为i下标，i的范围为0到m_size-1不能等于
    if (i <0 || i >=m_iSize)
    {
        cout<<"Warning: 删除的下标非法"<<endl;
        return false;
    }
    
    *e = m_pList[i]; // 备份要删除的值
    
    // i位置是要放i+1位置的元素的。
    // 从i+1开始移动，不会导致被覆盖问题。
    for (int k =i+1;k<m_iLength;k++)
    {
        m_pList[k-1] = m_pList[k];
    }
    // 删除判空
    if(m_iLength <=0)
    {
        cout << "Warning: List已空，删除失败" <<endl;
        
    }else{
        m_iLength--;
    }
    return true;
}
