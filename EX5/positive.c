#include <stdio.h>
int main() 
{
    int number;

    // This program is to prompt until a positive number is entered
    do {
        printf("Please enter a positive number: ");
        scanf("%d", &number);
    } while (number <= 0);

    
    printf("You entered: %d\n", number);

    return 0;
}
