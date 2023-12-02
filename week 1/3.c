//Write a c-program to print prime numbers between two user defined intervals.

#include <stdio.h>

int main() {
    int start, end, i, j;
    int isPrime;

    printf("Enter the start of the interval: ");
    scanf("%d", &start);

    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        // Skip numbers less than 2 as they are not prime
        if (i < 2)
            continue;

        isPrime = 1; // Assume i is prime

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // i is not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d\n", i);
        }
    }

    return 0;
}
