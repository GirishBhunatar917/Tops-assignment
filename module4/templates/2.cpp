#include <iostream>
using namespace std;
template <typename T>
void array(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[100];
    int i,n;

    cout<<"Enter how mant elemants you want:";
    cin>>n;

    for ( i = 0; i < n; i++) {
        cout<<"Enter array elements:";
        cin>>arr[i];
    }

    array(arr, n);
    std::cout << "Sorted integer array:";
    for (int i = 0; i < n; i++) {
        cout << " " << arr[i];
    }

    return 0;
}
