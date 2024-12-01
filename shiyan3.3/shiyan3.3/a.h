#pragma once
#include <iostream>
using namespace std;
double celsius_to_fah(double cel)//摄氏温度到华氏温度
{
	return 32 + cel * 1.8;
}
double fahrenheit_to_cels(double fah) //华氏温度到摄氏温度
{
	return (fah - 32) / 1.8;
}