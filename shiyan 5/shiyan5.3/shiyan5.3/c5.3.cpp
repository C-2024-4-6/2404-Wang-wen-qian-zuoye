#include <iostream>
using namespace std;
class Rectangle
{
private:
	int length;
	int width;
	int height;
public:
	
	int Volume(int length, int width, int height)
	{
		cout << "�����볤�����ĳ�" << endl;
		cin >> length;
		cout << "�����볤�����Ŀ�" << endl;
		cin >> width;
		cout << "�����볤�����ĸ�" << endl;
		cin >> height;
		this->height = height;
		this->length = length;
		this->width = width;
		return height * width * length;
	}
};
int main()
{
	Rectangle a;
	Rectangle b;
	Rectangle c;
	cout<<"������a�����Ϊ��" << a.Volume(0, 0, 0)<<endl;
	cout << "������b�����Ϊ��" << b.Volume(0, 0, 0)<<endl;
	cout << "������c�����Ϊ��" << c.Volume(0, 0, 0)<<endl;

	return 0;
}