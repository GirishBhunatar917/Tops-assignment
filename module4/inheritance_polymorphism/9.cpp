#include<iostream>
using namespace std;

class addition{
    int array[3];
    int i;

    public:
    void get()
    {
        cout<<"Enter 3 values:";
        for(i=0;i<3;i++)
        {
            cin>>array[i];
        }
    }
    void display()
    {
        cout<<"values are:";
        for(i=0;i<3;i++)
        {
            cout<<array[i]<<"\t";
        }
    }

    addition operator +(addition obj)
    {
        int result[3];
        int i;
        for(i=0;i<3;i++)
        {
            result[i]=array[i]+obj.array[i];
        }
        cout<<"\nresult array is:\n";
        for(i=0;i<3;i++)
        {
            cout<<result[i];
        }

    }
};
int main(){
    addition obj1,obj2;
    cout<<"\n-----------------\n";
    cout<<"\n---------obj1--------\n";
    cout<<"\n-----------------\n";
    obj1.get();
    obj1.display();
    cout<<"\n-----------------\n";
    cout<<"\n-------obj2------------\n";\
    cout<<"\n-----------------\n";
    obj2.get();
    obj2.display();
    obj1+obj2;
    return 0;

}
