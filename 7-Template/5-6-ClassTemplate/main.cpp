#include <stdlib.h>
#include <string>
#include "MyArray.h"
using namespace std;

int main()
{
	MyArray<int, 5, 6> arr;//已经形成模板类了
	arr.display();
	system("pause");
	return 0;
}