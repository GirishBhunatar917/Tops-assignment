#include<stdio.h>

int main()

{
    int monthlysalary,annualsalary;

    printf("Enter monthlysalary :");
    scanf("%d",&monthlysalary);

    annualsalary=monthlysalary*12;

    printf("person's annual salary is :%d",annualsalary);
}