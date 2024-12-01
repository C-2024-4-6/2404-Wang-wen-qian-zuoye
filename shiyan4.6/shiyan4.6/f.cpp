#include <iostream>
#include <cctype>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0;s[i]!='\0'; i++)
	{
		if (isalpha(s[i]))
		{
			for (int j = 0; j < 26;j++)
			{
				int m = j + 65;
				int n = j + 97;
				if (s[i] == m|| s[i] == n)
				{
					counts[j]++;
					break;
				}
			}
		}
	}
	for (int x = 0; x < 26; x++)
	{
		char a = x + 97;
		if (counts[x] != 0)
		{
			cout << a << ":" << counts[x] << " times" << endl;
		}
	}
}
int main()
{
	char str[80];
	cout << "ÇëÊäÈëÒ»´®×Ö·û" << endl;
	cin.getline(str, 80);
	int counts[26] = { 0 };
	count(str,counts);
	return 0;
}