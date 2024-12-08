//Perfect Number Check

#include <stdio.h>

int main() {
    // Your code goes here
    int n,sum=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("The number is a perfect number.");
    }
    else
    printf("The number is not a perfect number.");
    return 0;
}