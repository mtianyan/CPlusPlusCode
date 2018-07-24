//#include "Soldier.h"
#include <stdlib.h>
#include <iostream>
#include "Infantry.h"

int main()
{
	//Soldier soldier;
	//// work会间接的访问到基类person中的m_strname
	//soldier.work();
	//// 进行了公有继承，父类的protected数据成员会被继承到子类的protected下面
	//// 父类的public也会继承到子类的public下面
	//soldier.play();//调用父类的成员函数

	Infantry infantry;
	infantry.attack();
	system("pause");
	return 0;
}