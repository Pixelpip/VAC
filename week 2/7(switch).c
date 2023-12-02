////Print the below given 8 patterns. Number of rows is given by user through keyboard. Use only loops
//this one uses switch case and asks for user input for printing which kind of pattern



#include <stdio.h>

int main() {
    int choice, row;

    printf("Enter a number between 1 and 8 to choose the pattern:\n");
    printf("1) Right Half Pyramid\n2) Left Half Pyramid\n3) Full Pyramid\n4) Inverted Right Half Pyramid\n5) Inverted Left Half Pyramid\n6) Inverted Pyramid\n7) Rhombus\n8) Diamond\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    switch (choice) {
        case 1:
            for (int i = 1; i <= row; i++) {
                for (int j = 1; j <= i; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 2:
            for (int i = 1; i <= row; i++) {
                for (int j = row; j > i; j--) {
                    printf("  ");
                }
                for (int j = 1; j <= i; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 3:
            for (int i = 1; i <= row; i++) {
                for (int j = row; j > i; j--) {
                    printf("  ");
                }
                for (int j = 1; j <= 2 * i - 1; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 4:
            for (int i = row; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 5:
            for (int i = row; i >= 1; i--) {
                for (int j = row; j > i; j--) {
                    printf("  ");
                }
                for (int j = 1; j <= i; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 6:
            for (int i = row; i >= 1; i--) {
                for (int j = row; j > i; j--) {
                    printf("  ");
                }
                for (int j = 1; j <= 2 * i - 1; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 7:
            for (int i = 1; i <= row; i++) {
                for (int j = row - i; j >= 1; j--) {
                    printf(" ");
                }
                for (int j = 1; j <= row; j++) {
                    printf("*");
                }
                printf("\n");
            }
            break;

        case 8:
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
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
