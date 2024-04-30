#include<iostream>
using namespace std;

class A {
    int a, b;
public:
    void get() {
        cout << "Enter value for num1 and num2: ";
        cin >> a >> b;
    }
    friend void max_num(A);
};

void max_num(A a1) {
    if (a1.a > a1.b)
        cout << "Maximum number is: " << a1.a;
    else
        cout << "Maximum number is: " << a1.b;
}

int main() {
    A obj;
    obj.get();
    max_num(obj); 
    return 0;
}
