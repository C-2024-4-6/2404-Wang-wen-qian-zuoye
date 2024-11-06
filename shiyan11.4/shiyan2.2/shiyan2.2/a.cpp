#include <iostream>
using namespace std;
int main()
{
	float x,y;
	cout << "请输入自变量" << endl;
	cin >> x;
	if (x < 5)
	{
		if (x < 1)
		{
			if (x > 0)
				y = 3 - 2 * x;
			cout << y << endl;
		}
		else
		{
			y = 1 + 2 / (4 * x);
			cout << y << endl;
		}
	}
	else
	{
		y = x * x;
		cout << y << endl;
	}

	return 0;
}