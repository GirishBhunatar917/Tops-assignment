#include <iostream>

using namespace std;

template<typename T>
void my_swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    cout << "Enter num1 : ";
    cin >> num1;
    cout << "Enter num2 : ";
    cin >> num2;

    cout << "\nBefore swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;


    my_swap(num1,num2);

    cout << "\nAfter swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
