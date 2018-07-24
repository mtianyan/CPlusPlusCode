/********************************************************/
/*知识点：bool类型 命名空间 输入输出                      */
/*题目要求:                                             */
/*        使用一个函数找出一个整型数组中的最大值最小值。    */
/*******************************************************/
#include <stdlib.h>
#include <iostream>

namespace CompA
{
	int getMaxOrMin(int *arr, int count, bool isMax)
		// 数组，数组元素个数，最大还是最小(True 最大，False最小)
	{
		int temp = arr[0];
		// 先拿到整个数组中的第一个元素，一旦发现比它大的，就把刚发现的赋值给它
		for (int i = 1; i < count; i++)
			// 经典写法int i=0; i < count; 既然我们已经把第0个取了，我们可以从第一个开始比
		{
			if (isMax)
			{
				if (temp < arr[i]) {
					temp = arr[i];
				}
			}
			else
			{
				if (temp > arr[i]) {
					temp = arr[i];
				}
			}

		}

		return temp;
	}
}


int main(void)
{
	int arr1[4] = { 3,5,1,7 };
	bool isMax = false;
	std::cout << "您想要求数组{3,5,1,7}最大值还是最小值？(0最小,1最大)" << std::endl;
	std::cin >> isMax;
	std::cout << CompA::getMaxOrMin(arr1, 4, isMax) << std::endl;
	system("pause");
	return 0;
}