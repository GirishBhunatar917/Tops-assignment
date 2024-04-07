#include<stdio.h>

int main()

{
    int students,apples=5,total;
    printf("Enter number of students :");
    scanf("%d",&students);
    total= students*apples;

    printf("%d apples required for %d students ",total,students);

    return 0;
}