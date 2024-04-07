#include <stdio.h>

int main() {
    char countryAbbreviation[3]; 
    printf("Enter the country name: ");
    scanf("%3s", countryAbbreviation);
    
    printf("Abbreviated country name: %s\n", countryAbbreviation);
    
    return 0;
}
