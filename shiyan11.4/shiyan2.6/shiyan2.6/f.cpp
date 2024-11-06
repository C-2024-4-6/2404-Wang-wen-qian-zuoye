#include <iostream>
using namespace std;
int main()
{
	int a, b,t,c;
	cout << "请输入两个正整数" << endl;
	cin >> a >> b;
	int d = a;
	int e = b;
	if (a < b) { t = a; a = b; b = t; }
	for (;b!=0;)
	{
		c=a% b;
		a = b;
		b = c;
	}
	cout << d << "与" << e<< "的最大公约数为：" << a<< endl;
	cout << d << "与" << e << "的最小公倍数为：" << (d*e)/a << endl;

	return 0;
}