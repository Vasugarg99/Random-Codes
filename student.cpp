#include<iostream>
using namespace std;

class student
{
	int rollno;
	int fee;
	int show()
	{
		rollno=58;
		fee=14550;
		return 0;
	}
public:
	int num;
	char name;
	//show();
	int output()
	{
		show();
		cout<<"Roll number:"<<rollno;
		cout<<"fee paid"<<fee;
	}
};
int main()
{ 
	
	student s;
	s.output();
}
