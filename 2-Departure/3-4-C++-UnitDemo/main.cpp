#include <stdlib.h>
#include <iostream>
using namespace std;

int main(void)
{
	// 定义常量count
	const int count = 3;
	int const *p = &count;
	// 打印count次字符串Hello C++
	for (int i = 0; i < *p; i++)
	{
		cout << "Hello C++" << endl;
	}
	system("pause");
	return 0;
}