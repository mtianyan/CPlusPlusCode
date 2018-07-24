#include <iostream>
#include <stdlib.h>
using namespace std;

class TV
{
public:
	char name[20];
	int type;

	void changeVol();
	void power();
};

int main(void)
{
	TV tv;//定义一个对象
	// TV tv[20];
	return 0;
}//从栈中实例化对象  自动回收

