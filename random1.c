// #include <stdio.h>

// void printArray(int arr[], int size) {
//     printf("{");
//     for (int i = 0; i < size; i++) {
//         if (i > 0) {
//             printf(", ");
//         }
//         printf("%d", arr[i]);
//     }
//     printf("}\n");
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printArray(arr, size);

//     return 0;
// }


#include<stdio.h>
int main(){
    int n,org,r,sum=0;
    printf("enter the number : ");
    scanf("%d",&n);
    org=n;
    while(n!=0){
        r = n%10;
        sum = sum*10 + r;
        n /= 10;
    }
    if(org == sum){
        printf("the number is a palindrome");
    }
    else
    printf("the number is not a palindrome");
    return 0;
}