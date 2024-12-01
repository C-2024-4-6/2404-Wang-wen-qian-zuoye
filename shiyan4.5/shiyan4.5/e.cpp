#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int i = 0; int j = 0;
	if (s1[0] == '\0')
	{
		return 0;
	}
	for (; s2[i] != '\0'; i++)
	{
		if (s2[i] == s1[0])
		{
			for (; s2[j]!= '\0'; j++)
			{
				if (s2[i + j] != s1[j])
				{
					break;
				}
			}
			if (s1[j] == '\0')
			{
				return i;
			}
		}
	}
	return -1;
}
int main()
{
	char s1[20] = { 0 };
	char s2[20] = { 0 };
	cout << "请输入第一个字符串：" << endl;
	cin.getline(s1, 10);  
	cout << "请输入第二个字符串：" << endl;
	cin.getline(s2, 20);
	cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexOf(s1, s2);
	return 0;
}