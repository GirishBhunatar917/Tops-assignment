#include<iostream>
using namespace std;

class bankaccount{
    public:
    int choice;
    int ac_number;
    float balance;
    public:
    void get(){

        cout<<"\nEnter your account number:";
        cin>>ac_number;
        cout<<"\nEnter your balance:";
        cin>>balance;
        cout<<"\nEnter 1 for deposite 2 for withdraw";
        cin>>choice;

    }
    void deposite()
    {
        float dep_amount;

        cout<<"\nEnter the amount you want to deposite:";
        cin>>dep_amount;

        balance=balance+dep_amount;

    }
    void withdraw()
    {
        float with_amount;

        cout<<"\nEnter the amount you want to withdraw:";
        cin>>with_amount;

        balance=balance-with_amount;
        
    }
    void display()
    {
        cout<<"\nyour account number is:"<<ac_number<<"\nyour remaining balance is:"<<balance;
    }
};

int main()
{
    bankaccount obj;
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

        
    }
    obj.display();
    return 0;
}
