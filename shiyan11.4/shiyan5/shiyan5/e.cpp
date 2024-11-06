#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "ÇëÊäÈë×Ö·û´®" << endl;
	string a;
	getline(cin, a);
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int others = 0;
	for (int i = 0; i < a.length(); i++)
	{
		if (isalpha(a[i]))
		{
			chars++;
		}
		else if (isdigit(a[i]))
		{
			digits++;
		}
		else if (isspace(a[i]))
		{
			whitespace++;
		}
		else  
		{
			others++;
		}
	}
	cout << "chars:" << chars << '\t' << "whitespace:" << whitespace << '\t' << "digits:" << digits << '\t' << "others:" << others << endl;

	return 0;
}