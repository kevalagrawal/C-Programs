#include <stdio.h>

int fun(int *ptr){
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=*(ptr+i);
    }
    int avg = sum/2;
    printf("the sum of the array is : %d\n",sum);
    printf("the average of the array is : %d",avg);
}

int main() {
    // Your code goes here
    int arr[]={1,2,3,4,5};
    fun(arr);
    return 0;
}