#include <iostream>
#include "Person.h"
#include "Worker.h"
#include <stdlib.h>
#include "Dustman.h"
int main()
{
	//Person person("张三");//“Person”: 不能实例化抽象类
	//Worker worker("zhangsan", 17);// “Worker”: 不能实例化抽象类
	Dustman dustman("zhangsan", 20);

	system("pause");
	return 0;
}