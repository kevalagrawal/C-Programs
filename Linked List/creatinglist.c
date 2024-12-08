#include <stdio.h>

int main() {
    // Your code goes here
    int lis[5];
    printf("enter the elements of list : \n");
    for(int i=0;i<5;i++){
        scanf("%d",&lis[i]);
    }
    printf("elements of the list are : \n");
    for(int i=0;i<5;i++){
        printf("%d",lis[i]);
    }
    printf("\n");
    printf("reversed list is : \n");
    printf("[");
    for(int i=4;i>=0;i--){
        printf("%d ",lis[i]);
    }
    printf("]");

    int n,f=0;
    printf("enter the value of the element : ");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        if(n==lis[i]){
            f=1;
            printf("the position of %d is %d",n,i);
        }
    }
    if(f==0){
        printf("no element is found");
    }
    
    return 0;
}