//Write a C program to find the sum of all elements in an array.

#include <stdio.h>

int main() {
    // Your code goes here
    int marks[5]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=marks[i];
    }
    printf("%d",sum);
    return 0;
}