#include <iostream>
using namespace std;
int main()
{	
	for (int i = 1; i < 6;)
	{
		for (int j = 1;j<i+1;)
		{
			cout << "*" ;
			j++;
		}
		i++;
		cout << endl;
	}



	return 0;
}