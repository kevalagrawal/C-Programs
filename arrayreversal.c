#include <stdio.h>

int rev(int array[]){
    // for(int i=4;i>=0;i--){
    //     printf("%d\n",ptr[i]);
    // }
    int temp;
    for(int i=0;i<7/2;i++){
        temp=array[i];
        array[i]=array[6-i];
        array[6-i]=temp;
    }
}

int main() {
    // Your code goes here
    int arr[]={1,2,3,4,5,6,7};
    rev(arr);
    for(int i=0;i<7;i++){
        printf("%d",arr[i]);
    }
    return 0;
}