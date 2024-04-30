#include<iostream>
using namespace std;

class circle{ 
    float radius;
    public:
    
   
    void area()
    {
        cout<<"Enter radius of circle:";
        cin>>radius;

        float area;
        area=3.14*radius*radius;
        cout<<"area of circle:"<<area;
    }
    void circumference()
    {
        float circumference;
        circumference=2*3.14*radius;
        cout<<"\ncircumference of circle:"<<circumference;
    }
};
int main()
{
    circle obj;
    obj.area();
    obj.circumference();


    return 0;

}