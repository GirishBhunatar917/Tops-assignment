#include <stdio.h>

int main() {
    char names[5][50];
    float salaries[5],totalSalary = 0,averageSalary;
    int i;

    printf("Enter the names and salaries of 5 employees:\n");
    for(i = 1; i <6; i++) {
        printf("Employee %d name: ", i);
        scanf("%s", names[i]);
        printf("Employee %d salary: ", i);
        scanf("%f", &salaries[i]);
        totalSalary= totalSalary+salaries[i];
    }

    averageSalary = totalSalary / 5;

    printf("\nTotal salary: %.2f\n", totalSalary);
    printf("Average salary: %.2f\n", averageSalary);

    return 0;
}
