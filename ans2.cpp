#include <iostream>
using namespace std;

class bank
{
struct acc
{
string name;
string accno;
double bal;
struct acc *link;
}*root;

public:
    void init();
    void display();
    void deposit();
    void withdraw();
    void create();
};
void bank::init()
{
    root=NULL;

}
void bank::display(){
struct acc *p,*t;
string ac;
p=root;
if(p==NULL){
        cout<<"\n no account is created till now"<<endl;}
else{
cout<<"\n enter the account number: "<<endl;
cin>>ac;
t=p;
while(p!=NULL){
if(ac==t->accno)
{   cout<<"\nName of account holder: "<<p->name<<endl;
    cout<<"\nAccount Number: "<<p->accno<<endl;
    cout<<"\nBalance in the account: "<<p->bal<<endl;
    break;
    }
    else {cout<<"\n Account number doesn't exist!"<<endl;}
    p=p->link;}
}}
void bank::deposit()
{
    struct acc *p;
    string ac;
    p=root;
    if(p==NULL){cout<<"ERROR!! \n First create an account"<<endl;}
    else{
    cout<<"\nEnter the account: "<<endl;
    cin>>ac;
    while(p!=NULL){
        if(ac==p->accno){
            int x;
            cout<<"\nEnter the amount to be deposited: "<<endl;
            cin>>x;
            p->bal=(p->bal)+x;
            cout<<"\n Amount Deposited!!"<<endl;
            break;
        }
        else {cout<<"\nAccount not found!!"<<endl;}
    }}
}
void bank::withdraw(){
 struct acc *p;
    string ac;
    p=root;
    if(p==NULL){cout<<"ERROR!! \n First create an account"<<endl;}
    else{
    cout<<"\nEnter the account number: "<<endl;
    cin>>ac;
    while(p!=NULL){
        if(ac.compare(p->accno)){
            int x;

            cout<<"\nEnter the amount to be withdrawn: "<<endl;
            cin>>x;
            p->bal=(p->bal)-x;
            cout<<"\nAmount deducted!!"<<endl;
            break;
        }
        else {cout<<"\nAccount not found"<<endl;}
    }
}}
void bank::create(){
struct acc *p,*t;
p= new acc;
t=root;
cout<<"Enter account number: "<<endl;
cin>>p->accno;
cout<<"Enter account holder name: "<<endl;
cin>>p->name;
cout<<"Enter opening balance of the account: "<<endl;
cin>>p->bal;
if(root==NULL){
    root=p;
    p->link=NULL;
}
else
{
while(t->link!=NULL)
{
    t=t->link;
}
t->link=p;
p->link=NULL;
}
cout<<"\n Account created!!"<<endl;
}
int main()
{
    int y,z;
    bank b;
    b.init();
    do{
        cout<<" Enter your choice: \n1.display details \n2.deposite \n3.withdrawl \n4.create account"<<endl;
        cin>>y;
        switch(y)
        { case 1: b.display();
            break;
            case 2: b.deposit();
            break;
            case 3: b.withdraw();
            break;
            case 4: b.create();  break;
            default:
                cout<<"\nWrong Choice"<<endl;    }
        cout<<"Do you want to continue?"<<endl;
        cin>>z;
    }while(z==1);
    return 0;
    }