#include <iostream>
using namespace std;
void sort()
{

}
int main()
{
	int size;
	cout << "������Ԫ�ظ���" << endl;
	cin >> size;
	int* arr = new int[size];
	cout << "����������Ԫ��" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "����Ϊ��";
	for (int j = 0; j < size; j++)
	{
		cout << arr[j] << '\t';
	}
	cout << endl;
	for (int m=0; m < size-1; m++)
	{
		for (int n=0; n < size - m - 1; n++)
		{
			if (arr[n] > arr[n + 1])
			{
				int temp = arr[n];
				arr[n] = arr[n + 1];
				arr[n + 1] = temp;
			}
		}
	}
	cout << "���������Ϊ��";
	for (int j = 0; j < size; j++)
	{
		cout << arr[j] << '\t';
	}
	delete[] arr;
	return 0;
}