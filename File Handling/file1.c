#include <stdio.h>

int main() {
    // Your code goes here
    int n;
    FILE *fptr;
    fptr = fopen("Odd Numbers.txt","a");
    if(fptr == NULL){
        printf("This file does not exists");
    }
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n%2 == 0){
        for(int i=1;i<n;i=i+2){
            fprintf(fptr,"%d ",i);
        }
    }
    else
        for(int i=1;i<=n;i=i+2){
            fprintf(fptr,"%d ",i);
        }

    char ch[90] = "kevalagrawal";
    fprintf(fptr,"%s",ch);
    char a[100];
    fprintf(fptr,"%s",a);
    printf("%c",a);
    fclose(fptr);
    return 0;
}