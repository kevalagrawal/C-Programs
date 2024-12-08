//Armstrong Check

#include <stdio.h>

int main() {
    // Your code goes here
    int n,temp,same=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    int o=n;
    while(n>0){
        temp=n%10;
        same=same+(temp*temp*temp);
        n/=10;
    }
    if(same==o){
        printf("The number is an armstrong");
    }
    else{
    printf("The number is not an armstrong");
    }
    return 0;
}