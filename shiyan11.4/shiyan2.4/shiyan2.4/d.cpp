#include <iostream>
using namespace std;
int main()
{
	string way;
	cin >> way;
	if (way == "加法")
	{
		float a, b;
		cin >> a >> b;
		cout << a + b << endl;
	}
	else if (way == "减法")
	{
		float e, f;
		cin >> e >> f;
		cout << e-f << endl;
	}
	else if (way == "乘法")
	{
		float c, d;
		cin >> c >> d;
		cout << c * d << endl;
	}
	else if (way == "除法")
	{
		float g, h;
		cin >> g>>h;
		if (h == 0)
		{
			cout << "除数不能为0" << endl;
		}
		else
		{
			cout << g /h << endl;
		}
	}
	else if (way == "取余")
	{
		int m, n;
		cin >> m>> n;
		if (n== 0)
		{
			cout << "除数不能为0" << endl;
		}
		else
		{
			cout << m%n << endl;
		}
	}

	return 0;
}