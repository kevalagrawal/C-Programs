#include <stdio.h>
#include<stdlib.h>

int main() {
    // Your code goes here
    int chars,i=0;
    char a,b;
    char *ptr;
    while(i<3){
    printf("Enter the number of characters in your Employee ID : \n");
    scanf("%d",&chars);
    getchar();
    printf("Enter the value of a :\n");
    scanf("%c",&a);
    getchar();
    printf("Enter the value of b :\n");
    scanf("%c",&b);
    getchar();
    ptr = (char *)malloc((chars+1)*sizeof(char));
    printf("Enter your Employee ID : ");
    scanf("%s",ptr);
    printf("Your employee id is %s\n",ptr);
    free(ptr);
    i++;
    }
    return 0;
}