//Palindrome Check

#include <stdio.h>

int main() {
    // Your code goes here
    int n,temp,same=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    int o=n;
    while(n>0){
        temp=n%10;
        same=same*10+temp;
        n/=10;
    }
    if(same==o){
        printf("The number is palindrome");
    }
    else{
    printf("The number is not a palindrome");
    }
    return 0;
}