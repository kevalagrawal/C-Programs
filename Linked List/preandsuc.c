#include <stdio.h>

int main() {
    // Your code goes here
    int lis[5];
    printf("enter the elements of the array : ");
    for(int i=0;i<5;i++){
        scanf("%d",&lis[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d",lis[i]);
    }
    printf("\n");
    int n,f=0;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        if(n==lis[i]){
            f=1;
            (i>0)?printf("the pre is %d",lis[i-1]):printf("pre is not possible");
            (i<5)?printf("the suc is %d",lis[i+1]):printf("the suc is not possible");
        }
    }
    if(f==0){
        printf("no element found");
    }
    return 0;
}