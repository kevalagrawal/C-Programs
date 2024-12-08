#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[] = {1, 5, 4, 8, 7, 9, 6, 9};
    bool swap;
    int temp;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("The Array Before Sorting is : \n");
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n - 1; i++) {
        swap = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = true;
            }
        }
        // If no elements were swapped, the array is already sorted
        if (swap==false) {
            break;
        }
    }

    // Print sorted array
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
