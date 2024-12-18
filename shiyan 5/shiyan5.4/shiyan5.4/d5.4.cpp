#include <iostream>
using namespace std;
class Student
{
private:
	
public:
	int num;
	int grade;
	Student(int num, int grade)
	{
		this->grade = grade;
		this->num = num;
	}
	
};
int Max(Student *p,int size )
{
	int maxgrade = p[0].grade;
	int maxnum = p[0].num;
	for(int i=0;i<size;i++)
	{
		if (p[i].grade > maxgrade)
		{
			maxgrade = p[i].grade;
			maxnum = p[i].num;
		}
	}
	return maxnum;
}
int main()
{
	Student s[5] =
	{ Student(1,90),Student(4,86),Student(3,49),
		Student(2,66),Student(9,99) };
	Student* p;
	p = s;
	cout <<"最高成绩者学号为：" << Max(p, 5);
	return 0;
}