#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum: %d\n", sum);

    if (sum > 10000) {
        printf("Size of the sum is large.\n");
    } else if (sum > 1000) {
        printf("Size of the sum is medium.\n");
    } else {
        printf("Size of the sum is small.\n");
    }

    return 0;
}
