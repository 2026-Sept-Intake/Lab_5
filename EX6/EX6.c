#include <stdio.h>
int main(void)
{
    char status;
    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("enter the status of the orders I,S,V :\n");
        scanf(" %c", &status);

        if (status == 'I')
        {
            printf("Skipping order %d\n", i);
            continue;
        }
        else if (status == 'S')
        {
            printf("Stopping at order %d\n", i);
            break;
        }
        else if (status == 'V')
        {
            printf("Processing order %d\n", i);
        }
        else
        {
            printf("Invalid order status \n");
        }
    }

    return 0;
}

