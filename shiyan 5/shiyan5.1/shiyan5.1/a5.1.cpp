#include<iostream>
using namespace std;
class Time            
{
private:
	int hour;
	int minute;
	int sec;
public:             
	Time(int hour=0, int minute=0, int sec=0)
	{   
		cout << "������ʱ" << endl;
		cin >> hour;
		cout << "�������" << endl;
		cin >> minute;
		cout << "��������" << endl;
		cin >> sec;
		cout << hour << "��" << minute << "��" << sec << endl;
		}
};
int main()
{
	Time t1(0,0,0);           
	
	return 0;
}
