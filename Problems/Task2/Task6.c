//Write a C program to reverse the elements of an array.

#include <stdio.h>

int main() {
    // Your code goes here
    int arr[5]={1,2,3,4,5};
    for(int i=4;i>=0;i--){
        printf("%d  ",arr[i]);
    }
    return 0;
}