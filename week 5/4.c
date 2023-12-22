//Find Sum of elements in an array. Array is given by user.


#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size, sum = 0;


    //Array input
    printf("Enter the number of elements (maximum %d): ", MAX_SIZE);
    scanf("%d", &size);

    //check if array size is not zero
    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size entered or array size exceeds the limit.\n");
        return 1;
    }

    //array elements input and sum calculated by each iteration 
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate sum while taking input
    }

   
    //result
    printf("\nThe sum of elements in the array is: %d\n", sum);

    return 0;
}
