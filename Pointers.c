//Pointers 
#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Declare a pointer to an integer
    int *ptr;

    // Assign the address of 'a' to the pointer 'ptr'
    ptr = &a;

    // Swap the values using the pointer
    int temp = *ptr;  // Store the value at the address pointed to by 'ptr' (which is 'a') in a temporary variable 'temp'
    *ptr = b;        // Change the value at the address pointed to by 'ptr' (which is 'a') to the value of 'b'
    b = temp;        // Assign the value originally stored in 'a' (now in 'temp') to 'b'

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
