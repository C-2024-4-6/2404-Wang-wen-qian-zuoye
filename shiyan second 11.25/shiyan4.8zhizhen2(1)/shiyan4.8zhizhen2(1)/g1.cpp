#include <iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 >len2 )
	{
			return -1;
	}
	for (int i = 0; i<=len2-len1; i++)
	{
		int j = 0;
		for (; j < len1 && s1[j] == s2[i + j]; j++);
		if (j == len1)
		{
			return i;
		}
	}
	return -1;
	
}
int main()
{
	char s1[80];
	char s2[80];
	cout << "ÇëÊäÈëµÚÒ»´®×Ö·û" << endl;
	cin.getline(s1, 80);
	cout << "ÇëÊäÈëµÚ¶þ´®×Ö·û" << endl;
	cin.getline(s2, 80);
	cout<<indexof(s1, s2);
	return 0;
}