#include <stdio.h>

int main()
 {

    
    float salary, premium,premium_Rate=0.05;

    printf("Enter the person's salary: ");
    scanf("%f", &salary);
    

    premium = salary * premium_Rate;


    printf("The insurance premium is: %.2f\n", premium);

    return 0;
}
