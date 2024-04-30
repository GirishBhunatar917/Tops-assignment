#include<iostream>
using namespace std;

class person{
    public:
    string name,country;
    int age;
    
    
    void get()
    {
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter your age:";
        cin>>age;
        cout<<"Enter your country name:";
        cin>>country;

        
    }
    void display(){
        cout<<"your name is:"<<name<<"\nyour age is:"<<age<<"\nyour country is :"<<country;
    }



};
    
int main()
{
    person obj;
    obj.get();
    obj.display();
    return 0;
}