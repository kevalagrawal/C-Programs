//Fibonacci Sequence
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) { // Base cases
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
    }
}

int main() {
    int num;
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci(i)); // Call the fibonacci function for each term
    }
    printf("\n");

    return 0;
}


// int main(){
//     int a=0,b=1,c,n,i=0;
//     printf("Enter the number : ");
//     scanf("%d", &n);
//     printf("%d %d ",a,b);
//     for(;i<n-2;i++){
//         c=a+b;
//         printf("%d ", c);
//         a=b;
//         b=c;
//     }
//     return 0;
// }