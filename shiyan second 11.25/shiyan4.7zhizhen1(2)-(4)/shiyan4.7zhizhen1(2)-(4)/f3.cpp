#include <iostream>
using namespace std;

void f(char* st, int i)
{
    st[i] = '\0';
    cout << st;   
    if (i > 1) f(st, i - 1);
}
void main3()
{
    char st[] = "abcd";
    f(st, 4);
}
