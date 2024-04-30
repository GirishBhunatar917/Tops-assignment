#include<iostream>
using namespace std;

class triangle{
    float side1,side2,side3;
    public:

    void get()
    {
        cout<<"Enter the side1:";
        cin>>side1;
        cout<<"Enter the side2:";
        cin>>side2;
        cout<<"Enter the side3:";
        cin>>side3;
    }
    void equilateral(){
    if(side1==side2 && side2==side3){
        cout<<"this is equilateral triangle";
    } else if(side1==side2 || side2==side3){
        cout<<"this is isosceles";

    } else{
        cout<<"this is scalene";
    }  
    }
    

};

int main()
{
    triangle obj;
    obj.get();
    obj.equilateral();
}