#include<iostream>
#include<fstream>
using namespace std:
int main()
{ int poi;
ifstream f;
f.open("new.txt");
char c;
while(!f.eof())
{
f>>c;
cout<<c;
}
poi=f.tellg();
cout<<poi;
f.close();
return 0;
}
