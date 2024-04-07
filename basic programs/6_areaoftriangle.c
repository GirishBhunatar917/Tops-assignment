#include<stdio.h>
int main()
{

    int area,height,base;
    printf("Enter height:");
    scanf("%d",&height);
    printf("Enter base:");
    scanf("%d",&base);
    area=0.5*height*base;
    printf("area of triangle=%d",area);
    return 0;
}