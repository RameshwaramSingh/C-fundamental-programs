#include <stdio.h>

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is a power of 2
    if (number > 0 && (number & (number - 1)) == 0) {
        printf("%d is an exact power of 2.\n", number);
    } else {
        printf("%d is not an exact power of 2.\n", number);
    }

    return 0;
}
