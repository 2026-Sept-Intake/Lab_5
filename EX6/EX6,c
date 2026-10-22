#include <stdio.h>

int main() {
    char status;

    for (int i = 1; i <= 5; i++) {
        printf("Enter status of order %d (V/I/S): ", i);
        scanf(" %c", &status);

        if (status == 'I') {
            printf("Skipping order %d\n", i);
            continue;
        }

        if (status == 'S') {
            printf("Stopping at order %d\n", i);
            break;
        }

        printf("Processing order %d\n", i);
    }

    return 0;
}
