//Display pyramid of prime numbers between user given range. 


#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime number pyramid between %d and %d:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            for (int j = start; j <= i; j++) {
                if (isPrime(j)) {
                    printf("%d ", j);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
