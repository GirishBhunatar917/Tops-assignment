#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"\nconstructor from class A";
    }

};
class B:public A{
    public:
    B(){
        cout<<"\nconstructor from class B";
    }

};
class C:public B{
    public:
    C(){
        cout<<"\nconstructor from class C";
    }

};

int main()
{
    C obj;
    return 0;
}