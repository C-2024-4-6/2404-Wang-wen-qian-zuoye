#include <iostream>
using namespace std;
int Gcd(int &refm,int&refn)
{
	int temp,a,b;
	a = refm;
	b = refn;
	if (a < b)
	{
		 temp = a;
		a = b;
		b = temp;
	}
	for (int c; a % b != 0;)
	{
		c = a % b;
		b = c;
	}
	return b;
}
int main()
{
	int m, n;
	cout << "请输入两个数" << endl;
	cin >> m >> n;
	Gcd(m, n);
	cout << "最大公约数为：" << Gcd(m,n)<< endl;
	cout << "最小公倍数为：" << (m* n) / Gcd(m,n)<< endl;
	return 0;
}