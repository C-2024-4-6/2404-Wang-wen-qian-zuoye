#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int m = 0; int n = 0; int k = 0;
	for (; m < size1&&n < size2;k++)
	{
		if (list1[m] < list2[n])
		{
			list3[k] = list1[m];
			m++;
		}
		else
		{
			list3[k] = list2[n];
			n++;
		}
	}

		for (; n < size2; n++,k++) 
		{
			list3[k] = list2[n];
		}
	
		for (; m< size1; m++, k++)
		{
			list3[k] = list1[m];
		}
		cout << k << endl;
	cout << "合并后的数组为：";
	for (int x = 0; x < k; x++)
	{
		cout << list3[x] << '\t';
	}
}
int main()
{
	int size1, size2;
	cout << "请输入第一个数组的大小" << endl;
	cin >> size1;
	int list1[80];
	cout << "请输入第一个数组" << endl;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "请输入第二个数组的大小" << endl;
	cin >> size2;
	int list2[80];
	cout << "请输入第二个数组" << endl;
	for (int j = 0; j < size2; j++)
	{
		cin >> list2[j];
	}
	int list3[160];
	merge(list1, size1, list2, size2, list3);
	return 0;
}