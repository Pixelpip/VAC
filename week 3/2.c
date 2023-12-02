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
