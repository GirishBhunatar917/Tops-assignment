#include<iostream>
using namespace std;

class employee{
    int id;
    string name;
    float salary;

    public:
    employee(){

        cout<<"Enter your id:";
        cin>>id;
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter your salary:";
        cin>>salary;

    
    
    }
    void calculatesalary(double performance)
    {
        salary=salary*performance;

    }

    void display()
    {
        cout<<"\nyour id:"<<id<<"\nyour name :"<<name<<"\nyour salary:"<<salary;
    }
    

};

int main()
{

    employee obj;
    obj.display();
    obj.calculatesalary(1.1);
    cout<<"\n--------------------------------------\n";
    cout<<"Employee salary after perfomance appraisal:";
    cout<<"\n--------------------------------------\n";
    obj.display();
    return 0;

}