#include <stdio.h>

int main() {
    // Your code goes here
    int m,n,o,p;
    printf("Enter the size of Matrix A : ");
    scanf("%d %d",&m,&n);
    printf("Enter the size of Matrix B : ");
    scanf("%d %d",&o,&p);
    if(n==o){
    printf("Matrix Multiplication : \n\n");
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the %d%d element of the Matrix A : ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    int b[n][p];
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            printf("Enter the %d%d element of the Matrix B : ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("Matrix A : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    int c[m][p];

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            c[i][j] = 0;
        }
    }
    printf("\nMatrix C : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\nMultiplication is : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    }
else
printf("Multiplication for the two matrices is not possible.");



    return 0;
}