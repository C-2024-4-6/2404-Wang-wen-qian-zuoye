#include <iostream>
using namespace std;
int main()
{
	bool arr[100] = {0};
	for (int i = 0; i < 100; i++)//iÎªÑ§Éú
	{
		if (i == 0)
		{
			for (int n = 0; n < 100; n++)
			{
				arr[n] = 1;
			}
		}
		else 
		{
			int j = i;
			for (; j < 100; j = j + i + 2)
			{
				if (arr[j] == 0)
				{
					arr[j] = 1;
				}
				else
				{
					arr[j] = 0;
				}
			}
		}
	}
	for (int m = 0; m < 100; m++)
	{
		if (arr[m] == 1)
		{
			cout << m+1 << '\t';
		}
	}
	return 0;
}