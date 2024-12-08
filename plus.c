#include<stdio.h>

int main() {
    int n = 5; // Size of the pattern (can be adjusted)
    int mid = n / 2; // Calculate the middle index for the cross

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' at the middle row or middle column
            if (i == mid || j == mid) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
