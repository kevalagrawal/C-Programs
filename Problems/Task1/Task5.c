//Sum of Digits

#include <stdio.h>

int main() {
    // Your code goes here
    int n,sum=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    while(n>0){
        int d=n%10;
        sum+=d;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}