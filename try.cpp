#include<iostream>
using namespace std;

class student
{
	int rollno;
	int fee;
	int read()
	{
		rollno=58;
		fee=14550;
		return 0;
	}
public:
	int num;
	char name;
	read();
	int output()
	{
		cout<<"Roll number:"<<rollno;
		cout<<"fee paid"<<fee;
	}
};
void main()
{ 
	clrscr();
	student s;
	s.read();
	s.output();
}
