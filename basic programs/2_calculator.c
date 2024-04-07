#include<stdio.h>

int main()
{
    //addition,substraction,multiplication,division and modulo
    int num1,num2,addition,substraction,multiplication,division,modulo;
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);

    //logic
    addition=num1+num2;
    substraction=num1-num2;
    multiplication=num1*num2;
    division=num1/num2;
    modulo=num1%num2;

    printf("\naddition of %d and %d is %d",num1,num2,addition);
    printf("\nsubstraction of %d and %d is %d",num1,num2,substraction);
    printf("\nmultiplication of %d and %d is %d",num1,num2,multiplication);
    printf("\ndivision of %d and %d is %d",num1,num2,division);
    printf("\nmodulo of %d and %d is %d",num1,num2,modulo);
    return 0;
}