// Write a program to print the multiplication table of the n
//umber entered by the user. The table should get displayed in the following form.
//29 * 1 = 29 29 * 2 = 58 ...         29*10=100


#include <stdio.h>

int main() {
    int number, i;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &number);

    printf("Multiplication table of %d:\n", number);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
