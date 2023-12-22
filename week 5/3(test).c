//Find Frequency of each character in a string. String is given by user.

#include <stdio.h>
#define MAX_LENGTH 100

int main() {
    char inputString[MAX_LENGTH];
    int frequency[256] = {0}; // Assuming ASCII characters

    printf("Enter a string: ");
    scanf("%255[^\n]",inputString);

    // Counting frequency of characters in the string
    for (int i = 0; inputString[i] != '\0'; i++) {
        int asciiValue = (int)inputString[i];
        frequency[asciiValue]++;
        
    }

    // Displaying frequency of characters
    printf("Frequency of each character in the string:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] != 0) {
            printf("'%c' : %d times\n", (char)i, frequency[i]);
        }
    }

    return 0;
}
