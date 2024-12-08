//Sum of all even numbers

#include <stdio.h>

int main() {
    // Your code goes here
    int n,sum=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        if(i%2==0){
            sum+=i;
        }
    }
        printf("The sum of all even numbers from 1 to %d is %d",n,sum);
    return 0;
}