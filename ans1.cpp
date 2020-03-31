#include <iostream>
using namespace std;
class book
{
    int x;
    public:
        book()
        {
            x=0;
            cout<<"\nDefaut constructer called"<<endl;
            x++;
        }
        book(int i)
        {
            cout<<"\nParameterised constructer called"<<endl;
            x++;
        }
        book(book &s)
        {
            cout<<"\nCopy constucter called"<<endl;
            x++;
        }
        ~book()
        {
            cout<<"\nDestructer called"<<endl;
            x--;
        }
        void show()
        {
            cout<<"\nNumber of living objects are: "<<x<<endl;
        }
};
int main()
{
    book b1,b2,b3(12),b4(b2);
    b1.show();
    return 0;
}
