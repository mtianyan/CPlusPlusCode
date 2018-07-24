#include <stdlib.h>
#include<iostream>

namespace A
{
	int x = 1;
	void fun()
	{
		std::cout << "A Company function" << std::endl;
	}
}

namespace B
{
	int x = 2;
	void fun()
	{
		std::cout << "B Company function" << std::endl;
	}
	void fun2()
	{
		std::cout << "Only B Have" << std::endl;
	}
}

using namespace B;
int main()
{
	std::cout << A::x << std::endl;
	B::fun();
	fun2(); // using name space B; + fun2(); µÈ¼Û B::fun2();
	system("pause");
	return 0;
}