#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, compoundInterest;


    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);


    amount = principal * pow(1 + (rate / 100), time);

    
    compoundInterest = amount - principal;

    printf("Amount after %.2f years: %.2f\n", time, amount);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
