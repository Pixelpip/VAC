//Write a C program to find the largest number from an array.

#include <stdio.h>

int main() {
    int array[100]; // Assuming array size is less than or equal to 100
    int size, i;
    int largest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Assume the first element as the largest initially
    largest = array[0];

    // Traverse the array to find the largest number
    for (i = 1; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    printf("The largest number in the array is: %d\n", largest);

    return 0;
}
