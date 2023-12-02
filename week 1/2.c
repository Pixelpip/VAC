//Write a program to find x to the power y. Ask user to provide x and y values.
//Do not use any builtin functions.

#include<stdio.h>
void main(){
    int x,y;
    printf("enter the number:");
    scanf("%d",&x);
    printf("\nenter the power to which the number has to be raised:");
    scanf("%d",&y);
    int o=x;
    printf("\n%d raised to the power %d is:",x,y);
    for (int i = 1; i < y; i++){
        x=x*o;
    }
    printf("%d",x);
 

    
    
}