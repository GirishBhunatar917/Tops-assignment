#include<stdio.h>

int main()
{
    int num1,num2;

    printf("Enter value of num1 :");
    scanf("%d",&num1);
    printf("Enter value of num2 :");
    scanf("%d",&num2);

    //logic
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("num1 :%d\nnum2 :%d",num1,num2);


    return 0;
}