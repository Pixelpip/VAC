#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int l;
    l=number%10;
    while(number>=10){
        number=number/10;
    }
    int sum = number+l;
    printf("The sum of first digit (%d) and last digit (%d) is: %d\n", number, l,sum);
    return 0;
}
