#include <iostream>
using namespace std;
bool is_prime(int num)
{
	int count=0;
	for (int i = 1; i <= num; i++)
	{
		 
		
			if (num % i == 0)
			{
				count++;
			}
	}
	if (count == 2)
	{
		return 1;
	}
	else {
		return 0;
	}
}
int main()
{
	int k = 0;
	for (int m=2; k < 200; m++) {
		bool n = is_prime(m);
		if (n == 1)
		{
			cout << m <<'\t';
			k++;
			if (k % 10 == 0)
			{
				cout << endl;
			}
		}
		
	}
	
	
	return 0;
}