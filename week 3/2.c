//If a number is input through the keyboard, write a
//program to print a new number by adding one to each of its digits.
//For example if the number that is input is 12391 then
//the output should be displayed as 23402.


#include <stdio.h>

int main()
{
    int num, o, new = 0, place = 1;


    printf("Enter an integer: ");
    scanf("%d", &num);

  
    o = num;

 
    while (num != 0)
    {
        int digit = num % 10;

        new += (digit + 1) * place;

        place *= 10;

   
        num /= 10;
    }

    printf("Original Number: %d\n", o);
    printf("New Number: %d\n", new);

    return 0;
}
