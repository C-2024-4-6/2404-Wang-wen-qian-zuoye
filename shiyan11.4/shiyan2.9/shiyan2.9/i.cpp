#include <iostream>
using namespace std;
int main()
{
	float i;
	float d;
	float j = 2;
	float t = 0;
	double m;
	for ( i = 1;; i++,j = j * 2)//i为天数，j为每天购买的苹果数，t为总数
	{
	if (j > 100)
		{
			break;
		}
	 d = i;
	t += j;
	
	}
	m = 0.8 * t;
	
	cout << "平均每天花" << m / d << "元" << endl;
	
	return 0;
}