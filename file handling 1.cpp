#include<iostream>
#include<fstream>
using namespace std;
int main()
{
fstream file1,file2;
file1.open("Sample.txt",ios::out);
file1<<"ABCD";
while(file1)
{file1.get(ch);
cout.put(ch);
}
file1.seekg(o);
file2.open("file2.txt",ios::out);
cout<<"First file contents copied to the second file";
file1.close();
file2.close();
getch();
}
