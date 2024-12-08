//Reverse a number

#include <stdio.h>

int main() {
    // Your code goes here
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    while(n>0){
        int d=n%10;
        printf("%d",d);
        n/=10;
    }
    return 0;
}