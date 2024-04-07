#include<stdio.h>

 void main()

{
    char fname[100],mname[100],lname[100];

    printf("Enter the full school name :");
    scanf("%s %s %s",fname,mname,lname);

    printf("abbreviated school name is %c. %c. %s",fname[0],mname[0],lname);

    // return 0;

}