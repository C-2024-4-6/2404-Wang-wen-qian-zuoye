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
		cout << "请输入长方柱的长" << endl;
		cin >> length;
		cout << "请输入长方柱的宽" << endl;
		cin >> width;
		cout << "请输入长方柱的高" << endl;
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
	cout<<"长方柱a的体积为：" << a.Volume(0, 0, 0)<<endl;
	cout << "长方柱b的体积为：" << b.Volume(0, 0, 0)<<endl;
	cout << "长方柱c的体积为：" << c.Volume(0, 0, 0)<<endl;

	return 0;
}