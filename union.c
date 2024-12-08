#include <stdio.h>

int main() {
    // Your code goes here
    union test{
        char name[10];
        int marks;
    }st1;
    printf("enter the name : ");
    scanf("%s",&st1.name);
    printf("the name is %s",st1.name);
    return 0;
}