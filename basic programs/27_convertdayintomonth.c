#include <stdio.h>
int main()
{
    int total_days,month;
    printf("Enter number of days : ");
    scanf("%d",&total_days);

    month=total_days/30;
    printf("\n %d months\n",month);
    return 0;
}