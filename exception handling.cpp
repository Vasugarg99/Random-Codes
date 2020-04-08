#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter the number you want to be divided"<<endl;
cin>>a;
cout<<"Enter the divisor"<<endl;
cin>>b;
try
{ if(b!=0)
{c=a/b;
cout<<c;
}
else{
throw b;
}
} catch(int i)
{cout<<"caught an exception:"<<i;
}
return 0;
}
