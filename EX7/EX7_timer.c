#include <stdio.h>
#include <unistd.h> // Required for the sleep() function

int main(void)
{
    int n = 5;

    while (n >= 0) {
        printf("%d\n", n);
        sleep(1); // Pauses program execution for 1 second
        n--;
    }

    printf("Countdown complete.\n");
    return 0;
}
