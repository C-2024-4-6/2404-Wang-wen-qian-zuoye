#include <iostream>
using namespace std;
int peach(int m)
{
	int a ;

	if (m==1)
	{
		a = 1;
	}
	else 
	{
		a = (peach(m - 1) + 1) * 2;
	}
	return a;
}
int main()
{
	int x;
	cin >>x;
	cout<<peach(x);
	return 0;
}