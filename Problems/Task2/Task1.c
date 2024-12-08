#include <stdio.h>

int main() {
    // Your code goes here
    int marks[10];
    for(int i=0;i<10;i++){
        printf("Enter the value for %d term : ",i);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<10;i++){
        printf("The value of %d term is %d\n",i,marks[i]);
    }
    return 0;
}