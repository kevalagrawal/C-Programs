#include <stdio.h>

int fun(int array[]){
    int sum=0;
    for(int i=0;i<7;i++){
        sum+=array[i];        
    }
    printf("%d\n",sum);
    printf("then the average of the elements of the array is :\n");
    int avg=sum/2;
    printf("%d",avg);
}

int main() {
    // Your code goes here
    int arr[]={1,2,3,4,5,6,7};
    int avg = fun(arr);
    return 0;
}