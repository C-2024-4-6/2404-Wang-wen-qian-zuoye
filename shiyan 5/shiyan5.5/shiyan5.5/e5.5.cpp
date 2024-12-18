#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "修改后的坐标值为：" << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point a(60, 80);
	a.setPoint(4, 5);
	a.display();
	return 0;
}