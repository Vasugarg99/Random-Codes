#include<iostream>
using namespace std;
#define max 1000
class stack
{
int top;
public:
  int a[max];
  stack()
  {
    top=-1;
  }
  int push(int x)
  {
    if(top>=max)
    cout<<"\nstack overflow";
    else
    a[top++]=x;
  }
  int pop()
  {
    if(top<0)
    {
      cout<<"\nstack underflow";

    }
    else
    {
      int x=a[top--];
      return 0;
    }
  }
};
int main()
{
  int ch,x;
  stack s;
  char ch1='y';
  cout<<"\n Hello user";
  while(ch1=='y' || ch1=='Y')
{
  cout<<"\n please enter your choice";
  cout<<"\n 1:push";
  cout<<"\n 2: pop";
  cin>>ch;

  switch(ch)
  {
    case 1:
    cout<<"\n please enter the first element you want to add to thge stack ";
    cin>>x;
    s.push(x);
    break;
    case 2:
    cout<<"/n element deleted from the stack is :"<<s.pop();
    break;
  }
  cout<<"\n do you want to contine?";
  cin>>ch1;

}
return 0;

}
