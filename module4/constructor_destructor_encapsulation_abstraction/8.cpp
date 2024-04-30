#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int roll_no;
    int marks;


    student(int roll_no,int marks,string  name)
    { 
        this->roll_no=roll_no;
        this->marks=marks;
        this->name=name;

        
    }

    
};

class address{
    public:
    string city;
    student *ref;

    address(string city,student *ref){
        this->city=city;
        this->ref=ref;
        
    
        if(ref->marks>80)
        {
            cout<<"A grade";
        } else if(ref->marks>70)
        {
            cout<<"B grade";
        }else
        {
            cout<<"c grade";
        }
        cout<<"\ncity is "<<city;
    }

    




};

int main()
{
    student s(102,98,"girish");
    address a("ahemdabad",&s);
    return 0;

}