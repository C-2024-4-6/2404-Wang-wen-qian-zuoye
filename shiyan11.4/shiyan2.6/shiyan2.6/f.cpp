#include <iostream>
using namespace std;
int main()
{
	int a, b,t,c;
	cout << "����������������" << endl;
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
	cout << d << "��" << e<< "�����Լ��Ϊ��" << a<< endl;
	cout << d << "��" << e << "����С������Ϊ��" << (d*e)/a << endl;

	return 0;
}