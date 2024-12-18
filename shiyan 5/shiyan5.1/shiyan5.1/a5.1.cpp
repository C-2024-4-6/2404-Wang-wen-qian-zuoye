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
		cout << "请输入时" << endl;
		cin >> hour;
		cout << "请输入分" << endl;
		cin >> minute;
		cout << "请输入秒" << endl;
		cin >> sec;
		cout << hour << "：" << minute << "：" << sec << endl;
		}
};
int main()
{
	Time t1(0,0,0);           
	
	return 0;
}
