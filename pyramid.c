#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for(int i=n;i>=1;i--){
        for(int j=0;j<=n-1;j++){
            printf(" ");
        }
        for(int k=n;k>=1;k--){
            printf("*");
        }
        for(int l=n-1;l>1;l--){
            printf("*");
        }
    }
    getch();
}
