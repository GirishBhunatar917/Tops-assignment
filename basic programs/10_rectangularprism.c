#include<stdio.h>
int main()
{

    int area,lenght,width,height;
    printf("Enter lenght:");
    scanf("%d",&lenght);
    printf("Enter width:");
    scanf("%d",&width);
    printf("Enter height:");
    scanf("%d",&height);

    area=2*(width*lenght+height*lenght+height*width);
    printf("area of rectangularprism =%d",area);
    return 0;
}