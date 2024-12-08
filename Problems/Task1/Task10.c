//GCD Calculations

#include <stdio.h>

int gcd(int num1,int num2){
    while(num2!=0){
        int temp = num2;
        num2 = num1%num2;
        num1=temp;
    }
    return num1;
}

int main() {
    // Your code goes here
    int a,b;
    printf("Enter the two numbers : ");
    scanf("%d %d", &a,&b);
    printf("The gcd of %d and %d is %d",a,b,gcd(a,b));
    return 0;
}