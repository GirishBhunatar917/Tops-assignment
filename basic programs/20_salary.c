#include <stdio.h>

int main() {
    float salary, remainingSalary,Premium, loanInstallment;

    printf("Enter monthly salary: ");
    scanf("%f", &salary);
    Premium = 0.1 * salary;

    remainingSalary = salary - Premium;
    loanInstallment = 0.1 * remainingSalary;
    remainingSalary -= loanInstallment;

    printf("Salary after deducting insurance premium: %.2f\n", remainingSalary + Premium);
    printf("Insurance Premium: %.2f\n",Premium);
    printf("Loan Installment: %.2f\n", loanInstallment);
    printf("Remaining salary after deducting loan installment: %.2f\n", remainingSalary);

    return 0;
}
