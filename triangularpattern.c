#include <stdio.h>

int triangle(int num){
        for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
}
int rtriangle(int num){
        for(int i=num;i>0;i--){
        for(int j=1;j<=i;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
}

int main() {
    // Your code goes here
    int n,rows;
    printf("Enter how many rows do you want to be printed : ");
    scanf("%d",&rows);
    printf("Enter 0 for triangular pattern and 1 for reverse triangular pattern : ");
    scanf("%d",&n);
    if(n==1){
        rtriangle(rows);
    }
    else
    triangle(rows);
    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         printf("%c",'*');
    //     }
    //     printf("\n");
    // }
    return 0;
}