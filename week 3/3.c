//Write a program to find the  difference between the 2nd smallest and 3rd biggest number in the list.
// The input is an array given through the keyboard. It should work for any array of size 3 or more .

#include<stdio.h>
int main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Array size should be 3 or more.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int smallest = arr[0], second_smallest = arr[1];
    for (i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }
    printf("second smallest number is:%d",second_smallest);

    int largest = arr[0], second_largest = arr[0], third_largest = arr[0];
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            third_largest = second_largest;
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            third_largest = second_largest;
            second_largest = arr[i];
        } else if (arr[i] > third_largest && arr[i] != second_largest && arr[i] != largest) {
            third_largest = arr[i];
        }
    }
    printf("\nthird largest number is:%d",third_largest);


    int difference = third_largest - second_smallest;

    printf("\nThe difference between the 2nd smallest and 3rd biggest numbers is: %d\n", difference);

    return 0;
}
