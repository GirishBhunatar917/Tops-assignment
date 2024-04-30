#include<iostream>
using namespace std;

class A{
    private:
    int roll_no;
    public:
    string name;
    protected:
    string city;
};
class B:public A{
    public:
    void access()
    {
        //cout<<"private"<<roll_no<<endl;
        cout<<"\npublic :Enter name:"<<name;
        cin>>name;
        cout<<"\nprotected:Enter city:"<<city;
        cin>>city;

    }
    void display()
    {
        cout<<"\nname is:"<<name<<"\ncity is:"<<city;
    }

};

int main()
{
    B obj;
    obj.access();
    obj.display();
    return 0;
}
