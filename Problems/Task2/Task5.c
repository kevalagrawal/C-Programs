//Write a C program to count the number of even and odd elements in an array.

#include <stdio.h>

int main() {
    // Your code goes here
    int arr[5]={1,2,3,4,5};
    int count=0,cent=0;
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            cent++;
        }
        else{
            count++;
        }
    }
    for(int i=0;i<5;i++){
        printf("[%d] ",arr[i]);
    }
    printf("\nThe number of even elements in an array is %d\n",cent);
    printf("The number of odd elements in an array is %d",count);
    return 0;
}