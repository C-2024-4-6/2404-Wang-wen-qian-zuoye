#include <iostream>
using namespace std;
int main()
{
	float i;
	float d;
	float j = 2;
	float t = 0;
	double m;
	for ( i = 1;; i++,j = j * 2)//iΪ������jΪÿ�칺���ƻ������tΪ����
	{
	if (j > 100)
		{
			break;
		}
	 d = i;
	t += j;
	
	}
	m = 0.8 * t;
	
	cout << "ƽ��ÿ�컨" << m / d << "Ԫ" << endl;
	
	return 0;
}