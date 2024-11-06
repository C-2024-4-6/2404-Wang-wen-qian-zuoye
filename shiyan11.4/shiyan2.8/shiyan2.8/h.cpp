#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
int main()
{
	double a;
	cout << "请输入您要计算的值" << endl;
	cin >> a;
	double b;
	double x = a;
	if (a < 0)
	{
		x = abs(a);
		a = abs(a);
		for (;;)
		{
			b = (x + a/ x) * 0.5;
			if (abs(b - x)< 1e-5)
			{
				break;
			}
			x = b;
			
		}
		cout  << "平方根为：" << b  <<"i" << endl;
		
	}
	
	else
	{
	
		for (;;)
		{
			 b = (x + a / x) * 0.5;
			if (abs(b - x) < 1e-10)
			{
				break;
			}
			x = b;
		}
		cout << a << "的平方根为：" << b << endl;
	}
	return 0;
}