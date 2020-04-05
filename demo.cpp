#include<iostream>
using namespace std;

class demo
{
	static int x;
	public:
	static void func()
	{
	cout<<"the value of x:"<<x<<endl;
	}
	
};
int demo:: x=10;
int main()
{
	demo x;
	x.func();																																																																																																											
	return 0;

}
