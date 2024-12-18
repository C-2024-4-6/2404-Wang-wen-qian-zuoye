#include <iostream> 
#include "student.h"
using namespace std;
int main()
{
	Student stud;  
	stud.set_value(1, "aaa", 'm');
	stud.display();
	Student stud1;
	stud1.set_value(007, " tcg", 'm');
	return 0;
}
