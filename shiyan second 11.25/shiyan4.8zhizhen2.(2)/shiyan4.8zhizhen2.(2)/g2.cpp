#include <iostream>
#include <cctype>
using namespace std;
int parseHex(const char* const hexString)
{
	int a = 0;
	for (int i = 0; hexString[i] != '\0'; i++)
	{
		char ch = hexString[i];
		int b;
		if ('0' <= ch && ch <= '9')
		{
			b = ch - '0';
		}
		else if ('a' <= ch && ch <= 'f')
		{
			b = ch - 'a'+10;
		}
		else if ('A' <= ch && ch <= 'F')
		{
			b = ch - 'A'+10;
		}
		else
		{
			return -1;
		}
		a = a * 16 + b;
	}
	return a;
}
int main()
{
	const char* hexString = "A5";
	int a = parseHex(hexString);
	if (a != -1)
	{
		cout << "十六进制为：" << hexString << endl;
		cout << "十进制为：" << a << endl;
	}
	else
	{
		cout << "这不是一个有效的十六进制数" << endl;
	}
	return 0;
}