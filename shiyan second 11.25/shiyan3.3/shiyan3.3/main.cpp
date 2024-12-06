#include <iostream>
using namespace std;
#include "a.h"
int main() 
{
	cout << "Celsius" << '\t' << "Fahrenheit" << "|" << "Fahrenheit" << '\t' << "Celsius" << endl;;
	double i = 40.0;
	double j = 120.0;
	for (; i > 30.0&&j>20.0; i--,j-10.0)
	{
		cout << i << '\t' << celsius_to_fah(i) << '\t' << "|" << '\t' << j << '\t' << fahrenheit_to_cels(j) << endl;
	}
	return 0;
}