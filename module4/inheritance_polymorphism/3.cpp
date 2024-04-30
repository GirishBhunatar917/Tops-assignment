#include<iostream>
using namespace std;

class person{
    string name;
    int age;
    public:
    void get1(){
        cout<<"\nEnter student name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;

        

    }
    void display1()
    {
        cout<<"\nstudent name is:"<<name<<"\nstudent age is:"<<age;
    }

};
class student{
    float per;
    public:
    void get2()
    {
        cout<<"\nEnter student percantage:";
        cin>>per;

    }
    void display2()
    {
        cout<<"\nstudent percantage is:"<<per;
    }



    
};
class teacher:public person,public student{
    float salary;
    public:
    void get3()
    {
        cout<<"\nEnter the teachers salary:";
        cin>>salary;
    }
    void display3()
    {
        cout<<"\ntechears salary is:"<<salary;
    }

};

int main()
{
    teacher obj;
    cout<<"\n-------------------\n";
    cout<<"\nstudent information";
    cout<<"\n-------------------\n";
    obj.get1();
    obj.get2();
    obj.display1();
    obj.display2();
    cout<<"\n-------------------\n";
    cout<<"\nTeacher information";
    cout<<"\n-------------------\n";
    obj.get3();
    obj.display3();
    return 0;
}