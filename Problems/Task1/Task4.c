//Prime Number Check

#include <stdio.h>

int main() {
    // Your code goes here
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
    }
    }
                if(c!=2){
                printf("The number is not a prime number");
            }
            else
            printf("The number is a prime number");
    return 0;
}