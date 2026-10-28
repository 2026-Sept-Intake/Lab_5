#include <stdio.h>
int main() 
{
    char status;

    for (int order = 1; order <= 5; order++)
    {
        printf("Enter order status of order %d: ", order);
        scanf(" %c", &status);

        if (status == 'I') // Order Invaild
       	{
            printf("Skipping order %d\n", order);
            continue; // Skip rest of the loop and move to next order
        } 
        else if (status == 'S') // Skip; stop processing further orders
       	{
            printf("Stopping at order %d\n", order);
            break; // Immediately exit the for loop
        } 
        else if (status == 'V') // Valid; process the order
       	{
            printf("Processing order %d\n", order);
        }
    }

    return 0;
    

}

