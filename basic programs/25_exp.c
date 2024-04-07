#include<stdio.h>
int main(){
    int emp1,emp2,emp3,emp4,emp5,sum;
    float avg;
    printf("Enter expenses:");
    scanf("%d%d%d%d%d",&emp1,&emp2,&emp3,&emp4,&emp5);
    sum=emp1+emp2+emp3+emp4+emp5;
    avg=sum/5;
    printf("The average expense is:%.2f",avg);
    return 0;
}