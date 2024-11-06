#include <iostream>
using namespace std;
int main()
{
	char a ;
	cout << "ÇëÊäÈë×ÖÄ¸" << endl;
	cin >> a;
	if (int(a) > 96)
	{
		int b;
		b = int(a) - 32;
		cout << char(b) << endl;
	}
	else
	{
		int c;
		c = int(a) + 1;
		cout << c << endl;
	}

	return 0;
}