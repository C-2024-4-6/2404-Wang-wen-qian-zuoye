#include <iostream>
#include <iomanip>
using namespace std;
int main5()
{
	float f = 0,c;
	cout << "�����뻪���¶�" << endl;
	cin >> f;
	c = (f - 32) / 1.8;
	cout << "�����¶�Ϊ:";
	cout << fixed << setprecision(2) << c << endl;


	return 0;
}