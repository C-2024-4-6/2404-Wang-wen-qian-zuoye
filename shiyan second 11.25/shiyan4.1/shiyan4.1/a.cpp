#include <iostream>
using namespace std;
int main()
{
	int arr[10] = {0};
	int m;
	for (int i = 0; i < 10; i++)
	{
		cin >> m;
		if (i == 0)
		{
			arr[i] = m;
			
		}
		if (i > 0)
		{
			for (int j = 0; j < i; j++)
			{
				if (m == arr[j])
				{
					break;
				}
				if (j == i-1 && m != arr[i - 1])
				{
					arr[i] = m;
				}
			}

		}
	}
	for (int n = 0; n < 10; n++)
	{
		if (arr[n ]!=0) {
			cout << arr[n] << '\t';
		}
	}
	
	return 0;
}