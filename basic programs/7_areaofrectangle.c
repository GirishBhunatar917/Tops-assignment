#include<stdio.h>
int main()
{

    int area,lenght,width;
    printf("Enter lenght:");
    scanf("%d",&lenght);
    printf("Enter width:");
    scanf("%d",&width);
    area=lenght*width;
    printf("area of rectangle=%d",area);
    return 0;
}