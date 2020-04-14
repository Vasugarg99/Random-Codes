#include<iostream>
#include<fstream>
using namespace std;
{
class student
{
int roll;
char name[20];
float marks;
public:
void get data()
{
cout<<"Enter roll number";
cin>>roll;
cout<<"Enter name";
cin>>name;
cout<<"Enter marks";
cin>>marks;
}
};
int main()
{
student str;
fstream f("file2.txt",ios::in/ios::out);
char arr='y';
}
