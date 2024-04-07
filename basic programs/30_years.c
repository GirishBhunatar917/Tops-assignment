#include<stdio.h>
int main()
{

    float years,days;
    printf("Enter years:");
    scanf("%f",&years); 
    days=years*365;
    printf("total days :%.2f",days);

    printf("\nEnter days:");
    scanf("%f",&days); 
    years=days/365;
    printf("total years :%.1f",years);

    return 0;
}