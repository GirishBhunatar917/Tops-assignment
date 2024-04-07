#include <stdio.h>
int main()
{
    int total_days,years,months;
    printf("Enter number of years : ");
    scanf("%d",&years);

    months=years*12;
    total_days=years*365;
    
    printf("\n total months :%d \n total_days :%d \n",months,total_days);
    return 0;
}