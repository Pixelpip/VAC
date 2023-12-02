//Print the below given 8 patterns. Number of rows is given by user through keyboard. Use only loops
//this one prints all kinds of pattern and does not ask for user choice for which patttern to print 

#include <stdio.h>
int main() {
    int row;
    

    printf("Enter the number of rows: ");
    scanf("%d", &row);
           printf("1) Right Half Pyramid\n");

            for (int i = 1; i <= row; i++) {
                for (int j = 1; j <= i; j++) {
                    printf("* ");
                }
                printf("\n");
            }

        
           printf("2) Left Half Pyramid\n");

        
            for (int i = 1; i <= row; i++) {
                for (int j = row; j > i; j--) {
                    printf("  ");
                }
                for (int j = 1; j <= i; j++) {
                    printf("* ");
                }
                printf("\n");
            }
           
        printf("3) Full Pyramid\n");
       
            for (int i = 1; i <= row; i++) {
                for (int j = row; j > i; j--) {
                    printf("  ");
                }
                for (int j = 1; j <= 2 * i - 1; j++) {
                    printf("* ");
                }
                printf("\n");
            }
        
         printf(" 4) Inverted Right Half Pyramid\n");
        
            for (int i = row; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    printf("* ");
                }
                printf("\n");
            }
        
        printf(" 5)Inverted Left Half Pyramid\n");
        
            
            for (int i = row; i >= 1; i--) {
                for (int j = row; j > i; j--) {
                    printf("  ");
                }
                for (int j = 1; j <= i; j++) {
                    printf("* ");
                }
                printf("\n");
            }
           
       printf("6) Inverted Pyramid\n");   
            for(int i=1;i<=row;i++){
                for(int j=i;j>=1;j--){
                    printf(" ");
                }
                for(int j=row;j>=i;j--){
                    printf("* ");
                }
                printf("\n");
            }
            
        printf("7) Rhombus\n");
        
        for (int i = 1; i <= row; i++) {
                 for(int j=1;j<=i;j++){
                    printf(" ");
                }
                for (int j = 1; j <= row; j++) {
                    printf("*");
                }
               
                printf("\n");
            }

        printf("8)Diamond\n");
           
            for (int i = 1; i <= row; i++) {
                for (int j = row - i; j >= 1; j--) {
                    printf(" ");
                }
                for (int j = 1; j <= 2 * i - 1; j++) {
                    printf("*");
                }
                printf("\n");
            }
            for (int i = row - 1; i >= 1; i--) {
                for (int j = row - i; j >= 1; j--) {
                    printf(" ");
                }
                for (int j = 1; j <= 2 * i - 1; j++) {
                    printf("*");
                }
                printf("\n");
            }
            

    return 0;
    }

   