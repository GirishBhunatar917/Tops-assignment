#include<iostream>
using namespace std;

class my_swap{
    public:
    int num1,num2;
    public:
    void get()
    {
        cout<<"Enter value for num1:";
        cin>>num1;
        cout<<"Enter value for num2:";
        cin>>num2;
        
    }

    friend void swap(my_swap&);

};

void swap(my_swap &obj){
    int temp = obj.num1;
    obj.num1 = obj.num2;
    obj.num2 = temp;
    cout<<"After swapping, num1: "<<obj.num1<<" num2: "<<obj.num2<<endl;
}

int main()
{
    my_swap obj;
    obj.get();
    swap(obj);
    return 0;
}
