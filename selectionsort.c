#include <stdio.h>

void ss(int arr[], int n){
    for(int i=0;i<n-2;i++){
        int min = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    // Your code goes here
    int a[] = {13,46,24,52,20,9};
    ss(a,6);
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    return 0;
}