#include <stdio.h>

/* Factorial Calculation*/

/*int factorial(int number){
    if(number==0 || number==1){
        return 1;
    }
    else{
        return (number * factorial(number-1));
    }
}*/

int factorial(int number) {
    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return -1; // Or any appropriate error value
    }

    if (number == 0 || number == 1) {
        return 1;
    } else {
        int fact=number;
        for(int i=number-1;i>=2;i--){
            fact*=i;
        }
        return fact;
    }
}

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("The factorial of %d is %d",n,factorial(n));

    return 0;
}