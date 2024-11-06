#include <iostream>
#include <iomanip>
using namespace std;
int main5()
{
	float f = 0,c;
	cout << "请输入华氏温度" << endl;
	cin >> f;
	c = (f - 32) / 1.8;
	cout << "摄氏温度为:";
	cout << fixed << setprecision(2) << c << endl;


	return 0;
}