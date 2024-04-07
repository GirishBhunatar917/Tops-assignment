#include <stdio.h>
int main()
{
    int total_days,years;
    printf("Enter number of years : ");
    scanf("%d",&years);

    total_days=years*365;
    
    printf("\n total_days :%d \n",total_days);
    
    printf("Enter number of days : ");
    scanf("%d",&total_days);

    years=total_days/365;
    
    printf("\n total years :%d \n",years);
    return 0;
}