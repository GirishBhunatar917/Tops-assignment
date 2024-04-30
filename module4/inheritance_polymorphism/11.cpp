#include<iostream>
using namespace std;

class Area{
    public:
    int l, b, h;
    float r;
public:
    void area(double l,double b)
    {
        cout << "Area of Rectangle: " << l * b << endl;
    }

    void area(int b,int h)
    {
        cout << "Area of Triangle: " << 0.5 * b * h << endl;
    }

    void area(float r)
    {
        cout << "Area of Circle: " << 3.14 * r * r << endl;
    }
};

int main()
{
    Area obj;

    cout << "Enter length of rectangle: ";
    cin >> obj.l;
    cout << "Enter breadth of rectangle: ";
    cin >> obj.b;
    obj.area(obj.l, obj.b);

    cout << "Enter base of triangle: ";
    cin >> obj.b;
    cout << "Enter height of triangle: ";
    cin >> obj.h;
    obj.area(obj.b, obj.h);

    cout << "Enter radius of circle: ";
    cin >> obj.r;
    obj.area(obj.r);

    return 0;
}
