#include <stdio.h>
#include<stdbool.h>

void is(int arr[],int n){
    for(int i=0;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

void sele(int arr[] , int n){
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void bubble(int arr[] , int n){
    bool swapped = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main() {
    // Your code goes here
    int a[] = {14,9,15,12,6,8,13};
    bubble(a,7);
    for(int i=0;i<7;i++){
        printf("%d ",a[i]);
    }
    return 0;
}