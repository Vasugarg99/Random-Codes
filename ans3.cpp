#include<iostream>
#include<conio>
using namespace std;
class TollBooth
{
	unsigned int TotalCars;
	double TotalAmount;
	public:
		TollBooth()
		{
			TotalCars=0;
			TotalAmount=0.0;
		}
		void payingCar()
		{
		    TotalCars++;
		    TotalAmount+=0.50;
		}
		void nopayCar()
		{
		    TotalCars++;
		}
		void Display()
		{
		     cout<<“\nThe Total No of passing cars: “<<TotalCars;
             cout<<“\nThe Total Amount Collected: “<<TotalAmount;
        }
};
void main()
{
	TollBooth Obj;
	int c;
	char ch;
	cin>>c;
	while((c=getche())!=27)
		{
			switch(c)
			{
				case 1:
				Obj.PayingCar();
				break;
				case 2:
				Obj.NoPayCar();
				break;
				default:
				cout<<“Incorect input: “;
				break;
			}
		}
	Obj.Display();
}
