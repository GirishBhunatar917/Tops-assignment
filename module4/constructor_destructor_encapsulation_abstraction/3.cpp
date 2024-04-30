#include<iostream>
using namespace std;

class car{
    string company;
    string model;
    int year;
    public:
    void get()
    {
        cout<<"Enter company name:";
        cin>>company;
        cout<<"Enter model name:";
        cin>>model;
        cout<<"Enter year:";
        cin>>year;

    }
    void display(){
        cout<<"\ncompany is:"<<company<<"\nmodel is:"<<model<<"\nyear is:"<<year;
    }
};

int main()
{
    car obj;
    obj.get();
    obj.display();
    
    return 0;
}