#pragma once
#include <iostream>
using namespace std;
double celsius_to_fah(double cel)//�����¶ȵ������¶�
{
	return 32 + cel * 1.8;
}
double fahrenheit_to_cels(double fah) //�����¶ȵ������¶�
{
	return (fah - 32) / 1.8;
}