#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main() {
    char sentence[MAX_LENGTH], result[MAX_LENGTH];
    int j = 0;

    printf("Enter a sentence: ");
     scanf("%99[^\n]",sentence);

    // Remove vowels from the sentence
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (!(sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' ||
              sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U')) {
            result[j++] = sentence[i];
        }
    }
    result[j] = '\0'; // Null-terminate the result string

    printf("Result after removing vowels: %s\n", result);

    return 0;
}
