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
	cout << "������������" << endl;
	cin >> m >> n;
	Gcd(m, n);
	cout << "���Լ��Ϊ��" << Gcd(m,n)<< endl;
	cout << "��С������Ϊ��" << (m* n) / Gcd(m,n)<< endl;
	return 0;
}