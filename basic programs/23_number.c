#include<stdio.h>

int main()

{
    int num1,num2;

    printf("Enter num1 :");
    scanf("%d",&num1);
    printf("Enter num2 :");
    scanf("%d",&num2);

    //logic
    num1=num1*num2;
    num2=num1/num2;
    num1=num1/num2;

    printf("\nnew value after swap num1 :%d",num1);
    printf("\nnew value after swap num2 :%d",num2);
}