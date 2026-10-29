#include <stdio.h>

int main (void)
{
    int num;

    do
    {
        printf("Please Enter a Positive Number: ");
        scanf("%d", &num);
    }
    while (num <= 0);

    printf("You Entered: %d\n", num);

    return 0;
}

