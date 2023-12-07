//Write a program to find the factorial value of any number  entered through the keyboard.


#include<stdio.h>
void main(){
    int fac,res=1;
    printf("enter the number to find factorial");
    scanf("%d",&fac);
    for(int i=1;i<=fac;i++){
        res=res*(i);
    }
    printf("%d",res);
}