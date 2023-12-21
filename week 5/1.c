//Write a program to sort a set of names stored in an array in alphabetical order.


#include<stdio.h>
#include<string.h>
void main(){
    char stg[20][50];//string with max input 20 and length of each at 50 characters max 
    printf("enter the names:");
    for(int i=0;i<20;i++){
        printf("enter the name %d:",(i+1));
        scanf("%s",stg[i]);
    }
    char temp[20][50];
    for(int i=0;i<20;i++){
        for(int j=0;j<50;j++){
            if(stg[i][j]<stg[i+1][j]){
                temp[i][j]=stg[i][j];
                stg[i][j]=stg[i+1][j];
                stg[i+1][j]=temp[i][j];
                
            }
            printf("before:%s after:%s",stg[i],stg[i+1]);
            printf("\n");

        }
    }




}