#include <stdio.h>

int main() {
    // Your code goes here
    int arr[] = {1,2,3,4,5,6,7};
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int size = sizeof(arr)/sizeof(arr[0]);
    int left = 0 ;
    int right = size - 1;
    int key;
    printf("Enter the number : ");
    scanf("%d",&key);
    int result = -1;
    for(int i=0;i<size;i++){
        int mid = left + (right - left)/2;
        if(arr[mid] == key){
            result = mid;
            break;
        }

        else if(arr[mid]>key){
            right = mid -1;
        }

        else
        left = mid + 1;
    }
    if(result == -1){
        printf("The key is not present in the array");
    }
    else
    printf("The key %d is present at the %d index of the array",key,result);
    return 0;
}