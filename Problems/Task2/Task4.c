//Write a C program to find the maximum and minimum element in an array.

#include <stdio.h>

int main() {
    int arr[100]; // Array to store elements (can be adjusted based on your needs)
    int n, i, max, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input validation (optional): Check for valid array size
    if (n <= 0) {
        printf("Invalid array size. Please enter a positive integer.\n");
        return 1; // Indicate error (optional)
    }

    for (i = 0; i < n; i++) {
        printf("Enter the value of %d element of the array:",i);
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element (assuming non-empty array)
    max = min = arr[0];

    // Traverse the array starting from the second element
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } else if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element in array: %d\n", max);
    printf("Minimum element in array: %d\n", min);

    return 0;
}
