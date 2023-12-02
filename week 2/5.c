//If a number is input through the keyboard, write a  program to calculate the sum of its digits. 
//The number can have any number of digits.

#include <stdio.h>
int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    int s=number;
    int digitSum = 0;
    while (number != 0) {
        int digit = number % 10;
        digitSum += digit;
        number /= 10;
    }
    printf("The sum of digits in %d is: %d\n", s, digitSum);

    return 0;
}
