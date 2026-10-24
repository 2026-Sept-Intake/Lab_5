#include <stdio.h>

int main(void)
{
    char status;
    int n;

   
    printf("Enter the status of 5 orders: ");

    for (n = 1; n <= 5; n++) {
        scanf(" %c,", &status); // Reads the next input character 

        if (status == 'I') {//I for Invalid
            printf("Skipping order %d\n", n);
            continue;
        } else if (status == 'S') {//S for Skip
            printf("Stopping at order %d\n", n);
            break;
        } else if (status == 'V') {//V for Valid
            printf("Processing order %d\n", n);
        }
    }

    return 0;
}
