//Problem: Define a structure `Rectangle` with fields for length and width. Write a function to calculate the area of a rectangle.

#include <stdio.h>
typedef unsigned int ul;

typedef struct rectangle{
    ul length;
    ul width;  
}R;

int area(R rect){
    return rect.length * rect.width;
}

int main() {
    // Your code goes here
    R keval = {8,9};
    printf("the area of the rectangle with length %u and width %u is %u",keval.length,keval.width,area(keval));
    return 0;
}