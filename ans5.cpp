#include<iostream>
using namespace std;
int pow(int n)
{
	int x=n,y=1;
	for(int i=0;i<5;i++)
		{
			y=y*n;
		}
}
int main()
{
	int num;
	cout<<"Vasu Garg...\n";
	cout<<"Enter the number\n";
	cin>>num;
	cout<<"The number raised to its power:";
	cout<<pow(num);
}

