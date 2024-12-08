#include <stdio.h>

int main() {
    // Your code goes here
    int mat[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("enter the element of the %d%d position : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("the entered matrix is : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("[%d] ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}