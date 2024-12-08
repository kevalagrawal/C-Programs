//Harmonic Series Sum: Write a program to calculate the sum of the first N terms of the harmonic series.

#include <stdio.h>

int main() {
    // Your code goes here
    float n;
    printf("Enter the number : ");
    scanf("%f",&n);
    float sum=0,i;
    for(i=1;i<=n;i++){
        sum+=1/i;
    }
    printf("The sum is : %f",sum);
    return 0;
}