#include<iostream>
using namespace std;


inline int mul(int m ,int n){
    return m*n;
}
inline int cube( int n){
    return n*n*n;
}
int main()
{
    int n1,n2;
    cout<<"Enter first value:";
    cin>>n1;
    cout<<"Enter second value:";
    cin>>n2;

    cout<<"multiplication of two value is:"<<mul(n1,n2);
    cout<<"\ncube of  first value is:"<<cube(n1);
    cout<<"\ncube of  second value is:"<<cube(n2);
    return 0;
}