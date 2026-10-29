#include <stdio.h>

int main (void)
{
    char sts;
    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("ENTER THE STATUS OF ORDER %d (V,I,S): ", i);
        scanf(" %c", &sts);

        if (sts == 'V')
        {
            printf("Processing order %d\n", i);
        }
        else if (sts == 'I')
        {
            printf("Skipping order %d\n", i);
            continue;
        }
        else if (sts == 'S')
        {
            printf("Stopping at order %d\n", i);
            break;
        }
        else
        {
            printf("INVALID STATUS !!!\n");
        }
    }

    return 0;
}

