#include <stdlib.h>
#include <iostream>
using namespace std;

int main(void)
{
	// ���峣��count
	const int count = 3;
	int const *p = &count;
	// ��ӡcount���ַ���Hello C++
	for (int i = 0; i < *p; i++)
	{
		cout << "Hello C++" << endl;
	}
	system("pause");
	return 0;
}