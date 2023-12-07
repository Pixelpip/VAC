#include<stdio.h>
void main(){
    int r;
    printf("enter the number of rows you would like to print:");
    scanf("%d",&r);
    int space=1;
    int ASCII=65;
    for(int i=0;i<r;i++){
        if(r>=1){
            if(r)
          printf("%c ",ASCII);
          ASCII++;
        }
    }
}