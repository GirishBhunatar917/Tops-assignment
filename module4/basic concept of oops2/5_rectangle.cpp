#include<iostream>
using namespace std;

class rectangle{ 
    float l,w;
    public:
    
   
    void area()
    {
        cout<<"Enter length of rectangle:";
        cin>>l;
        cout<<"Enter width of rectangle:";
        cin>>w;

        float area;
        area=l*w;
        cout<<"area of rectangle:"<<area;
    }
    void perimeter()
    {
        float perimeter;
        perimeter=l*w*2;
        cout<<"\nperimeter of rectangle:"<<perimeter;
    }
};
int main()
{
    rectangle obj;
    obj.area();
    obj.perimeter();


    return 0;

}