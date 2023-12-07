#include <stdio.h>

#define MAX_LENGTH 1000

void remove_the(char *line) {
    char output[MAX_LENGTH];
    int i = 0, j = 0;
    int found = 0;

    // Read input character by character until newline or maximum length
    char ch = getchar();
    while (ch != '\n' && ch != EOF && i < MAX_LENGTH - 1) {
        line[i++] = ch;
        ch = getchar();
    }
    line[i] = '\0'; // Add null terminator

    i = 0;
    while (line[i] != '\0') {
        int isThe = 1;

        // Check for 'the'
        if ((line[i] == 't' || line[i] == 'T') && line[i + 1] == 'h' && line[i + 2] == 'e' &&
            (line[i + 3] == ' ' || line[i + 3] == '\0')) {
            found = 1;
            i += 3; // Skip 'the'
        } else {
            output[j] = line[i];
            j++;
        }
        i++;
    }
    output[j] = '\0';

    // If 'the' was found, print the modified line
    if (found) {
        printf("Line with 'the' removed: %s\n", output);
    } else {
        printf("No occurrence of 'the' found in the line.\n");
    }
}

int main() {
    char line[MAX_LENGTH];

    printf("Enter a line of text: ");

    // Remove 'the' from the line
    remove_the(line);

    return 0;
}
