#include <stdio.h>

int main() {
    int num;
    int pos=0, neg=0, z=0;
    char ch;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            pos++;
        } else if (num< 0) {
            neg++;
        } else {
            z++;
        }

        printf("Do you want to enter another number? (Y/N): ");
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');

    printf("\nCounts:\n");
    printf("Positive numbers entered: %d\n", pos);
    printf("Negative numbers entered: %d\n", neg);
    printf("Zeros entered: %d\n", z);

    return 0;
}
