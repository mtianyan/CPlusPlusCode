#include <stdlib.h>
#include <iostream>
#include <string>
#include "Teacher.h"
using namespace std;

void test(Teacher t) {

}

int main(void)
{
	Teacher teacher;
	Teacher t2 = teacher;
	Teacher t3(t2);  // 这里无论使用t2还是teacher都只会调用拷贝构造函数
	test(teacher); //函数使用已实例化的对象时调用。
	cout << teacher.getName() << " " << teacher.getAge() << endl;
	system("pause");
	return 0;
}