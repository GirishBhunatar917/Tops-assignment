#include<iostream>
using namespace std;
class bank{
    string name;
    double ac_number;
    string ac_type;
    float balance;
    public:
    int choice;

    public :
    void get()
{
   cout<<"Enter your name\n"<<endl;
    cin>>name;
    cout<<"Enter your account number\n"<<endl;
    cin>>ac_number;
    cout<<"Enter your account type\n"<<endl;
    cin>>ac_type;
    cout<<"Enter your account balance\n"<<endl;
    cin>>balance;
    cout<<"ENter 1 for deposite and 2 for withdrawal:"<<endl;
    cin>>choice;
}

void deposite()
{
    float dep_amt;
    cout<<"Enter your deposite amount :";
    cin>>dep_amt;
    balance=dep_amt+balance;
}

void withdraw()
{
    float withdraw_amt;
    cout<<"Enter your withdraw amount :";
    cin>>withdraw_amt;
    if(withdraw_amt>balance)
    {
        cout<<"can't withdraw";
    }
    else
    {
    balance=balance-withdraw_amt;
    }
}
void display()
{
    cout<<"\nyour name is\n"<<name<<"\nyour remaining balance is\n"<<balance;
}
};
int main()
{    
    bank obj;
    obj.get();
    

    switch(obj.choice)
    {
case 1:
    obj.deposite();
    break;
    case 2:
    obj.withdraw();
    break;
    default:
    cout<<"invalid choice";
    break;

    }
    obj.display();


    

}
