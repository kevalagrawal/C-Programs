//Write a C program to find the average of all elements in an array.

#include <stdio.h>

int main() {
    // Your code goes here
    int marks[5]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=marks[i];
    }
    long avg=sum/5;
    printf("%d",avg);
    return 0;
}

// int main(){
//     int marks[10],sum=0;
//     for(int i=1;i<3;i++){
//         printf("Enter the %d value to get the sum : ",i);
//         scanf("%d",&marks[i]);
//         sum+=marks[i];
//     }
//     printf("The sum of two numbers is %d",sum);
//     return 0;
// }