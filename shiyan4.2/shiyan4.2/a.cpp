#include <iostream>
using namespace std;
void BubbleSort(double *arr,int len) {
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void PrintArray(double *arr,int len)
{
	for (int m = 0; m < len; m++)
	{
		cout << arr[m] << '\t';
	}
}
int main()
{
	double arr[10] = { 1.1, 2.3, 4.3, 3.6, 7.2, 9.23,1.55 , 5.8, 6.6, 8.4 };
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, len);
	PrintArray(arr, len);
	return 0;
}