#include <iostream>
using namespace std;
int main()
{
	string way;
	cin >> way;
	if (way == "�ӷ�")
	{
		float a, b;
		cin >> a >> b;
		cout << a + b << endl;
	}
	else if (way == "����")
	{
		float e, f;
		cin >> e >> f;
		cout << e-f << endl;
	}
	else if (way == "�˷�")
	{
		float c, d;
		cin >> c >> d;
		cout << c * d << endl;
	}
	else if (way == "����")
	{
		float g, h;
		cin >> g>>h;
		if (h == 0)
		{
			cout << "��������Ϊ0" << endl;
		}
		else
		{
			cout << g /h << endl;
		}
	}
	else if (way == "ȡ��")
	{
		int m, n;
		cin >> m>> n;
		if (n== 0)
		{
			cout << "��������Ϊ0" << endl;
		}
		else
		{
			cout << m%n << endl;
		}
	}

	return 0;
}