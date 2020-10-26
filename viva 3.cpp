#include<iostream>
#include<stdio>
using namespace std;
class A
{
public:
  virtual void print()
  {
      cout<<"Hello";
  }
  void show()
  {
     cout<<"You are in BASE class"<<endl;
  }
};
class B:public A
{
   public:
   void print()
   {
      cout<<"Hello you are in DERIVED class"<<endl;
   }
   void show()
   {
      cout<<"Bye";
   }
};
int main()
{
  A *prt;
  B ob1;
  ptr=&ob1;
  ptr->print();
  ptr->show();
}
