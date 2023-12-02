//A number is entered through the keyboard. 
//Write a program to obtain the reversed number without using any builtin functions.
//Determine  whether the original and reversed numbers are equal or not.

#include <stdio.h>

int main() {
    int n, o, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);

    o = n; 

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (o == rev) {
        printf("The reversed number is same as the original number: %d\n", o);
    } else {
        printf("The reversed number is not the same as the original number.\nOriginal number: %d\nReversed number: %d\n", o, rev);
    }

    return 0;
}
