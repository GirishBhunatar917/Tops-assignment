#include <iostream>

using namespace std;

class Rectangle {
protected:
    float length;
    float width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float area() {
        return length * width;
    }
};

int main() {
    float length, width;

    
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    Rectangle rect(length, width);

    cout << "Area of rectangle: " << rect.area() << endl;

    return 0;
}
