#include <iostream>
using namespace std;
int main()
{
	cout << "�����������ε�������" << endl;
	float a, b, c;
	cin >> a >> b >> c;
	if ((a + b > c)&&(a+c>b)&&(b+c>a))
	{
		cout << "�ܳ�Ϊ��" << a + b + c << endl;
		if (a == b||a==c||b==c)
		{
			
				cout << "��������Ϊ����������" << endl;
		
		}
		else
		{
			cout << "�������β�Ϊ����������" << endl;
		}
	}
	else
	{
		cout << "������Ĳ�����������";
	}
	return 0;
}