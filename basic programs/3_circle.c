#include<stdio.h>

int main()
{
    
    float pi=3.14,area,Circumference;int r;

    printf("Enter r:");
    scanf("%d",&r);


    //logic
    area=pi*r*r;
    Circumference=2*pi*r;


    printf("\narea of circle : %.2f",area);
    printf("\nCircumference of circle : %.2f",Circumference);
    
    return 0;
}