#include <stdio.h>

/* Addition of natural numbers */

/*int sum(int number){
    if(number <= 0){
        printf("Enter a valid natural number");
    }
    else{
        int sum=0;
        for(int i=0;i<=number;i++){
            sum+=i;
        }
        return sum;
    }
}*/

int sum(num){
    if(num<=0){
        printf("Enter a valid natural number");
    }
    else{
        return num+sum(num); 
    }
}

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("The sum of %d natural number is : %d", n, sum(n));
    
    return 0;
}