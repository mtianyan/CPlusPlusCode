#include <stdlib.h>
#include <iostream>
using namespace std;

int main(void)
{
	int x = 3;
	//定义引用，y是x的引用
	int &y = x;
	//打印x和y的值
	cout << x << endl;
	cout << y << endl;
	//修改y的值
	y = 5;
	//再次打印x和y的值
	cout << "After Change Y:" << endl;
	cout << x << "," << y << endl;
	system("pause");
	return 0;
}