#include <iostream>
using namespace std;
int main2()
{
	float r = 0,h=0,V;
	const float pi= 3.14;
	cout << "������뾶r���h" << endl;
	cin >> r >> h;
	V = (pi * h * r * r) / 3;
	cout << V << endl;


	return 0;
}