/********************************************************/
/*֪ʶ�㣺bool���� �����ռ� �������                      */
/*��ĿҪ��:                                             */
/*        ʹ��һ�������ҳ�һ�����������е����ֵ��Сֵ��    */
/*******************************************************/
#include <stdlib.h>
#include <iostream>

namespace CompA
{
	int getMaxOrMin(int *arr, int count, bool isMax)
		// ���飬����Ԫ�ظ������������С(True ���False��С)
	{
		int temp = arr[0];
		// ���õ����������еĵ�һ��Ԫ�أ�һ�����ֱ�����ģ��ͰѸշ��ֵĸ�ֵ����
		for (int i = 1; i < count; i++)
			// ����д��int i=0; i < count; ��Ȼ�����Ѿ��ѵ�0��ȡ�ˣ����ǿ��Դӵ�һ����ʼ��
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
	std::cout << "����Ҫ������{3,5,1,7}���ֵ������Сֵ��(0��С,1���)" << std::endl;
	std::cin >> isMax;
	std::cout << CompA::getMaxOrMin(arr1, 4, isMax) << std::endl;
	system("pause");
	return 0;
}